// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/action/detail/execute_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `plan`
#include "plansys2_msgs/msg/detail/plan__functions.h"

bool
plansys2_msgs__action__ExecutePlan_Goal__init(plansys2_msgs__action__ExecutePlan_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // plan
  if (!plansys2_msgs__msg__Plan__init(&msg->plan)) {
    plansys2_msgs__action__ExecutePlan_Goal__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_Goal__fini(plansys2_msgs__action__ExecutePlan_Goal * msg)
{
  if (!msg) {
    return;
  }
  // plan
  plansys2_msgs__msg__Plan__fini(&msg->plan);
}

bool
plansys2_msgs__action__ExecutePlan_Goal__are_equal(const plansys2_msgs__action__ExecutePlan_Goal * lhs, const plansys2_msgs__action__ExecutePlan_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plan
  if (!plansys2_msgs__msg__Plan__are_equal(
      &(lhs->plan), &(rhs->plan)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_Goal__copy(
  const plansys2_msgs__action__ExecutePlan_Goal * input,
  plansys2_msgs__action__ExecutePlan_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // plan
  if (!plansys2_msgs__msg__Plan__copy(
      &(input->plan), &(output->plan)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__action__ExecutePlan_Goal *
plansys2_msgs__action__ExecutePlan_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Goal * msg = (plansys2_msgs__action__ExecutePlan_Goal *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_Goal));
  bool success = plansys2_msgs__action__ExecutePlan_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_Goal__destroy(plansys2_msgs__action__ExecutePlan_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_Goal__Sequence__init(plansys2_msgs__action__ExecutePlan_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Goal * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_Goal *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_Goal__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_Goal__Sequence__fini(plansys2_msgs__action__ExecutePlan_Goal__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_Goal__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_Goal__Sequence *
plansys2_msgs__action__ExecutePlan_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Goal__Sequence * array = (plansys2_msgs__action__ExecutePlan_Goal__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_Goal__Sequence__destroy(plansys2_msgs__action__ExecutePlan_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_Goal__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_Goal__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_Goal__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_Goal__Sequence * input,
  plansys2_msgs__action__ExecutePlan_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_Goal);
    plansys2_msgs__action__ExecutePlan_Goal * data =
      (plansys2_msgs__action__ExecutePlan_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `action_execution_status`
#include "plansys2_msgs/msg/detail/action_execution_info__functions.h"

bool
plansys2_msgs__action__ExecutePlan_Result__init(plansys2_msgs__action__ExecutePlan_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // action_execution_status
  if (!plansys2_msgs__msg__ActionExecutionInfo__Sequence__init(&msg->action_execution_status, 0)) {
    plansys2_msgs__action__ExecutePlan_Result__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_Result__fini(plansys2_msgs__action__ExecutePlan_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // action_execution_status
  plansys2_msgs__msg__ActionExecutionInfo__Sequence__fini(&msg->action_execution_status);
}

bool
plansys2_msgs__action__ExecutePlan_Result__are_equal(const plansys2_msgs__action__ExecutePlan_Result * lhs, const plansys2_msgs__action__ExecutePlan_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // action_execution_status
  if (!plansys2_msgs__msg__ActionExecutionInfo__Sequence__are_equal(
      &(lhs->action_execution_status), &(rhs->action_execution_status)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_Result__copy(
  const plansys2_msgs__action__ExecutePlan_Result * input,
  plansys2_msgs__action__ExecutePlan_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // action_execution_status
  if (!plansys2_msgs__msg__ActionExecutionInfo__Sequence__copy(
      &(input->action_execution_status), &(output->action_execution_status)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__action__ExecutePlan_Result *
plansys2_msgs__action__ExecutePlan_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Result * msg = (plansys2_msgs__action__ExecutePlan_Result *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_Result));
  bool success = plansys2_msgs__action__ExecutePlan_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_Result__destroy(plansys2_msgs__action__ExecutePlan_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_Result__Sequence__init(plansys2_msgs__action__ExecutePlan_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Result * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_Result *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_Result__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_Result__Sequence__fini(plansys2_msgs__action__ExecutePlan_Result__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_Result__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_Result__Sequence *
plansys2_msgs__action__ExecutePlan_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Result__Sequence * array = (plansys2_msgs__action__ExecutePlan_Result__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_Result__Sequence__destroy(plansys2_msgs__action__ExecutePlan_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_Result__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_Result__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_Result__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_Result__Sequence * input,
  plansys2_msgs__action__ExecutePlan_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_Result);
    plansys2_msgs__action__ExecutePlan_Result * data =
      (plansys2_msgs__action__ExecutePlan_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `action_execution_status`
// already included above
// #include "plansys2_msgs/msg/detail/action_execution_info__functions.h"

bool
plansys2_msgs__action__ExecutePlan_Feedback__init(plansys2_msgs__action__ExecutePlan_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // action_execution_status
  if (!plansys2_msgs__msg__ActionExecutionInfo__Sequence__init(&msg->action_execution_status, 0)) {
    plansys2_msgs__action__ExecutePlan_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_Feedback__fini(plansys2_msgs__action__ExecutePlan_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // action_execution_status
  plansys2_msgs__msg__ActionExecutionInfo__Sequence__fini(&msg->action_execution_status);
}

bool
plansys2_msgs__action__ExecutePlan_Feedback__are_equal(const plansys2_msgs__action__ExecutePlan_Feedback * lhs, const plansys2_msgs__action__ExecutePlan_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_execution_status
  if (!plansys2_msgs__msg__ActionExecutionInfo__Sequence__are_equal(
      &(lhs->action_execution_status), &(rhs->action_execution_status)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_Feedback__copy(
  const plansys2_msgs__action__ExecutePlan_Feedback * input,
  plansys2_msgs__action__ExecutePlan_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // action_execution_status
  if (!plansys2_msgs__msg__ActionExecutionInfo__Sequence__copy(
      &(input->action_execution_status), &(output->action_execution_status)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__action__ExecutePlan_Feedback *
plansys2_msgs__action__ExecutePlan_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Feedback * msg = (plansys2_msgs__action__ExecutePlan_Feedback *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_Feedback));
  bool success = plansys2_msgs__action__ExecutePlan_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_Feedback__destroy(plansys2_msgs__action__ExecutePlan_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__init(plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Feedback * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_Feedback *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_Feedback__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__fini(plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_Feedback__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_Feedback__Sequence *
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array = (plansys2_msgs__action__ExecutePlan_Feedback__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__destroy(plansys2_msgs__action__ExecutePlan_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_Feedback__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_Feedback__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_Feedback__Sequence * input,
  plansys2_msgs__action__ExecutePlan_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_Feedback);
    plansys2_msgs__action__ExecutePlan_Feedback * data =
      (plansys2_msgs__action__ExecutePlan_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_Feedback__copy(
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
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__init(plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!plansys2_msgs__action__ExecutePlan_Goal__init(&msg->goal)) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  plansys2_msgs__action__ExecutePlan_Goal__fini(&msg->goal);
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Request * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Request * rhs)
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
  if (!plansys2_msgs__action__ExecutePlan_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Request * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Request * output)
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
  if (!plansys2_msgs__action__ExecutePlan_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__action__ExecutePlan_SendGoal_Request *
plansys2_msgs__action__ExecutePlan_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg = (plansys2_msgs__action__ExecutePlan_SendGoal_Request *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Request));
  bool success = plansys2_msgs__action__ExecutePlan_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__init(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_SendGoal_Request * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_SendGoal_Request *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence *
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array = (plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Request);
    plansys2_msgs__action__ExecutePlan_SendGoal_Request * data =
      (plansys2_msgs__action__ExecutePlan_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_SendGoal_Request__copy(
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
plansys2_msgs__action__ExecutePlan_SendGoal_Response__init(plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Response * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Response * rhs)
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
plansys2_msgs__action__ExecutePlan_SendGoal_Response__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Response * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Response * output)
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

plansys2_msgs__action__ExecutePlan_SendGoal_Response *
plansys2_msgs__action__ExecutePlan_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg = (plansys2_msgs__action__ExecutePlan_SendGoal_Response *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Response));
  bool success = plansys2_msgs__action__ExecutePlan_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__init(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_SendGoal_Response * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_SendGoal_Response *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__fini(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence *
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array = (plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__destroy(plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * input,
  plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Response);
    plansys2_msgs__action__ExecutePlan_SendGoal_Response * data =
      (plansys2_msgs__action__ExecutePlan_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_SendGoal_Response__copy(
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
plansys2_msgs__action__ExecutePlan_GetResult_Request__init(plansys2_msgs__action__ExecutePlan_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(plansys2_msgs__action__ExecutePlan_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Request * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Request * rhs)
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
plansys2_msgs__action__ExecutePlan_GetResult_Request__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Request * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Request * output)
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

plansys2_msgs__action__ExecutePlan_GetResult_Request *
plansys2_msgs__action__ExecutePlan_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_GetResult_Request * msg = (plansys2_msgs__action__ExecutePlan_GetResult_Request *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Request));
  bool success = plansys2_msgs__action__ExecutePlan_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_GetResult_Request__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__init(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_GetResult_Request * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_GetResult_Request *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__fini(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence *
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array = (plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Request);
    plansys2_msgs__action__ExecutePlan_GetResult_Request * data =
      (plansys2_msgs__action__ExecutePlan_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_GetResult_Request__copy(
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
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"

bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__init(plansys2_msgs__action__ExecutePlan_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!plansys2_msgs__action__ExecutePlan_Result__init(&msg->result)) {
    plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(plansys2_msgs__action__ExecutePlan_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  plansys2_msgs__action__ExecutePlan_Result__fini(&msg->result);
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Response * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!plansys2_msgs__action__ExecutePlan_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Response * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!plansys2_msgs__action__ExecutePlan_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__action__ExecutePlan_GetResult_Response *
plansys2_msgs__action__ExecutePlan_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_GetResult_Response * msg = (plansys2_msgs__action__ExecutePlan_GetResult_Response *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Response));
  bool success = plansys2_msgs__action__ExecutePlan_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_GetResult_Response__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__init(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_GetResult_Response * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_GetResult_Response *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__fini(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence *
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array = (plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__destroy(plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * input,
  plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Response);
    plansys2_msgs__action__ExecutePlan_GetResult_Response * data =
      (plansys2_msgs__action__ExecutePlan_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_GetResult_Response__copy(
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
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"

bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__init(plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!plansys2_msgs__action__ExecutePlan_Feedback__init(&msg->feedback)) {
    plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  plansys2_msgs__action__ExecutePlan_Feedback__fini(&msg->feedback);
}

bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__are_equal(const plansys2_msgs__action__ExecutePlan_FeedbackMessage * lhs, const plansys2_msgs__action__ExecutePlan_FeedbackMessage * rhs)
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
  if (!plansys2_msgs__action__ExecutePlan_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__copy(
  const plansys2_msgs__action__ExecutePlan_FeedbackMessage * input,
  plansys2_msgs__action__ExecutePlan_FeedbackMessage * output)
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
  if (!plansys2_msgs__action__ExecutePlan_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__action__ExecutePlan_FeedbackMessage *
plansys2_msgs__action__ExecutePlan_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg = (plansys2_msgs__action__ExecutePlan_FeedbackMessage *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__action__ExecutePlan_FeedbackMessage));
  bool success = plansys2_msgs__action__ExecutePlan_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__destroy(plansys2_msgs__action__ExecutePlan_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__init(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_FeedbackMessage * data = NULL;

  if (size) {
    data = (plansys2_msgs__action__ExecutePlan_FeedbackMessage *)allocator.zero_allocate(size, sizeof(plansys2_msgs__action__ExecutePlan_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__action__ExecutePlan_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(&data[i - 1]);
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
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__fini(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array)
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
      plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(&array->data[i]);
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

plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence *
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array = (plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence *)allocator.allocate(sizeof(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__destroy(plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__are_equal(const plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * lhs, const plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence__copy(
  const plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * input,
  plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__action__ExecutePlan_FeedbackMessage);
    plansys2_msgs__action__ExecutePlan_FeedbackMessage * data =
      (plansys2_msgs__action__ExecutePlan_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__action__ExecutePlan_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!plansys2_msgs__action__ExecutePlan_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
