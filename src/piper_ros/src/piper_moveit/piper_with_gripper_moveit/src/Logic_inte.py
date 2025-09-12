import rclpy
import time
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import Pose, PoseStamped
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from builtin_interfaces.msg import Duration # <--- 이 Duration은 이미 메시지 타입입니다.
from xela_server_ros2.msg import SensStream
import numpy as np
import threading
from piper_with_gripper_moveit.action import TargetPose
from piper_with_gripper_moveit.action import PoseGoal
import sys
from scipy.spatial.transform import Rotation as R
from rclpy.clock import Clock
import matplotlib.pyplot as plt
import os
import joblib
from mpl_toolkits.mplot3d import Axes3D  # 이거 꼭 추가

SCALER_FILE = 'scaler_kmeansf.pkl'
KMEANS_MODEL_FILE = 'kmeans_modelf.pkl'


class ControlTower(Node):
    def __init__(self):
        super().__init__('control_tower_node')

        try:
            script_dir = os.path.dirname(os.path.abspath(__file__))
            self.scaler = joblib.load(os.path.join(script_dir, SCALER_FILE))
            self.kmeans = joblib.load(os.path.join(script_dir, KMEANS_MODEL_FILE))
            self.n_clusters = self.kmeans.n_clusters
            self.get_logger().info(f"✅ Models loaded.")
        except Exception as e:
            self.get_logger().error(f"❌ Model loading failed: {e}")
            self.destroy_node()
            return

        # self.plot_data_lock = threading.Lock()

        self.ee_pose = None
        self.prev_x = None
        self.prev_y = None
        self.prev_z = None
        self.cum_x = [0.0] * 16
        self.cum_y = [0.0] * 16
        self.cum_z = [0.0] * 16

        # plt.ion()
        # self.fig = plt.figure(figsize=(6, 4))
        # self.ax = self.fig.add_subplot(111, projection='3d')
        # self.fig.canvas.manager.set_window_title("Tactile vectors")
        # self.ax.set_xlim([-1.2, 1.2])
        # self.ax.set_ylim([-1.2, 1.2])
        # self.ax.set_zlim([-0.2, 1.2])
        # self.ax.set_xlabel('X')
        # self.ax.set_ylabel('Y')
        # self.ax.set_zlabel('Z')
        # self.show_text = self.ax.text2D(0.95, 0.95, "", transform=self.ax.transAxes, ha='right', va='top', fontsize=12)

        
        # self.quiver_handles = None
        # self.biased_arrow_handle = None
        # plt.show(block=False) # 창을 띄우고 바로 다음 코드로 넘어감

        self.cluster_color = 'gray'
        self.mean_vec_biased = None
        self.scaled_vecs = None

        self.z_aligned = False
        self.contacted = False
        # self.quiver, self.biased_arrow = None, None

        self.sensor_update_count = 0

        self.subscription = self.create_subscription(
            SensStream,
            '/xServTopic',
            self.sensor_callback,
            10
        )       
        self.create_subscription(Pose, '/end_pose', self.ee_pose_callback, 10)

        self._arm_client = ActionClient(self, FollowJointTrajectory, '/moveit_action/arm_controller/follow_joint_trajectory')
        self._gripper_client = ActionClient(self, FollowJointTrajectory, '/gripper_controller/follow_joint_trajectory')
        self._pose_client = ActionClient(self, PoseGoal, 'pose_goal')

        self.arm_joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        self.gripper_joint_names = ['joint7', 'joint8']
        
        self.ba_init = [-1.6379, 1.5724, -1.2721, -0.0566, 1.2838, 0.2908, 0.0, 0.0] 
        self.wm_init = [1.5640, 0.4538, -1.5319, -0.0488, 1.2797, 0.3169, 0.0, 0.0] 
        self.ba_end = [-1.5527, 2.6613, -1.5133, -0.2642, 0.6119, 0.3951, 0.0, 0.0]
        self.wm_end = [1.58808431, 2.04858847, -2.20396218, -0.039109448, 0.275493092, 0.81960634, 0.0, 0.0]      
        self.wm_mid = [1.574251224, 0.336651756, -1.159398016, -0.185900708, 1.287576528, -1.357858404, 0.0, 0.0]
        self.home = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

    def ee_pose_callback(self, msg):
        pos = msg.position
        ori = msg.orientation
        r = R.from_quat([ori.x, ori.y, ori.z, ori.w])
        T = np.eye(4)
        T[:3, :3] = r.as_matrix()
        T[:3, 3] = [pos.x, pos.y, pos.z] 
        self.ee_pose = T

    def _send_goal(self, client, joint_names, joint_values, wait_for_result=True, timeout_sec=10.0):
        goal_msg = FollowJointTrajectory.Goal()
        goal_msg.trajectory.joint_names = joint_names
        goal_msg.trajectory.header.stamp = self.get_clock().now().to_msg()
        point = JointTrajectoryPoint()
        point.positions = [float(x) for x in joint_values]
        
        # 시간 분기: 그리퍼는 2초, 팔은 5초
        if set(joint_names) == set(self.gripper_joint_names):
            point.time_from_start = Duration(sec=2, nanosec=0)
        else:
            point.time_from_start = Duration(sec=5, nanosec=0)
        
        goal_msg.trajectory.points.append(point)

        if not client.wait_for_server(timeout_sec=timeout_sec):
            self.get_logger().error(f"Action server '{client._action_name}' not available.")
            return False

        send_goal_future = client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()
        if not goal_handle or not goal_handle.accepted:
            return False
        if not wait_for_result:
            return True

        get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, get_result_future)

        result = get_result_future.result()
        if not result:
            self.get_logger().error("결과를 받지 못했습니다.")
            return False

        return result.status == GoalStatus.STATUS_SUCCEEDED

    def send_joint_command(self, joint_values_8dof):
        self.get_logger().info(f"명령 수신: {joint_values_8dof}")
        arm_target = joint_values_8dof[0:6]
        gripper_target = joint_values_8dof[6:8]

        arm_success = self._send_goal(self._arm_client, self.arm_joint_names, arm_target, wait_for_result=True)
        if not arm_success:
            self.get_logger().error("팔 이동 실패. 다음 동작을 취소합니다.")
            return False

        self._send_goal(self._gripper_client, self.gripper_joint_names, gripper_target, wait_for_result=True)
        
        self.get_logger().info(f"명령 완료: {joint_values_8dof}")
        return True

    def goal(self, joint_values_8dof, gripper_action='keep'):

        self.get_logger().info(f"[Goal 명령] Pose: {joint_values_8dof}, Gripper: {gripper_action}")
        
        arm_target = joint_values_8dof[:6]
        gripper_target = joint_values_8dof[6:8]

        # 팔 먼저 이동
        success = self._send_goal(self._arm_client, self.arm_joint_names, arm_target, wait_for_result=True)
        if not success:
            self.get_logger().error("  >> 팔 이동 실패")
            return False

        # 그리퍼 동작 선택
        if gripper_action == 'open':
            self.open_gripper()
        elif gripper_action == 'close':
            self.close_gripper()
        elif gripper_action == 'keep':
            pass  # 아무것도 하지 않음
        else:
            self.get_logger().warn(f"  >> 알 수 없는 그리퍼 명령: {gripper_action}")

        return True

    def send_gripper_command(self, joint7, joint8, wait_for_result=True):
        gripper_target = [joint7, joint8]
        # self.get_logger().info("2번")
        return self._send_goal(
            self._gripper_client,
            self.gripper_joint_names,
            gripper_target,
            wait_for_result=wait_for_result
        )

    def open_gripper(self):
        self.get_logger().info("그리퍼 오픈")
        return self.send_gripper_command(0.035, -0.035, wait_for_result=True)

    def close_gripper(self):
        self.get_logger().info("그리퍼 클로즈")
        return self.send_gripper_command(0.0, -0.0, wait_for_result=True)


    def send_pose(self, pose: PoseStamped):
        goal_msg = PoseGoal.Goal()
        goal_msg.target_pose = pose

        if not self._pose_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("pose_goal 서버가 응답하지 않습니다.")
            return False

        send_goal_future = self._pose_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future)
        goal_handle = send_goal_future.result()

        if not goal_handle or not goal_handle.accepted:
            self.get_logger().error("goal이 거부되었습니다.")
            return False

        self.get_logger().info("다시 pose_goal 명령 전송 완료.")

        # 결과 대기
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        result = result_future.result().result

        if result.success:
            self.get_logger().info(f"✅ pose 명령 재시도 성공: {result.message}")
            return True
        else:
            self.get_logger().warn(f"⚠️ pose 명령 실패: {result.message}")
            return False


    ########
    # def _refresh_plot(self):
    #     # 타이머에 의해 주기적으로 호출되는 함수
    #     # Lock을 걸어서 데이터 읽는 동안 콜백이 데이터를 바꾸지 못하게 함
    #     with self.plot_data_lock:
    #         # 그릴 데이터가 없으면 아무것도 안 함
    #         if self.scaled_vecs is None or self.mean_vec_biased is None:
    #             return

    #         # 안전하게 데이터를 지역 변수로 복사
    #         v = self.scaled_vecs
    #         mv = self.mean_vec_biased
    #         color = self.cluster_color


    #     z_axis = np.array([0, 0, 1])
    #     norm = np.linalg.norm(mv)
    #     if norm == 0:
    #         cos_theta = 0.0
    #     else:
    #         cos_theta = np.dot(mv, z_axis) / norm

    #     theta_deg = np.degrees(np.arccos(np.clip(cos_theta, -1.0, 1.0)))


    #     # 기존 화살표 제거
    #     if self.quiver_handles is not None:
    #         self.quiver_handles.remove()
    #     if self.biased_arrow_handle is not None:
    #         self.biased_arrow_handle.remove()

    #     # 새 화살표 그리기
    #     zeros = np.zeros(v.shape[0])
    #     self.quiver_handles = self.ax.quiver(
    #         zeros, zeros, zeros,
    #         v[:, 0], v[:, 1], v[:, 2],
    #         color='blue', alpha=0.5, length=0.5
    #     )
    #     self.biased_arrow_handle = self.ax.quiver(
    #         0, 0, 0,
    #         mv[0], mv[1], mv[2],
    #         color=color, linewidth=2, arrow_length_ratio=0.3
    #     )

    #     self.show_text.set_text(
    #                 f"MRL : {np.linalg.norm(mv):.3f} | θ: {theta_deg:.3f}°"
    #             )
        
    #     # UI 업데이트 요청 (이 함수는 스레드에 안전함)
    #     self.fig.canvas.draw_idle()


    def reset_sensor_data(self):
        self.prev_x = None
        self.prev_y = None
        self.prev_z = None
        self.cum_x = [0.0] * 16
        self.cum_y = [0.0] * 16
        self.cum_z = [0.0] * 16
        self.sensor_update_count = 0

        self.z_aligned = False
        self.contacted = False

        self.cluster_color = 'gray'
        self.mean_vec_biased = None
        self.scaled_vecs = None

        self.get_logger().info("센서 기준값 및 누적값 초기화됨.")

    def sensor_callback(self, msg):
        try:
            x_vals = [t.x for t in msg.sensors[0].taxels]
            y_vals = [t.y for t in msg.sensors[0].taxels]
            z_vals = [t.z for t in msg.sensors[0].taxels]

            if self.prev_x is not None:
                dx = [c - p for c, p in zip(x_vals, self.prev_x)]
                dy = [c - p for c, p in zip(y_vals, self.prev_y)]
                dz = [c - p for c, p in zip(z_vals, self.prev_z)]

                for i in range(16):
                    self.cum_x[i] += dx[i]
                    self.cum_y[i] += dy[i]
                    self.cum_z[i] += dz[i]

                vecs = np.array([self.cum_x, self.cum_y, self.cum_z]).T
                norms = np.linalg.norm(vecs, axis=1)
                max_norm = np.max(norms)
                if max_norm == 0:
                    max_norm = 1e-6
                scaled_vecs = vecs / max_norm
                weights = norms
                weights[weights == 0] = 1e-6

                mean_vec_biased = np.sum(vecs, axis=0) / np.sum(weights)
                current_features = np.concatenate([scaled_vecs.flatten(), mean_vec_biased])

                try:
                    vec3_scaled = self.scaler.transform(mean_vec_biased.reshape(1, -1))
                    self.cluster_label = int(self.kmeans.predict(vec3_scaled)[0])
                except Exception:
                    self.cluster_label = None  # 실패 시 None

                # 색상 팔레트 (원래 쓰던 규칙 유지)
                # colors = ['green', 'red', 'black', 'black']
                colors = ['green', 'black', 'red', 'black']
                cluster_color = colors[self.cluster_label]

                # with self.plot_data_lock:
                #     self.scaled_vecs = scaled_vecs
                #     self.mean_vec_biased = mean_vec_biased
                #     self.cluster_color = cluster_color

                if self.cluster_label == 0:
                    self.z_aligned = True
                else:
                    self.z_aligned = False
                if self.cluster_label == 1:
                    self.contacted = True

            self.prev_x, self.prev_y, self.prev_z = x_vals, y_vals, z_vals

        except Exception as e:
            self.get_logger().error(f"Callback error: {e}")



    def close_door(self):
        pass

    def open_door(self):
        pass

       

    def transform_pose_with_offset(self, pose: Pose, HT: np.ndarray):
        # 1. position 추출
        x = pose.position.x
        y = pose.position.y
        z = pose.position.z

        # 2. 동차좌표 벡터 생성
        point_vec = np.array([x, y, z, 1.0])  # 4x1 벡터

        # 3. 동차변환행렬 곱
        transformed = HT @ point_vec  # (4x4) @ (4x1) → (4x1)

        # 4. 새로운 Pose로 반환
        new_pose = Pose()
        new_pose.position.x = transformed[0]
        new_pose.position.y = transformed[1]
        new_pose.position.z = transformed[2]

        # orientation은 그대로 유지하거나 필요시 수정
        new_pose.orientation = pose.orientation

        return new_pose


    def target_get(self, mode="basket"): ### basket, wm, mid
        # 액션 클라이언트가 처음이면 생성
        if not hasattr(self, 'action_client'):
            self.action_client = ActionClient(self, TargetPose, 'target_pose')

        # 서버 대기
        if not self.action_client.wait_for_server(timeout_sec=3.0):
            self.get_logger().error('target_pose 액션 서버를 찾을 수 없습니다.')
            return None

        # Goal 메시지 생성
        goal_msg = TargetPose.Goal()
        goal_msg.start = True  # 요청 트리거
        goal_msg.mode = mode

        # Goal 보내기
        self.get_logger().info('target_pose 요청 전송')
        future = self.action_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)

        if not future.done():
            self.get_logger().error('Goal 요청 실패')
            return None

        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn('Goal이 액션 서버에서 거부됨')
            return None

        # 결과 대기
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        result = result_future.result().result

        if result.success:
            self.get_logger().info(f"받은 EA: {result.target_pose}") # EA
            self.get_logger().info(f"현재 Pose: {self.ee_pose}") # EE

        
            R = np.array([
                [-0.07403140416428758,  0.9970253999896115, -0.02144068499412377],
                [-0.997213265121594,   -0.07381230005954229,  0.010837353249242954],
                [0.009222530183886607,  0.022183239967900933,  0.9997113827508088]
            ])

            t = np.array([[-0.04615831961252831],
                        [ 0.035761448900299364],
                        [ 0.06590399326489311]]) ######## 원래 07077399326489311 ############

            ee2cam = np.vstack((np.hstack((R, t)), [0, 0, 0, 1]))

            base2cam = self.ee_pose @ ee2cam ## O2C
            

            pose = self.transform_pose_with_offset(result.target_pose, base2cam) ## O2t
            self.get_logger().info(f"변환한 bA: {pose}") # bA

            pose_stamped = PoseStamped()
            pose_stamped.pose = pose
            pose_stamped.header.frame_id = 'base_link'
            pose_stamped.header.stamp = Clock().now().to_msg()

            while not self.send_pose(pose_stamped):
                self.get_logger().warn("  >> pose 명령 실패 → 재시도 중")
            self.close_gripper()
            while not self.goal(self.ba_init, 'keep'):
                self.get_logger().warn("  >> 실패 → 재시도 중")
            return None
        else:
            self.get_logger().warn("결과 없음 -> 문 닫기 실행")
            self.close_door()
            while not self.goal(self.home, 'keep'):
                self.get_logger().warn("  >> 실패 → 재시도 중")
            rclpy.shutdown()
            sys.exit(0)
            return None


    def target_get2(self, mode = "failure_bg"):
        # 액션 클라이언트가 처음이면 생성
        if not hasattr(self, 'action_client'):
            self.action_client = ActionClient(self, TargetPose, 'target_pose')

        # 서버 대기
        if not self.action_client.wait_for_server(timeout_sec=3.0):
            self.get_logger().error('target_pose 액션 서버를 찾을 수 없습니다.')
            return None

        # Goal 메시지 생성
        goal_msg = TargetPose.Goal()
        goal_msg.start = True  # 요청 트리거
        goal_msg.mode = mode

        # Goal 보내기
        self.get_logger().info('target_pose 요청 전송')
        future = self.action_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)

        if not future.done():
            self.get_logger().error('Goal 요청 실패')
            return None

        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warn('Goal이 액션 서버에서 거부됨')
            return None

        # 결과 대기
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        result = result_future.result().result

        if result.success:
            # self.get_logger().info(f"받은 pose: {result.target_pose}")
            # return result.target_pose
            self.get_logger().info(f"success")
            return True
            #####
            ##### 여기가 이제 포즈로 가서 잡고 다시 ba_init으로 오는 부분
            ##### 
        else:
            self.get_logger().warn("None")
            return None


    def overcome(self):
        while not self.goal(self.wm_mid, 'keep'):
                    self.get_logger().warn("  >> 실패 → 재시도 중")
        self.target_get(mode='failure')  # 감지 및 잡기 시도


    def execute_sequence(self):
        self.get_logger().info("Step 0: 문 여는 중")
        self.open_door()
        self.open_gripper()
        self.get_logger().info("1번")

        while rclpy.ok():
            self.get_logger().info("Step 1: 이니셜 포즈(ba_init)로 이동 중")
            while not self.goal(self.ba_init, 'keep'):
                self.get_logger().warn("  >> 실패 → 재시도 중")
            self.reset_sensor_data()

            while True:
                self.get_logger().info("Step 2: 잡기 시도 중...")
                self.target_get(mode="basket")  # 감지 및 잡기 시도
                #### 잡고 다시 ba_init으로 옴
                self.get_logger().info("🔍 Z-축 정렬 감지")

                # self.z_aligned = True ####

                if self.z_aligned:
                    self.get_logger().info("✅ 잡기 성공")
                    break
                else:
                    self.get_logger().warn("❌ 잡기 실패 →  재시도")
                    while not self.open_gripper():
                        self.get_logger().warn("  >> 그리퍼 오픈 실패 → 재시도 중") 
                    # self.reset_sensor_data() # 이거 해야하나 의문이긴해


            self.get_logger().info("Step 3: 엔드 포즈(wm_end)로 이동 중")
            while not self.goal(self.wm_init, 'keep'): # 가운데로 들어갈 수 있게끔
                self.get_logger().warn("  >> 실패 → 재시도 중")
            self.target_get2()  # 감지 및 잡기 시도
            while not self.goal(self.wm_end, 'keep'):
                self.get_logger().warn("  >> 실패 → 재시도 중")

            self.get_logger().info("Step 4: 접촉 감지 결과 확인 중")
            # self.contacted = True ####
            self.open_gripper()

            if self.contacted:
                self.get_logger().info("  >> 접촉 감지됨 → 실패 극복")
                self.overcome()
                while not self.overcome():
                        self.get_logger().warn("  >> 실패 → 재시도 중") 

                self.get_logger().info("  >> 다시 엔드 포즈(wm_end)로 이동 중")
                while not self.goal(self.wm_end, 'open'):
                    self.get_logger().warn("  >> 실패 → 재시도 중")
            else:
                self.get_logger().info("  >> 접촉 없음")
            
            continue


def main(args=None):
    rclpy.init(args=args)
    node = ControlTower()

    # 노드가 성공적으로 초기화되었는지 확인
    if not rclpy.ok():
        print("노드 초기화 실패, 프로그램을 종료합니다.")
        return

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)

    sequence_thread = threading.Thread(target=node.execute_sequence, daemon=True)
    sequence_thread.start()

    try:
        # executor.spin()은 메인 스레드를 블로킹하며 모든 노드의 콜백을 처리합니다.
        # sequence_thread가 별도로 돌고 있으므로 이 방식이 더 안정적입니다.
        executor.spin()
    except KeyboardInterrupt:
        node.get_logger().info('사용자에 의해 중단됨.')
    finally:
        node.get_logger().info('노드 종료 중...')
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()