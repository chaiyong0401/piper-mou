// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from piper_with_gripper_moveit:action/PoseGoal.idl
// generated code does not contain a copyright notice
#include "piper_with_gripper_moveit/action/detail/pose_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_Goal__init(piper_with_gripper_moveit__action__PoseGoal_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    piper_with_gripper_moveit__action__PoseGoal_Goal__fini(msg);
    return false;
  }
  // roll_tol_rad
  // pitch_tol_rad
  // yaw_tol_rad
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_Goal__fini(piper_with_gripper_moveit__action__PoseGoal_Goal * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // roll_tol_rad
  // pitch_tol_rad
  // yaw_tol_rad
}

bool
piper_with_gripper_moveit__action__PoseGoal_Goal__are_equal(const piper_with_gripper_moveit__action__PoseGoal_Goal * lhs, const piper_with_gripper_moveit__action__PoseGoal_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // roll_tol_rad
  if (lhs->roll_tol_rad != rhs->roll_tol_rad) {
    return false;
  }
  // pitch_tol_rad
  if (lhs->pitch_tol_rad != rhs->pitch_tol_rad) {
    return false;
  }
  // yaw_tol_rad
  if (lhs->yaw_tol_rad != rhs->yaw_tol_rad) {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_Goal__copy(
  const piper_with_gripper_moveit__action__PoseGoal_Goal * input,
  piper_with_gripper_moveit__action__PoseGoal_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // roll_tol_rad
  output->roll_tol_rad = input->roll_tol_rad;
  // pitch_tol_rad
  output->pitch_tol_rad = input->pitch_tol_rad;
  // yaw_tol_rad
  output->yaw_tol_rad = input->yaw_tol_rad;
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_Goal *
piper_with_gripper_moveit__action__PoseGoal_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Goal * msg = (piper_with_gripper_moveit__action__PoseGoal_Goal *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_Goal));
  bool success = piper_with_gripper_moveit__action__PoseGoal_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_Goal__destroy(piper_with_gripper_moveit__action__PoseGoal_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Goal * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_Goal *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence *
piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_Goal * data =
      (piper_with_gripper_moveit__action__PoseGoal_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_Result__init(piper_with_gripper_moveit__action__PoseGoal_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    piper_with_gripper_moveit__action__PoseGoal_Result__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_Result__fini(piper_with_gripper_moveit__action__PoseGoal_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
piper_with_gripper_moveit__action__PoseGoal_Result__are_equal(const piper_with_gripper_moveit__action__PoseGoal_Result * lhs, const piper_with_gripper_moveit__action__PoseGoal_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_Result__copy(
  const piper_with_gripper_moveit__action__PoseGoal_Result * input,
  piper_with_gripper_moveit__action__PoseGoal_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_Result *
piper_with_gripper_moveit__action__PoseGoal_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Result * msg = (piper_with_gripper_moveit__action__PoseGoal_Result *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_Result));
  bool success = piper_with_gripper_moveit__action__PoseGoal_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_Result__destroy(piper_with_gripper_moveit__action__PoseGoal_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Result * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_Result *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_Result__Sequence *
piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_Result__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_Result__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_Result * data =
      (piper_with_gripper_moveit__action__PoseGoal_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_Feedback__init(piper_with_gripper_moveit__action__PoseGoal_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(piper_with_gripper_moveit__action__PoseGoal_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_Feedback__are_equal(const piper_with_gripper_moveit__action__PoseGoal_Feedback * lhs, const piper_with_gripper_moveit__action__PoseGoal_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_Feedback__copy(
  const piper_with_gripper_moveit__action__PoseGoal_Feedback * input,
  piper_with_gripper_moveit__action__PoseGoal_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_Feedback *
piper_with_gripper_moveit__action__PoseGoal_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Feedback * msg = (piper_with_gripper_moveit__action__PoseGoal_Feedback *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_Feedback));
  bool success = piper_with_gripper_moveit__action__PoseGoal_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_Feedback__destroy(piper_with_gripper_moveit__action__PoseGoal_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Feedback * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_Feedback *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence *
piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_Feedback * data =
      (piper_with_gripper_moveit__action__PoseGoal_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__init(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!piper_with_gripper_moveit__action__PoseGoal_Goal__init(&msg->goal)) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  piper_with_gripper_moveit__action__PoseGoal_Goal__fini(&msg->goal);
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__are_equal(const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * lhs, const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!piper_with_gripper_moveit__action__PoseGoal_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__copy(
  const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * input,
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!piper_with_gripper_moveit__action__PoseGoal_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request *
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * msg = (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request));
  bool success = piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__destroy(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence *
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request * data =
      (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__init(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__fini(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__are_equal(const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * lhs, const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__copy(
  const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * input,
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response *
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * msg = (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response));
  bool success = piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__destroy(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence *
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response * data =
      (piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__init(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__fini(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__are_equal(const piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * lhs, const piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__copy(
  const piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * input,
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_GetResult_Request *
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * msg = (piper_with_gripper_moveit__action__PoseGoal_GetResult_Request *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request));
  bool success = piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__destroy(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_GetResult_Request *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence *
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Request * data =
      (piper_with_gripper_moveit__action__PoseGoal_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__init(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!piper_with_gripper_moveit__action__PoseGoal_Result__init(&msg->result)) {
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__fini(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  piper_with_gripper_moveit__action__PoseGoal_Result__fini(&msg->result);
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__are_equal(const piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * lhs, const piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!piper_with_gripper_moveit__action__PoseGoal_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__copy(
  const piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * input,
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!piper_with_gripper_moveit__action__PoseGoal_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_GetResult_Response *
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * msg = (piper_with_gripper_moveit__action__PoseGoal_GetResult_Response *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response));
  bool success = piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__destroy(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_GetResult_Response *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence *
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_GetResult_Response * data =
      (piper_with_gripper_moveit__action__PoseGoal_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__functions.h"

bool
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__init(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!piper_with_gripper_moveit__action__PoseGoal_Feedback__init(&msg->feedback)) {
    piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  piper_with_gripper_moveit__action__PoseGoal_Feedback__fini(&msg->feedback);
}

bool
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__are_equal(const piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * lhs, const piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!piper_with_gripper_moveit__action__PoseGoal_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__copy(
  const piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * input,
  piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!piper_with_gripper_moveit__action__PoseGoal_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage *
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * msg = (piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage));
  bool success = piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__destroy(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__init(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * data = NULL;

  if (size) {
    data = (piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage *)allocator.zero_allocate(size, sizeof(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__fini(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence *
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * array = (piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence *)allocator.allocate(sizeof(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__destroy(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__are_equal(const piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * lhs, const piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence__copy(
  const piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * input,
  piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage * data =
      (piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
