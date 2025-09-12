// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from piper_with_gripper_moveit:action/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__STRUCT_H_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_Goal
{
  bool start;
  rosidl_runtime_c__String mode;
} piper_with_gripper_moveit__action__TargetPose_Goal;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_Goal.
typedef struct piper_with_gripper_moveit__action__TargetPose_Goal__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_Result
{
  bool success;
  /// 좌표값, 성공일 경우에만 유효
  geometry_msgs__msg__Pose target_pose;
  int32_t col;
  double col2;
} piper_with_gripper_moveit__action__TargetPose_Result;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_Result.
typedef struct piper_with_gripper_moveit__action__TargetPose_Result__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} piper_with_gripper_moveit__action__TargetPose_Feedback;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_Feedback.
typedef struct piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "piper_with_gripper_moveit/action/detail/target_pose__struct.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  piper_with_gripper_moveit__action__TargetPose_Goal goal;
} piper_with_gripper_moveit__action__TargetPose_SendGoal_Request;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_SendGoal_Request.
typedef struct piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} piper_with_gripper_moveit__action__TargetPose_SendGoal_Response;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_SendGoal_Response.
typedef struct piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} piper_with_gripper_moveit__action__TargetPose_GetResult_Request;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_GetResult_Request.
typedef struct piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "piper_with_gripper_moveit/action/detail/target_pose__struct.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_GetResult_Response
{
  int8_t status;
  piper_with_gripper_moveit__action__TargetPose_Result result;
} piper_with_gripper_moveit__action__TargetPose_GetResult_Response;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_GetResult_Response.
typedef struct piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "piper_with_gripper_moveit/action/detail/target_pose__struct.h"

/// Struct defined in action/TargetPose in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__TargetPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  piper_with_gripper_moveit__action__TargetPose_Feedback feedback;
} piper_with_gripper_moveit__action__TargetPose_FeedbackMessage;

// Struct for a sequence of piper_with_gripper_moveit__action__TargetPose_FeedbackMessage.
typedef struct piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence
{
  piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__STRUCT_H_
