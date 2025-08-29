// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from piper_with_gripper_moveit:action/PoseGoal.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__STRUCT_H_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
  double col;
  double col2;
  /// true면: 롤·피치 고정 + 카테시안 경로 시도
  bool lock_rp_and_cartesian;
  /// (카테시안) EE 보간 step, 예: 0.01
  double eef_step;
  /// (카테시안) joint jump 임계, 예: 0.0 = disable
  double jump_threshold;
  double roll_tol_rad;
  /// 롤/피치 허용오차(라디안), 예: 0.1
  double pitch_tol_rad;
  /// 야우 허용오차(라디안), 예: 3.14
  double yaw_tol_rad;
} piper_with_gripper_moveit__action__PoseGoal_Goal;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_Goal.
typedef struct piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_Result
{
  bool success;
  rosidl_runtime_c__String message;
} piper_with_gripper_moveit__action__PoseGoal_Result;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_Result.
typedef struct piper_with_gripper_moveit__action__PoseGoal_Result__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_Feedback
{
  rosidl_runtime_c__String state;
} piper_with_gripper_moveit__action__PoseGoal_Feedback;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_Feedback.
typedef struct piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  piper_with_gripper_moveit__action__PoseGoal_Goal goal;
} piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request.
typedef struct piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response.
typedef struct piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} piper_with_gripper_moveit__action__PoseGoal_GetResult_Request;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_GetResult_Request.
typedef struct piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_GetResult_Response
{
  int8_t status;
  piper_with_gripper_moveit__action__PoseGoal_Result result;
} piper_with_gripper_moveit__action__PoseGoal_GetResult_Response;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_GetResult_Response.
typedef struct piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"

/// Struct defined in action/PoseGoal in the package piper_with_gripper_moveit.
typedef struct piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  piper_with_gripper_moveit__action__PoseGoal_Feedback feedback;
} piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage;

// Struct for a sequence of piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage.
typedef struct piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence
{
  piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__STRUCT_H_
