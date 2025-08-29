// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from piper_with_gripper_moveit:action/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__TRAITS_HPP_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "piper_with_gripper_moveit/action/detail/target_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_Goal & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_Goal>()
{
  return "piper_with_gripper_moveit::action::TargetPose_Goal";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_Goal>()
{
  return "piper_with_gripper_moveit/action/TargetPose_Goal";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
    out << ", ";
  }

  // member: col
  {
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << ", ";
  }

  // member: col2
  {
    out << "col2: ";
    rosidl_generator_traits::value_to_yaml(msg.col2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << "\n";
  }

  // member: col2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "col2: ";
    rosidl_generator_traits::value_to_yaml(msg.col2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_Result & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_Result>()
{
  return "piper_with_gripper_moveit::action::TargetPose_Result";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_Result>()
{
  return "piper_with_gripper_moveit/action/TargetPose_Result";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_Feedback & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_Feedback>()
{
  return "piper_with_gripper_moveit::action::TargetPose_Feedback";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_Feedback>()
{
  return "piper_with_gripper_moveit/action/TargetPose_Feedback";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "piper_with_gripper_moveit/action/detail/target_pose__traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_SendGoal_Request & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>()
{
  return "piper_with_gripper_moveit::action::TargetPose_SendGoal_Request";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>()
{
  return "piper_with_gripper_moveit/action/TargetPose_SendGoal_Request";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<piper_with_gripper_moveit::action::TargetPose_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<piper_with_gripper_moveit::action::TargetPose_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_SendGoal_Response & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>()
{
  return "piper_with_gripper_moveit::action::TargetPose_SendGoal_Response";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>()
{
  return "piper_with_gripper_moveit/action/TargetPose_SendGoal_Response";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_SendGoal>()
{
  return "piper_with_gripper_moveit::action::TargetPose_SendGoal";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_SendGoal>()
{
  return "piper_with_gripper_moveit/action/TargetPose_SendGoal";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>::value &&
    has_fixed_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>::value &&
    has_bounded_size<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<piper_with_gripper_moveit::action::TargetPose_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<piper_with_gripper_moveit::action::TargetPose_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<piper_with_gripper_moveit::action::TargetPose_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_GetResult_Request & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>()
{
  return "piper_with_gripper_moveit::action::TargetPose_GetResult_Request";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>()
{
  return "piper_with_gripper_moveit/action/TargetPose_GetResult_Request";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "piper_with_gripper_moveit/action/detail/target_pose__traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_GetResult_Response & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>()
{
  return "piper_with_gripper_moveit::action::TargetPose_GetResult_Response";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>()
{
  return "piper_with_gripper_moveit/action/TargetPose_GetResult_Response";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<piper_with_gripper_moveit::action::TargetPose_Result>::value> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<piper_with_gripper_moveit::action::TargetPose_Result>::value> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_GetResult>()
{
  return "piper_with_gripper_moveit::action::TargetPose_GetResult";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_GetResult>()
{
  return "piper_with_gripper_moveit/action/TargetPose_GetResult";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>::value &&
    has_fixed_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>::value &&
    has_bounded_size<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>::value
  >
{
};

template<>
struct is_service<piper_with_gripper_moveit::action::TargetPose_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<piper_with_gripper_moveit::action::TargetPose_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<piper_with_gripper_moveit::action::TargetPose_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "piper_with_gripper_moveit/action/detail/target_pose__traits.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

inline void to_flow_style_yaml(
  const TargetPose_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetPose_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace rosidl_generator_traits
{

[[deprecated("use piper_with_gripper_moveit::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const piper_with_gripper_moveit::action::TargetPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  piper_with_gripper_moveit::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use piper_with_gripper_moveit::action::to_yaml() instead")]]
inline std::string to_yaml(const piper_with_gripper_moveit::action::TargetPose_FeedbackMessage & msg)
{
  return piper_with_gripper_moveit::action::to_yaml(msg);
}

template<>
inline const char * data_type<piper_with_gripper_moveit::action::TargetPose_FeedbackMessage>()
{
  return "piper_with_gripper_moveit::action::TargetPose_FeedbackMessage";
}

template<>
inline const char * name<piper_with_gripper_moveit::action::TargetPose_FeedbackMessage>()
{
  return "piper_with_gripper_moveit/action/TargetPose_FeedbackMessage";
}

template<>
struct has_fixed_size<piper_with_gripper_moveit::action::TargetPose_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<piper_with_gripper_moveit::action::TargetPose_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<piper_with_gripper_moveit::action::TargetPose_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<piper_with_gripper_moveit::action::TargetPose_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<piper_with_gripper_moveit::action::TargetPose_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<piper_with_gripper_moveit::action::TargetPose>
  : std::true_type
{
};

template<>
struct is_action_goal<piper_with_gripper_moveit::action::TargetPose_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<piper_with_gripper_moveit::action::TargetPose_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<piper_with_gripper_moveit::action::TargetPose_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__TRAITS_HPP_
