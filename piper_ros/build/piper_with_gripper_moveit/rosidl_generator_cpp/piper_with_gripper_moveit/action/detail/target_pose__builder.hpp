// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from piper_with_gripper_moveit:action/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__BUILDER_HPP_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "piper_with_gripper_moveit/action/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_Goal_mode
{
public:
  explicit Init_TargetPose_Goal_mode(::piper_with_gripper_moveit::action::TargetPose_Goal & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_Goal mode(::piper_with_gripper_moveit::action::TargetPose_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_Goal msg_;
};

class Init_TargetPose_Goal_start
{
public:
  Init_TargetPose_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_Goal_mode start(::piper_with_gripper_moveit::action::TargetPose_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_TargetPose_Goal_mode(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_Goal>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_Goal_start();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_Result_col2
{
public:
  explicit Init_TargetPose_Result_col2(::piper_with_gripper_moveit::action::TargetPose_Result & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_Result col2(::piper_with_gripper_moveit::action::TargetPose_Result::_col2_type arg)
  {
    msg_.col2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_Result msg_;
};

class Init_TargetPose_Result_col
{
public:
  explicit Init_TargetPose_Result_col(::piper_with_gripper_moveit::action::TargetPose_Result & msg)
  : msg_(msg)
  {}
  Init_TargetPose_Result_col2 col(::piper_with_gripper_moveit::action::TargetPose_Result::_col_type arg)
  {
    msg_.col = std::move(arg);
    return Init_TargetPose_Result_col2(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_Result msg_;
};

class Init_TargetPose_Result_target_pose
{
public:
  explicit Init_TargetPose_Result_target_pose(::piper_with_gripper_moveit::action::TargetPose_Result & msg)
  : msg_(msg)
  {}
  Init_TargetPose_Result_col target_pose(::piper_with_gripper_moveit::action::TargetPose_Result::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_TargetPose_Result_col(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_Result msg_;
};

class Init_TargetPose_Result_success
{
public:
  Init_TargetPose_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_Result_target_pose success(::piper_with_gripper_moveit::action::TargetPose_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TargetPose_Result_target_pose(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_Result>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_Result_success();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_Feedback>()
{
  return ::piper_with_gripper_moveit::action::TargetPose_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_SendGoal_Request_goal
{
public:
  explicit Init_TargetPose_SendGoal_Request_goal(::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request goal(::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request msg_;
};

class Init_TargetPose_SendGoal_Request_goal_id
{
public:
  Init_TargetPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_SendGoal_Request_goal goal_id(::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TargetPose_SendGoal_Request_goal(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_SendGoal_Request_goal_id();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_SendGoal_Response_stamp
{
public:
  explicit Init_TargetPose_SendGoal_Response_stamp(::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response stamp(::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response msg_;
};

class Init_TargetPose_SendGoal_Response_accepted
{
public:
  Init_TargetPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_SendGoal_Response_stamp accepted(::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TargetPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_SendGoal_Response_accepted();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_GetResult_Request_goal_id
{
public:
  Init_TargetPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_GetResult_Request goal_id(::piper_with_gripper_moveit::action::TargetPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_GetResult_Request>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_GetResult_Request_goal_id();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_GetResult_Response_result
{
public:
  explicit Init_TargetPose_GetResult_Response_result(::piper_with_gripper_moveit::action::TargetPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_GetResult_Response result(::piper_with_gripper_moveit::action::TargetPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_GetResult_Response msg_;
};

class Init_TargetPose_GetResult_Response_status
{
public:
  Init_TargetPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_GetResult_Response_result status(::piper_with_gripper_moveit::action::TargetPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TargetPose_GetResult_Response_result(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_GetResult_Response>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_GetResult_Response_status();
}

}  // namespace piper_with_gripper_moveit


namespace piper_with_gripper_moveit
{

namespace action
{

namespace builder
{

class Init_TargetPose_FeedbackMessage_feedback
{
public:
  explicit Init_TargetPose_FeedbackMessage_feedback(::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage feedback(::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage msg_;
};

class Init_TargetPose_FeedbackMessage_goal_id
{
public:
  Init_TargetPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPose_FeedbackMessage_feedback goal_id(::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TargetPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::piper_with_gripper_moveit::action::TargetPose_FeedbackMessage>()
{
  return piper_with_gripper_moveit::action::builder::Init_TargetPose_FeedbackMessage_goal_id();
}

}  // namespace piper_with_gripper_moveit

#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__BUILDER_HPP_
