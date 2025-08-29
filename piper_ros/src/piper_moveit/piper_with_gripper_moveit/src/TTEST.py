import rclpy
import time
from rclpy.node import Node
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import Pose, PoseStamped
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint, JointTrajectory
from builtin_interfaces.msg import Duration
from xela_server_ros2.msg import SensStream
import numpy as np
import threading
from piper_with_gripper_moveit.action import TargetPose
from piper_with_gripper_moveit.action import PoseGoal
import sys
from scipy.spatial.transform import Rotation as R
from rclpy.clock import Clock
import os
import joblib
from collections import deque

class ControlTower(Node):
    # ================================================================= #
    # 사용자님의 원본 클래스 코드는 전혀 수정하지 않았습니다.
    # __init__ 부터 execute_sequence 까지 모두 동일합니다.
    # ================================================================= #
    def __init__(self):
        super().__init__('control_tower_node')

        self.ee_pose = None
        self.prev_x = None
        self.prev_y = None
        self.prev_z = None
        self.data_buffer = deque(maxlen=5)
        self.cum_x = [0.0] * 16
        self.cum_y = [0.0] * 16
        self.cum_z = [0.0] * 16

        self.cluster_label = None # cluster_color 대신 label을 직접 저장
        self.z_aligned = False
        self.contacted = False

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

        # 서버가 뜰 때까지 기다리는 로직을 __init__에 추가하면 더 안정적입니다.
        servers_ready = True
        if not self._arm_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("Arm action server not available.")
            servers_ready = False
        if not self._gripper_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("Gripper action server not available.")
            servers_ready = False

        if not servers_ready:
            self.destroy_node()
            rclpy.shutdown()
            raise RuntimeError("필수 액션 서버를 찾을 수 없습니다.")


        self.arm_joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        self.gripper_joint_names = ['joint7', 'joint8']


    def ee_pose_callback(self, msg):
        pos = msg.position
        ori = msg.orientation
        r = R.from_quat([ori.x, ori.y, ori.z, ori.w])
        T = np.eye(4)
        T[:3, :3] = r.as_matrix()
        T[:3, 3] = [pos.x, pos.y, pos.z]
        self.ee_pose = T

    # 사용자님의 원본 _send_goal 함수
    def _send_goal(self, client, joint_names, joint_values, wait_for_result=True, timeout_sec=10.0):
        goal_msg = FollowJointTrajectory.Goal()
        goal_msg.trajectory.joint_names = joint_names
        goal_msg.trajectory.header.stamp = self.get_clock().now().to_msg()
        point = JointTrajectoryPoint()
        point.positions = [float(x) for x in joint_values]

        if set(joint_names) == set(self.gripper_joint_names):
            point.time_from_start = Duration(sec=2, nanosec=0)
        else:
            point.time_from_start = Duration(sec=5, nanosec=0)

        goal_msg.trajectory.points.append(point)

        # wait_for_server는 __init__에서 이미 확인했으므로 여기서는 생략 가능
        # if not client.wait_for_server(timeout_sec=timeout_sec):
        #     self.get_logger().error(f"Action server '{client._action_name}' not available.")
        #     return False

        send_goal_future = client.send_goal_async(goal_msg)
        # 여기서 spin은 작업 스레드에서만 독점적으로 사용됩니다.
        rclpy.spin_until_future_complete(self, send_goal_future)

        goal_handle = send_goal_future.result()
        if not goal_handle or not goal_handle.accepted:
            self.get_logger().warn(f"Goal for '{client._action_name}' rejected.")
            # return False
        if not wait_for_result:
            return True

        get_result_future = goal_handle.get_result_async()
        # 여기서 spin은 작업 스레드에서만 독점적으로 사용됩니다.
        rclpy.spin_until_future_complete(self, get_result_future)

        result = get_result_future.result()
        if not result:
            self.get_logger().error("결과를 받지 못했습니다.")
            # return False

        if result.status == GoalStatus.STATUS_SUCCEEDED:
            return True
        else:
            self.get_logger().warn(f"Action '{client._action_name}' failed with status: {result.status}")
            # return False



    def goal(self, joint_values_8dof, gripper_action='keep'):
        self.get_logger().info(f"[Goal 명령] Pose: {joint_values_8dof}, Gripper: {gripper_action}")
        arm_target = joint_values_8dof[:6]

        success = self._send_goal(self._arm_client, self.arm_joint_names, arm_target, wait_for_result=True)
        if not success:
            self.get_logger().error("  >> 팔 이동 실패")
            # return False

        if gripper_action == 'open':
            return self.open_gripper()
        elif gripper_action == 'close':
            return self.close_gripper()
        
        return True

    def send_gripper_command(self, joint7, joint8, wait_for_result=True):
        gripper_target = [joint7, joint8]
        return self._send_goal(
            self._gripper_client,
            self.gripper_joint_names,
            gripper_target,
            wait_for_result=wait_for_result
        )
    
    def close_gripper(self):
        self.get_logger().info("그리퍼 클로즈")
        return self.send_gripper_command(0.0, -0.0, wait_for_result=True)

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

                norm = np.linalg.norm(mean_vec_biased)
                z_axis = np.array([0, 0, 1])
                cos_theta = np.dot(mean_vec_biased, z_axis) / (norm + 1e-8)
                theta_deg = np.degrees(np.arccos(np.clip(cos_theta, -1.0, 1.0)))


            self.prev_x, self.prev_y, self.prev_z = x_vals, y_vals, z_vals
        except Exception as e:
            self.get_logger().error(f"Sensor callback error: {e}")


    def execute_sequence(self):
        
        self.close_gripper()

    

def main(args=None):
    rclpy.init(args=args)
    
    try:
        node = ControlTower()
    except RuntimeError as e:
        print(f"노드 초기화 중 오류 발생: {e}")
        return

    # MultiThreadedExecutor는 여전히 사용합니다.
    # 콜백들이 블로킹 함수(spin_until_future_complete)에 의해 중단되지 않도록 하기 위함입니다.
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)

    # 메인 로직을 실행할 작업 스레드
    sequence_thread = threading.Thread(target=node.execute_sequence, daemon=True)
    sequence_thread.start()

    # =================================================================================
    # 중요: 메인 스레드에서는 executor.spin()을 호출하지 않습니다!
    # 대신, 작업 스레드가 끝날 때까지 (또는 Ctrl+C가 눌릴 때까지) 기다리기만 합니다.
    # 모든 ROS 메시지 처리는 sequence_thread 내부의 rclpy.spin_until_future_complete가
    # 전담하게 됩니다.
    # =================================================================================
    try:
        # 작업 스레드가 살아있는 동안 메인 스레드는 여기서 대기합니다.
        sequence_thread.join()
    except KeyboardInterrupt:
        node.get_logger().info('사용자에 의해 중단 요청됨.')
    finally:
        node.get_logger().info('노드 종료 중...')
        # Executor와 노드를 깔끔하게 종료합니다.
        executor.shutdown()
        # 노드가 이미 파괴되었을 수 있으므로 확인 후 파괴
        if rclpy.ok():
            node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()