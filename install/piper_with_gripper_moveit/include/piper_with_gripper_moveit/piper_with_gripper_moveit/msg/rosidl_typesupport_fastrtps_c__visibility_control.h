// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define PIPER_WITH_GRIPPER_MOVEIT__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_piper_with_gripper_moveit __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_piper_with_gripper_moveit __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_piper_with_gripper_moveit __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_piper_with_gripper_moveit __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_piper_with_gripper_moveit
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_piper_with_gripper_moveit ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_piper_with_gripper_moveit
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_piper_with_gripper_moveit ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_piper_with_gripper_moveit
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_piper_with_gripper_moveit __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_piper_with_gripper_moveit
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_piper_with_gripper_moveit __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_piper_with_gripper_moveit
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // PIPER_WITH_GRIPPER_MOVEIT__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
