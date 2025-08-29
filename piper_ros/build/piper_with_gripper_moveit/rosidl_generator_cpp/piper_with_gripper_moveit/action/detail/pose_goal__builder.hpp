// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from piper_with_gripper_moveit:action/PoseGoal.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__BUILDER_HPP_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "piper_with_gripper_moveit/action/detail/pose_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_Goal_yaw_tol_rad
{
public:
  explicit Init_PoseGoal_Goal_yaw_tol_rad(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_Goal yaw_tol_rad(::piper_with_gripper_moveit::action::PoseGoal_Goal::_yaw_tol_rad_type arg)
  {
    msg_.yaw_tol_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_pitch_tol_rad
{
public:
  explicit Init_PoseGoal_Goal_pitch_tol_rad(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_yaw_tol_rad pitch_tol_rad(::piper_with_gripper_moveit::action::PoseGoal_Goal::_pitch_tol_rad_type arg)
  {
    msg_.pitch_tol_rad = std::move(arg);
    return Init_PoseGoal_Goal_yaw_tol_rad(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_roll_tol_rad
{
public:
  explicit Init_PoseGoal_Goal_roll_tol_rad(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_pitch_tol_rad roll_tol_rad(::piper_with_gripper_moveit::action::PoseGoal_Goal::_roll_tol_rad_type arg)
  {
    msg_.roll_tol_rad = std::move(arg);
    return Init_PoseGoal_Goal_pitch_tol_rad(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_jump_threshold
{
public:
  explicit Init_PoseGoal_Goal_jump_threshold(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_roll_tol_rad jump_threshold(::piper_with_gripper_moveit::action::PoseGoal_Goal::_jump_threshold_type arg)
  {
    msg_.jump_threshold = std::move(arg);
    return Init_PoseGoal_Goal_roll_tol_rad(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_eef_step
{
public:
  explicit Init_PoseGoal_Goal_eef_step(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_jump_threshold eef_step(::piper_with_gripper_moveit::action::PoseGoal_Goal::_eef_step_type arg)
  {
    msg_.eef_step = std::move(arg);
    return Init_PoseGoal_Goal_jump_threshold(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_lock_rp_and_cartesian
{
public:
  explicit Init_PoseGoal_Goal_lock_rp_and_cartesian(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_eef_step lock_rp_and_cartesian(::piper_with_gripper_moveit::action::PoseGoal_Goal::_lock_rp_and_cartesian_type arg)
  {
    msg_.lock_rp_and_cartesian = std::move(arg);
    return Init_PoseGoal_Goal_eef_step(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_col2
{
public:
  explicit Init_PoseGoal_Goal_col2(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_lock_rp_and_cartesian col2(::piper_with_gripper_moveit::action::PoseGoal_Goal::_col2_type arg)
  {
    msg_.col2 = std::move(arg);
    return Init_PoseGoal_Goal_lock_rp_and_cartesian(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_col
{
public:
  explicit Init_PoseGoal_Goal_col(::piper_with_gripper_moveit::action::PoseGoal_Goal & msg)
  : msg_(msg)
  {}
  Init_PoseGoal_Goal_col2 col(::piper_with_gripper_moveit::action::PoseGoal_Goal::_col_type arg)
  {
    msg_.col = std::move(arg);
    return Init_PoseGoal_Goal_col2(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

class Init_PoseGoal_Goal_target_pose
{
public:
  Init_PoseGoal_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGoal_Goal_col target_pose(::piper_with_gripper_moveit::action::PoseGoal_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_PoseGoal_Goal_col(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_Goal>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_Goal_target_pose();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_Result_message
{
public:
  explicit Init_PoseGoal_Result_message(::piper_with_gripper_moveit::action::PoseGoal_Result & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_Result message(::piper_with_gripper_moveit::action::PoseGoal_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Result msg_;
};

class Init_PoseGoal_Result_success
{
public:
  Init_PoseGoal_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGoal_Result_message success(::piper_with_gripper_moveit::action::PoseGoal_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PoseGoal_Result_message(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_Result>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_Result_success();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_Feedback_state
{
public:
  Init_PoseGoal_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_Feedback state(::piper_with_gripper_moveit::action::PoseGoal_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_Feedback>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_Feedback_state();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_SendGoal_Request_goal
{
public:
  explicit Init_PoseGoal_SendGoal_Request_goal(::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request goal(::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request msg_;
};

class Init_PoseGoal_SendGoal_Request_goal_id
{
public:
  Init_PoseGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGoal_SendGoal_Request_goal goal_id(::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PoseGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_SendGoal_Request_goal_id();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_SendGoal_Response_stamp
{
public:
  explicit Init_PoseGoal_SendGoal_Response_stamp(::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response stamp(::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response msg_;
};

class Init_PoseGoal_SendGoal_Response_accepted
{
public:
  Init_PoseGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGoal_SendGoal_Response_stamp accepted(::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PoseGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_SendGoal_Response_accepted();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_GetResult_Request_goal_id
{
public:
  Init_PoseGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_GetResult_Request goal_id(::piper_with_gripper_moveit::action::PoseGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_GetResult_Request>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_GetResult_Request_goal_id();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_GetResult_Response_result
{
public:
  explicit Init_PoseGoal_GetResult_Response_result(::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response result(::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response msg_;
};

class Init_PoseGoal_GetResult_Response_status
{
public:
  Init_PoseGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGoal_GetResult_Response_result status(::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PoseGoal_GetResult_Response_result(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_GetResult_Response>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_GetResult_Response_status();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_PoseGoal_FeedbackMessage_feedback
{
public:
  explicit Init_PoseGoal_FeedbackMessage_feedback(::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage feedback(::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage msg_;
};

class Init_PoseGoal_FeedbackMessage_goal_id
{
public:
  Init_PoseGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGoal_FeedbackMessage_feedback goal_id(::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PoseGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage>()
{
  return piper_with_gripper_moveit::action::builder::Init_PoseGoal_FeedbackMessage_goal_id();
}

}  // namespace piper_with_gripper_moveit

#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__BUILDER_HPP_
