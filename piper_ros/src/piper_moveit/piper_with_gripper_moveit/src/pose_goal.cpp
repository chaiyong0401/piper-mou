#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <thread> // std::thread 사용을 위해 추가

#include "piper_with_gripper_moveit/action/pose_goal.hpp"
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>  // ★ 이게 핵심

#include <moveit_msgs/msg/constraints.hpp>
#include <moveit_msgs/msg/joint_constraint.hpp>

#include <moveit/robot_state/robot_state.h>
#include <moveit/robot_state/robot_state.h>

using PoseGoal = piper_with_gripper_moveit::action::PoseGoal;
using GoalHandlePoseGoal = rclcpp_action::ServerGoalHandle<PoseGoal>;
using namespace std::placeholders;

class PoseGoalActionServer : public rclcpp::Node
{
public:
  explicit PoseGoalActionServer(const rclcpp::NodeOptions& options)
  : Node("pose_goal_node", options), logger_(this->get_logger())
  {
    RCLCPP_INFO(logger_, "PoseGoalActionServer 초기화 중...");
    
    // MoveGroupInterface를 생성할 때 this(Node::SharedPtr)와 planning group 이름을 전달합니다.
    // 생성자에서 바로 초기화하기 위해 지연 초기화를 사용합니다.
    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
        std::shared_ptr<rclcpp::Node>(this), "arm");

    action_server_ = rclcpp_action::create_server<PoseGoal>(
      this,
      "pose_goal",
      std::bind(&PoseGoalActionServer::handle_goal, this, _1, _2),
      std::bind(&PoseGoalActionServer::handle_cancel, this, _1),
      std::bind(&PoseGoalActionServer::handle_accepted, this, _1)
    );

    RCLCPP_INFO(logger_, "PoseGoalActionServer 준비 완료.");
  }

private:
  rclcpp::Logger logger_;
  moveit::planning_interface::MoveGroupInterfacePtr move_group_;
  rclcpp_action::Server<PoseGoal>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID&,
    std::shared_ptr<const PoseGoal::Goal> goal)
  {
    RCLCPP_INFO(logger_, "목표 pose 수신: x=%.2f, y=%.2f, z=%.2f",
                goal->target_pose.pose.position.x,
                goal->target_pose.pose.position.y,
                goal->target_pose.pose.position.z);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandlePoseGoal>&)
  {
    RCLCPP_INFO(logger_, "취소 요청 수신.");
    move_group_->stop();
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandlePoseGoal>& goal_handle)
  {
    std::thread{std::bind(&PoseGoalActionServer::execute, this, goal_handle)}.detach();
  }

  void execute(const std::shared_ptr<GoalHandlePoseGoal>& goal_handle)
{
  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<PoseGoal::Result>();

  const std::string base_frame = "base_link";
  const std::string ee_link    = "tcp";
  move_group_->setPoseReferenceFrame(base_frame);
  move_group_->setEndEffectorLink(ee_link);

  // ✅ 목표 허용 오차 추가
  move_group_->setGoalPositionTolerance(0.01);    // 위치 허용오차 10cm
  // move_group_->setGoalOrientationTolerance(0.5); // 자세 허용오차 약 30도
  move_group_->setPlanningTime(5.0);              // 플래닝 시간 늘리기
  move_group_->setMaxVelocityScalingFactor(0.5);  // 속도 줄이면 성공률↑
  move_group_->setMaxAccelerationScalingFactor(0.5);

  const double eef_step       = (goal->eef_step       > 0.0) ? goal->eef_step       : 0.01;
  const double jump_threshold = (goal->jump_threshold >= 0.0)? goal->jump_threshold : 0.0;
  //  이건 ba2wm용
  const double roll_tol_rad     = (goal->roll_tol_rad     > 0.0) ? goal->roll_tol_rad     : 1.0;
  const double pitch_tol_rad     = (goal->pitch_tol_rad     > 0.0) ? goal->pitch_tol_rad     : 1.0;
  const double yaw_tol_rad    = (goal->yaw_tol_rad    > 0.0) ? goal->yaw_tol_rad    : 6.28;


  moveit::core::MoveItErrorCode ec = moveit::core::MoveItErrorCode::FAILURE;

//   if (goal->lock_rp_and_cartesian)  // ← 이 플래그를 "카테시안 사용" 의미로만 씀
// {
//     // 기준 프레임/EE 링크는 위에서 이미 설정됨
//     geometry_msgs::msg::PoseStamped cur = move_group_->getCurrentPose(ee_link);

//     // 웨이포인트 구성: 위치만 목표로 이동 (자세는 현재 자세 유지)
//     std::vector<geometry_msgs::msg::Pose> waypoints;
//     geometry_msgs::msg::Pose wp = cur.pose;
//     wp.position = goal->target_pose.pose.position;   // 목표 위치
//     // wp.orientation = goal->target_pose.pose.orientation; // (원하면) 목표 자세로도 가능
//     waypoints.push_back(wp);

//     // 경로 제약 없음! (R/P 고정 X)
//     moveit_msgs::msg::RobotTrajectory traj;
//     double fraction = move_group_->computeCartesianPath(
//         waypoints,
//         eef_step,           // 예: 0.01
//         jump_threshold,     // 0.0이면 jump 체크 비활성
//         traj,
//         true                // 충돌 회피
//     );

//     moveit::core::MoveItErrorCode ec = moveit::core::MoveItErrorCode::FAILURE;
//     if (fraction > 0.99)  // 거의 전 구간 성공
//     {
//       moveit::planning_interface::MoveGroupInterface::Plan plan;
//       plan.trajectory_ = traj;
//       ec = move_group_->execute(plan);
//     }
//     else
//     {
//       RCLCPP_WARN(logger_, "Cartesian failed (fraction=%.3f)", fraction);
//     }
// }
  

  // ///// ba2wm 용 ////////
  if (goal->lock_rp_and_cartesian)
{
  // --- Roll/Pitch 고정 + 일반 플래닝 (Cartesian 제거) ---
  geometry_msgs::msg::PoseStamped cur = move_group_->getCurrentPose(ee_link);

  // 현재 R/P를 읽어와서 제약으로 고정 (Yaw는 tol로 완화)
  double r = 0, p = 0, y = 0;
  {
    tf2::Quaternion q_cur;
    tf2::fromMsg(cur.pose.orientation, q_cur);
    tf2::Matrix3x3(q_cur).getRPY(r, p, y);
  }

  moveit_msgs::msg::OrientationConstraint ocm;
  ocm.header.frame_id = base_frame;
  ocm.link_name       = ee_link;

  tf2::Quaternion q_lock;
  q_lock.setRPY(0.0, 0.0, y);    //wm2ba용
  // q_lock.setRPY(r, p, 0.0);  // ba2wm용     
  ocm.orientation = tf2::toMsg(q_lock);
  ocm.absolute_x_axis_tolerance = roll_tol_rad;  // roll tol
  ocm.absolute_y_axis_tolerance = pitch_tol_rad;  // pitch tol
  ocm.absolute_z_axis_tolerance = yaw_tol_rad; // yaw tol
  ocm.weight = 1.0;

  moveit_msgs::msg::Constraints path_constraints;
  path_constraints.orientation_constraints.push_back(ocm);
  move_group_->setPathConstraints(path_constraints);

  // 위치 목표만 지정 (자세는 현재 R/P 유지 + yaw 자유)
  move_group_->setPositionTarget(
      goal->target_pose.pose.position.x,
      goal->target_pose.pose.position.y,
      goal->target_pose.pose.position.z,
      ee_link);

  // const moveit::core::RobotStatePtr cur_state = move_group_->getCurrentState();
  // double cur_j1 = cur_state->getVariablePosition("joint6");

  // moveit_msgs::msg::JointConstraint jc_keep;
  // jc_keep.joint_name = "joint6";
  // jc_keep.position = cur_j1;       // 현재값을 중심으로
  // jc_keep.tolerance_below = 0.5;
  // jc_keep.tolerance_above = 0.5;
  // jc_keep.weight = 1.0;

  // moveit_msgs::msg::Constraints c;
  // c.joint_constraints.push_back(jc_keep);
  // move_group_->setPathConstraints(c);

  moveit::planning_interface::MoveGroupInterface::Plan plan;
  if (move_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS)
    ec = move_group_->execute(plan);

  // 제약 해제
  move_group_->clearPathConstraints();
}
  else
  {
    // --- 일반 모드 ---
    move_group_->clearPathConstraints();
    move_group_->setPositionTarget(
        goal->target_pose.pose.position.x,
        goal->target_pose.pose.position.y,
        goal->target_pose.pose.position.z,
        ee_link);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    if (move_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS)
      ec = move_group_->execute(plan);
  }

  // 결과 처리
  if (ec == moveit::core::MoveItErrorCode::SUCCESS)
  {
    result->success = true;
    result->message = "Motion success.";
    goal_handle->succeed(result);
  }
  else
  {
    result->success = false;
    result->message = "Planning/Execution failed.";
    goal_handle->abort(result);
  }
}
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  // MoveIt 파라미터를 노드에 로드하기 위해 NodeOptions를 사용합니다.
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto node = std::make_shared<PoseGoalActionServer>(node_options);

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();
  rclcpp::shutdown();
  return 0;
}