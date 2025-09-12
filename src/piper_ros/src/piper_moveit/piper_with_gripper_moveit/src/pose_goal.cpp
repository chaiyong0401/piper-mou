#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit_msgs/msg/constraints.hpp>
#include <moveit_msgs/msg/orientation_constraint.hpp>
#include <moveit_msgs/msg/robot_trajectory.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <thread>
#include <moveit/robot_trajectory/robot_trajectory.h>
#include <geometry_msgs/msg/twist_stamped.hpp>

#include "piper_with_gripper_moveit/action/pose_goal.hpp"

#include <moveit/kinematic_constraints/utils.h>


using ActionT    = piper_with_gripper_moveit::action::PoseGoal;
using GoalHandle = rclcpp_action::ServerGoalHandle<ActionT>;


class PoseOrCartesianServer : public rclcpp::Node {
public:
  PoseOrCartesianServer(const rclcpp::NodeOptions& opt)
  : Node("pose_goal_server", opt), logger_(get_logger())
  {
    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
      std::shared_ptr<rclcpp::Node>(this), "arm");

    base_frame_ = "base_link";
    ee_link_    = "tcp";
    EEE_ = "EEE";

    move_group_->setPoseReferenceFrame(base_frame_);
    move_group_->setEndEffectorLink(ee_link_);

    server_ = rclcpp_action::create_server<ActionT>(
      this, "pose_goal",
      std::bind(&PoseOrCartesianServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&PoseOrCartesianServer::handle_cancel, this, std::placeholders::_1),
      std::bind(&PoseOrCartesianServer::handle_accept, this, std::placeholders::_1)
    );

    RCLCPP_INFO(logger_, "Action server ready: /pose_goal");
  }

private:
  rclcpp::Logger logger_;
  moveit::planning_interface::MoveGroupInterfacePtr move_group_;
  rclcpp_action::Server<ActionT>::SharedPtr server_;
  std::string base_frame_, ee_link_, EEE_;

  // -------- 액션 콜백 --------
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID&,
                                          std::shared_ptr<const ActionT::Goal> goal) {
    if (goal->mode < 0 || goal->mode > 3) return rclcpp_action::GoalResponse::REJECT;
    // 모드 늘리면 여기 수정해야함 //
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>&) {
    move_group_->stop();
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accept(const std::shared_ptr<GoalHandle>& gh) {
    std::thread([this, gh]{ execute(gh); }).detach();
  }

  void execute(const std::shared_ptr<GoalHandle>& gh) {
    auto goal   = gh->get_goal();
    auto result = std::make_shared<ActionT::Result>();
    bool ok = false;
    std::string msg;

    //////////////////////////////////// POSE ///////////////////////////////////////////////////////

    if (goal->mode == 0) {               

      move_group_->setPlanningPipelineId("");  // 빈 문자열 -> 기본 파이프라인 사용
      move_group_->setPlannerId("");           // 기본 플래너(설정/rviz) 사용

      move_group_->clearPoseTargets();        
      move_group_->clearPathConstraints();    
      move_group_->setStartStateToCurrentState();
      // move_group_->setPoseTarget(goal->target_pose.pose, ee_link_);
      move_group_->setPoseTarget(goal->target_pose.pose, EEE_);
      ok = plan_and_exec();
      msg = ok ? "SUCCESS(M0)" : "FAILED(M0)";

    //////////////////////////////////// POSE2 ///////////////////////////////////////////////////////

    } else if (goal->mode == 3) {

      move_group_->clearPoseTargets();        
      move_group_->clearPathConstraints();    
      move_group_->setStartStateToCurrentState();

      move_group_->setPlanningPipelineId("pilz_industrial_motion_planner");
      move_group_->setPlannerId("LIN");  // LIN / PTP / CIRC

      // 🔎 디버깅 출력
      RCLCPP_INFO(this->get_logger(),
                  "[DEBUG] pipeline=%s, planner=%s",
                  move_group_->getPlanningPipelineId().c_str(),
                  move_group_->getPlannerId().c_str());

      // //////////////// 어떤 조인트가 문제인지 확인용 ///////////////////////////
      // {
      //   const auto cur_state_ptr = move_group_->getCurrentState();
      //   if (!cur_state_ptr) {
      //     RCLCPP_ERROR(this->get_logger(), "[START-BOUNDS] current state is nullptr");
      //   } else {
      //     moveit::core::RobotState start = *cur_state_ptr;
      //     // 로봇 전체의 모든 변수 확인
      //     const auto& vars = start.getVariableNames();
      //     for (const auto& var : vars) {
      //       double v = start.getVariablePosition(var);
      //       const auto& b = start.getRobotModel()->getVariableBounds(var);

      //       if (b.position_bounded_) {
      //         if (v < b.min_position_ || v > b.max_position_) {
      //           RCLCPP_WARN(this->get_logger(),
      //                       "[START-BOUNDS] %s = %.6f (min=%.6f, max=%.6f)",
      //                       var.c_str(), v, b.min_position_, b.max_position_);
      //         }
      //       }
      //     }
      //   }
      // }

      /////////////////////////////// 포지션만 //////////////////////////////////////////
      // move_group_->setPositionTarget(
      //   goal->target_pose.pose.position.x,
      //   goal->target_pose.pose.position.y,
      //   goal->target_pose.pose.position.z,
      //   ee_link_);
      // ok = plan_and_exec();
      // msg = ok ? "SUCCESS(M3)" : "FAILED(M3)";
            

      // 2) 시작 상태 속도 0 보장
      {
        moveit::core::RobotState start = *move_group_->getCurrentState();
        std::vector<double> zeros(start.getVariableCount(), 0.0);
        start.setVariableVelocities(zeros.data());
        // (가끔 가속도도 요구되면)
        start.setVariableAccelerations(zeros.data());
        move_group_->setStartState(start);
      }

      // 3) 현재 EE 자세 유지 + 위치만 변경
      const auto cur = move_group_->getCurrentPose(ee_link_).pose;
      geometry_msgs::msg::Pose target = cur;
      target.position = goal->target_pose.pose.position;

      // 4) 제약(Constraints) 직접 생성 (frame/링크 명확)
      const std::string ref_frame = move_group_->getPlanningFrame(); // 보통 base/world
      move_group_->setPoseReferenceFrame(ref_frame);
      move_group_->setEndEffectorLink(ee_link_);

      geometry_msgs::msg::PoseStamped ps;
      ps.header.frame_id = ref_frame;
      ps.header.stamp = this->now();
      ps.pose = target;

      move_group_->setPoseTarget(ps, ee_link_);
      ok = plan_and_exec();

      msg = ok ? "SUCCESS(M3)" : "FAILED(M3)";


    /////////////////////////////////////// RPY_CONSTRAINT ee_link 안쪽 ////////////////////////////////////////////////////

    } else if (goal->mode == 1) {        

      move_group_->clearPoseTargets();        
      move_group_->clearPathConstraints();    
      move_group_->setStartStateToCurrentState();

      move_group_->setPoseReferenceFrame(base_frame_);  
      move_group_->setEndEffectorLink(ee_link_);      // EEE_

      move_group_->setPlanningPipelineId("ompl");  
      move_group_->setPlannerId("");           

      // 🔎 디버깅 출력
      RCLCPP_INFO(this->get_logger(),
                  "[DEBUG] pipeline=%s, planner=%s",
                  move_group_->getPlanningPipelineId().c_str(),
                  move_group_->getPlannerId().c_str());

      auto cs = make_rpy_constraint(goal->roll_tol_rad, goal->pitch_tol_rad, goal->yaw_tol_rad);
      move_group_->setPathConstraints(cs);

      move_group_->setPositionTarget(
        goal->target_pose.pose.position.x,
        goal->target_pose.pose.position.y,
        goal->target_pose.pose.position.z,
        ee_link_); // EEE_
        
      ok = plan_and_exec();
      msg = ok ? "SUCCESS(M1)" : "FAILED(M1)";
      move_group_->clearPathConstraints();

    /////////////////////////////////////// RPY EE ////////////////////////////////////////////////////

    } else if (goal->mode == 2) {        

      move_group_->clearPoseTargets();        
      move_group_->clearPathConstraints();    
      move_group_->setStartStateToCurrentState();

      move_group_->setPoseReferenceFrame(base_frame_);  
      move_group_->setEndEffectorLink(EEE_);      

      move_group_->setPlanningPipelineId("ompl");  
      move_group_->setPlannerId("");           

      // 🔎 디버깅 출력
      RCLCPP_INFO(this->get_logger(),
                  "[DEBUG] pipeline=%s, planner=%s",
                  move_group_->getPlanningPipelineId().c_str(),
                  move_group_->getPlannerId().c_str());

      auto cs = make_rpy_constraint(goal->roll_tol_rad, goal->pitch_tol_rad, goal->yaw_tol_rad);
      move_group_->setPathConstraints(cs);

      move_group_->setPositionTarget(
        goal->target_pose.pose.position.x,
        goal->target_pose.pose.position.y,
        goal->target_pose.pose.position.z,
        EEE_); 
        
      ok = plan_and_exec();
      msg = ok ? "SUCCESS(M2)" : "FAILED(M2)";
      move_group_->clearPathConstraints();

    }
      
    result->success = ok;
    result->message = msg;
    if (ok) gh->succeed(result); else gh->abort(result);

  }
        
  bool plan_and_exec() {
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto ok = move_group_->plan(plan);
    if (ok != moveit::core::MoveItErrorCode::SUCCESS) return false;
    auto ec = move_group_->execute(plan);
    return (ec == moveit::core::MoveItErrorCode::SUCCESS);
  }

  moveit_msgs::msg::Constraints make_rpy_constraint(double roll_tol, double pitch_tol, double yaw_tol) {
    geometry_msgs::msg::PoseStamped cur = move_group_->getCurrentPose(ee_link_);
    double r=0,p=0,y=0;
    tf2::Quaternion q_cur;
    tf2::fromMsg(cur.pose.orientation, q_cur);
    tf2::Matrix3x3(q_cur).getRPY(r,p,y);

    tf2::Quaternion q_lock; q_lock.setRPY(r,p,y);
    moveit_msgs::msg::OrientationConstraint ocm;
    ocm.header.frame_id = base_frame_;
    ocm.link_name = ee_link_;
    ocm.orientation = tf2::toMsg(q_lock);
    ocm.absolute_x_axis_tolerance = (roll_tol  > 0.0 ? roll_tol  : 1.0);
    ocm.absolute_y_axis_tolerance = (pitch_tol > 0.0 ? pitch_tol : 1.0);
    ocm.absolute_z_axis_tolerance = (yaw_tol   > 0.0 ? yaw_tol   : 1.0);
    ocm.weight = 1.0;

    moveit_msgs::msg::Constraints cs;
    cs.orientation_constraints.push_back(ocm);
    return cs;
  }
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions opt;
  opt.automatically_declare_parameters_from_overrides(true);
  auto node = std::make_shared<PoseOrCartesianServer>(opt);
  rclcpp::executors::MultiThreadedExecutor exec;
  exec.add_node(node);
  exec.spin();
  rclcpp::shutdown();
  return 0;
}