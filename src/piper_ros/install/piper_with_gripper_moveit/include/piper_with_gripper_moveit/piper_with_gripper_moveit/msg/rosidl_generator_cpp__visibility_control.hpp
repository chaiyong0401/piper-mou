// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define PIPER_WITH_GRIPPER_MOVEIT__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_piper_with_gripper_moveit __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_piper_with_gripper_moveit __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_piper_with_gripper_moveit __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_piper_with_gripper_moveit __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_piper_with_gripper_moveit
    #define ROSIDL_GENERATOR_CPP_PUBLIC_piper_with_gripper_moveit ROSIDL_GENERATOR_CPP_EXPORT_piper_with_gripper_moveit
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_piper_with_gripper_moveit ROSIDL_GENERATOR_CPP_IMPORT_piper_with_gripper_moveit
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_piper_with_gripper_moveit __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_piper_with_gripper_moveit
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_piper_with_gripper_moveit __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_piper_with_gripper_moveit
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // PIPER_WITH_GRIPPER_MOVEIT__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
