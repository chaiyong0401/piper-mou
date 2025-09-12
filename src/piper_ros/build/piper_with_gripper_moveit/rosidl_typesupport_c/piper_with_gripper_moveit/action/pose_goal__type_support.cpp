// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from piper_with_gripper_moveit:action/PoseGoal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
#include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_Goal_type_support_ids_t;

static const _PoseGoal_Goal_type_support_ids_t _PoseGoal_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_Goal_type_support_symbol_names_t _PoseGoal_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_Goal)),
  }
};

typedef struct _PoseGoal_Goal_type_support_data_t
{
  void * data[2];
} _PoseGoal_Goal_type_support_data_t;

static _PoseGoal_Goal_type_support_data_t _PoseGoal_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_Goal_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_Goal)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_Result_type_support_ids_t;

static const _PoseGoal_Result_type_support_ids_t _PoseGoal_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_Result_type_support_symbol_names_t _PoseGoal_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_Result)),
  }
};

typedef struct _PoseGoal_Result_type_support_data_t
{
  void * data[2];
} _PoseGoal_Result_type_support_data_t;

static _PoseGoal_Result_type_support_data_t _PoseGoal_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_Result_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_Result)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_Feedback_type_support_ids_t;

static const _PoseGoal_Feedback_type_support_ids_t _PoseGoal_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_Feedback_type_support_symbol_names_t _PoseGoal_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_Feedback)),
  }
};

typedef struct _PoseGoal_Feedback_type_support_data_t
{
  void * data[2];
} _PoseGoal_Feedback_type_support_data_t;

static _PoseGoal_Feedback_type_support_data_t _PoseGoal_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_Feedback_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_Feedback)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_SendGoal_Request_type_support_ids_t;

static const _PoseGoal_SendGoal_Request_type_support_ids_t _PoseGoal_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_SendGoal_Request_type_support_symbol_names_t _PoseGoal_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal_Request)),
  }
};

typedef struct _PoseGoal_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PoseGoal_SendGoal_Request_type_support_data_t;

static _PoseGoal_SendGoal_Request_type_support_data_t _PoseGoal_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_SendGoal_Request_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal_Request)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_SendGoal_Response_type_support_ids_t;

static const _PoseGoal_SendGoal_Response_type_support_ids_t _PoseGoal_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_SendGoal_Response_type_support_symbol_names_t _PoseGoal_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal_Response)),
  }
};

typedef struct _PoseGoal_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PoseGoal_SendGoal_Response_type_support_data_t;

static _PoseGoal_SendGoal_Response_type_support_data_t _PoseGoal_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_SendGoal_Response_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal_Response)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_SendGoal_type_support_ids_t;

static const _PoseGoal_SendGoal_type_support_ids_t _PoseGoal_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_SendGoal_type_support_symbol_names_t _PoseGoal_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal)),
  }
};

typedef struct _PoseGoal_SendGoal_type_support_data_t
{
  void * data[2];
} _PoseGoal_SendGoal_type_support_data_t;

static _PoseGoal_SendGoal_type_support_data_t _PoseGoal_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_SendGoal_service_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PoseGoal_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_GetResult_Request_type_support_ids_t;

static const _PoseGoal_GetResult_Request_type_support_ids_t _PoseGoal_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_GetResult_Request_type_support_symbol_names_t _PoseGoal_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_GetResult_Request)),
  }
};

typedef struct _PoseGoal_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PoseGoal_GetResult_Request_type_support_data_t;

static _PoseGoal_GetResult_Request_type_support_data_t _PoseGoal_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_GetResult_Request_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_GetResult_Request)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_GetResult_Response_type_support_ids_t;

static const _PoseGoal_GetResult_Response_type_support_ids_t _PoseGoal_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_GetResult_Response_type_support_symbol_names_t _PoseGoal_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_GetResult_Response)),
  }
};

typedef struct _PoseGoal_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PoseGoal_GetResult_Response_type_support_data_t;

static _PoseGoal_GetResult_Response_type_support_data_t _PoseGoal_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_GetResult_Response_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_GetResult_Response)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_GetResult_type_support_ids_t;

static const _PoseGoal_GetResult_type_support_ids_t _PoseGoal_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_GetResult_type_support_symbol_names_t _PoseGoal_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_GetResult)),
  }
};

typedef struct _PoseGoal_GetResult_type_support_data_t
{
  void * data[2];
} _PoseGoal_GetResult_type_support_data_t;

static _PoseGoal_GetResult_type_support_data_t _PoseGoal_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_GetResult_service_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PoseGoal_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_GetResult)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace piper_with_gripper_moveit
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PoseGoal_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PoseGoal_FeedbackMessage_type_support_ids_t;

static const _PoseGoal_FeedbackMessage_type_support_ids_t _PoseGoal_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PoseGoal_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PoseGoal_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PoseGoal_FeedbackMessage_type_support_symbol_names_t _PoseGoal_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, piper_with_gripper_moveit, action, PoseGoal_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, piper_with_gripper_moveit, action, PoseGoal_FeedbackMessage)),
  }
};

typedef struct _PoseGoal_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PoseGoal_FeedbackMessage_type_support_data_t;

static _PoseGoal_FeedbackMessage_type_support_data_t _PoseGoal_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PoseGoal_FeedbackMessage_message_typesupport_map = {
  2,
  "piper_with_gripper_moveit",
  &_PoseGoal_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PoseGoal_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PoseGoal_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PoseGoal_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PoseGoal_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace piper_with_gripper_moveit

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_FeedbackMessage)() {
  return &::piper_with_gripper_moveit::action::rosidl_typesupport_c::PoseGoal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "piper_with_gripper_moveit/action/pose_goal.h"
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__type_support.h"

static rosidl_action_type_support_t _piper_with_gripper_moveit__action__PoseGoal__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal)()
{
  // Thread-safe by always writing the same values to the static struct
  _piper_with_gripper_moveit__action__PoseGoal__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_SendGoal)();
  _piper_with_gripper_moveit__action__PoseGoal__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_GetResult)();
  _piper_with_gripper_moveit__action__PoseGoal__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _piper_with_gripper_moveit__action__PoseGoal__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, piper_with_gripper_moveit, action, PoseGoal_FeedbackMessage)();
  _piper_with_gripper_moveit__action__PoseGoal__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_piper_with_gripper_moveit__action__PoseGoal__typesupport_c;
}

#ifdef __cplusplus
}
#endif
