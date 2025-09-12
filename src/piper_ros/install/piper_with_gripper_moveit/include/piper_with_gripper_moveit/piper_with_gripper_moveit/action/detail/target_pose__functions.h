// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from piper_with_gripper_moveit:action/TargetPose.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__FUNCTIONS_H_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "piper_with_gripper_moveit/msg/rosidl_generator_c__visibility_control.h"

#include "piper_with_gripper_moveit/action/detail/target_pose__struct.h"

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_Goal
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Goal__init(piper_with_gripper_moveit__action__TargetPose_Goal * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Goal__fini(piper_with_gripper_moveit__action__TargetPose_Goal * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_Goal *
piper_with_gripper_moveit__action__TargetPose_Goal__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Goal__destroy(piper_with_gripper_moveit__action__TargetPose_Goal * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Goal__are_equal(const piper_with_gripper_moveit__action__TargetPose_Goal * lhs, const piper_with_gripper_moveit__action__TargetPose_Goal * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Goal__copy(
  const piper_with_gripper_moveit__action__TargetPose_Goal * input,
  piper_with_gripper_moveit__action__TargetPose_Goal * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__init(piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence *
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Goal__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_Goal__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_Result
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Result__init(piper_with_gripper_moveit__action__TargetPose_Result * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Result__fini(piper_with_gripper_moveit__action__TargetPose_Result * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_Result *
piper_with_gripper_moveit__action__TargetPose_Result__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Result__destroy(piper_with_gripper_moveit__action__TargetPose_Result * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Result__are_equal(const piper_with_gripper_moveit__action__TargetPose_Result * lhs, const piper_with_gripper_moveit__action__TargetPose_Result * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Result__copy(
  const piper_with_gripper_moveit__action__TargetPose_Result * input,
  piper_with_gripper_moveit__action__TargetPose_Result * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Result__Sequence__init(piper_with_gripper_moveit__action__TargetPose_Result__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Result__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_Result__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_Result__Sequence *
piper_with_gripper_moveit__action__TargetPose_Result__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Result__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_Result__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Result__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_Result__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_Result__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Result__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_Result__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_Result__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_Feedback
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Feedback__init(piper_with_gripper_moveit__action__TargetPose_Feedback * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Feedback__fini(piper_with_gripper_moveit__action__TargetPose_Feedback * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_Feedback *
piper_with_gripper_moveit__action__TargetPose_Feedback__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Feedback__destroy(piper_with_gripper_moveit__action__TargetPose_Feedback * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Feedback__are_equal(const piper_with_gripper_moveit__action__TargetPose_Feedback * lhs, const piper_with_gripper_moveit__action__TargetPose_Feedback * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Feedback__copy(
  const piper_with_gripper_moveit__action__TargetPose_Feedback * input,
  piper_with_gripper_moveit__action__TargetPose_Feedback * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__init(piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence *
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_Feedback__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__init(piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__fini(piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request *
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__destroy(piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__are_equal(const piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * lhs, const piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__copy(
  const piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * input,
  piper_with_gripper_moveit__action__TargetPose_SendGoal_Request * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__init(piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence *
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_SendGoal_Request__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__init(piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__fini(piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response *
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__destroy(piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__are_equal(const piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * lhs, const piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__copy(
  const piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * input,
  piper_with_gripper_moveit__action__TargetPose_SendGoal_Response * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__init(piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence *
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_SendGoal_Response__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__init(piper_with_gripper_moveit__action__TargetPose_GetResult_Request * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__fini(piper_with_gripper_moveit__action__TargetPose_GetResult_Request * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_GetResult_Request *
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__destroy(piper_with_gripper_moveit__action__TargetPose_GetResult_Request * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__are_equal(const piper_with_gripper_moveit__action__TargetPose_GetResult_Request * lhs, const piper_with_gripper_moveit__action__TargetPose_GetResult_Request * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__copy(
  const piper_with_gripper_moveit__action__TargetPose_GetResult_Request * input,
  piper_with_gripper_moveit__action__TargetPose_GetResult_Request * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__init(piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence *
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_GetResult_Request__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__init(piper_with_gripper_moveit__action__TargetPose_GetResult_Response * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__fini(piper_with_gripper_moveit__action__TargetPose_GetResult_Response * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_GetResult_Response *
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__destroy(piper_with_gripper_moveit__action__TargetPose_GetResult_Response * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__are_equal(const piper_with_gripper_moveit__action__TargetPose_GetResult_Response * lhs, const piper_with_gripper_moveit__action__TargetPose_GetResult_Response * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__copy(
  const piper_with_gripper_moveit__action__TargetPose_GetResult_Response * input,
  piper_with_gripper_moveit__action__TargetPose_GetResult_Response * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__init(piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence *
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_GetResult_Response__Sequence * output);

/// Initialize action/TargetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage
 * )) before or use
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__init(piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * msg);

/// Finalize action/TargetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__fini(piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * msg);

/// Create action/TargetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage *
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__create();

/// Destroy action/TargetPose message.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__destroy(piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * msg);

/// Check for action/TargetPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__are_equal(const piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * lhs, const piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * rhs);

/// Copy a action/TargetPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__copy(
  const piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * input,
  piper_with_gripper_moveit__action__TargetPose_FeedbackMessage * output);

/// Initialize array of action/TargetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__init(piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__fini(piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * array);

/// Create array of action/TargetPose messages.
/**
 * It allocates the memory for the array and calls
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence *
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TargetPose messages.
/**
 * It calls
 * piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
void
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__destroy(piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * array);

/// Check for action/TargetPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__are_equal(const piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * lhs, const piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TargetPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_piper_with_gripper_moveit
bool
piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence__copy(
  const piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * input,
  piper_with_gripper_moveit__action__TargetPose_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__TARGET_POSE__FUNCTIONS_H_
