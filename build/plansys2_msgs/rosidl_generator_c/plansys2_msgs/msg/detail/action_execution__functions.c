// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/ActionExecution.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/action_execution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_id`
// Member `action`
// Member `arguments`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__msg__ActionExecution__init(plansys2_msgs__msg__ActionExecution * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // node_id
  if (!rosidl_runtime_c__String__init(&msg->node_id)) {
    plansys2_msgs__msg__ActionExecution__fini(msg);
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    plansys2_msgs__msg__ActionExecution__fini(msg);
    return false;
  }
  // arguments
  if (!rosidl_runtime_c__String__Sequence__init(&msg->arguments, 0)) {
    plansys2_msgs__msg__ActionExecution__fini(msg);
    return false;
  }
  // success
  // completion
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    plansys2_msgs__msg__ActionExecution__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__ActionExecution__fini(plansys2_msgs__msg__ActionExecution * msg)
{
  if (!msg) {
    return;
  }
  // type
  // node_id
  rosidl_runtime_c__String__fini(&msg->node_id);
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // arguments
  rosidl_runtime_c__String__Sequence__fini(&msg->arguments);
  // success
  // completion
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
plansys2_msgs__msg__ActionExecution__are_equal(const plansys2_msgs__msg__ActionExecution * lhs, const plansys2_msgs__msg__ActionExecution * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_id), &(rhs->node_id)))
  {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // arguments
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->arguments), &(rhs->arguments)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // completion
  if (lhs->completion != rhs->completion) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__ActionExecution__copy(
  const plansys2_msgs__msg__ActionExecution * input,
  plansys2_msgs__msg__ActionExecution * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // node_id
  if (!rosidl_runtime_c__String__copy(
      &(input->node_id), &(output->node_id)))
  {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // arguments
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->arguments), &(output->arguments)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // completion
  output->completion = input->completion;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__ActionExecution *
plansys2_msgs__msg__ActionExecution__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionExecution * msg = (plansys2_msgs__msg__ActionExecution *)allocator.allocate(sizeof(plansys2_msgs__msg__ActionExecution), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__ActionExecution));
  bool success = plansys2_msgs__msg__ActionExecution__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__ActionExecution__destroy(plansys2_msgs__msg__ActionExecution * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__ActionExecution__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__ActionExecution__Sequence__init(plansys2_msgs__msg__ActionExecution__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionExecution * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__ActionExecution *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__ActionExecution), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__ActionExecution__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__ActionExecution__fini(&data[i - 1]);
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
plansys2_msgs__msg__ActionExecution__Sequence__fini(plansys2_msgs__msg__ActionExecution__Sequence * array)
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
      plansys2_msgs__msg__ActionExecution__fini(&array->data[i]);
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

plansys2_msgs__msg__ActionExecution__Sequence *
plansys2_msgs__msg__ActionExecution__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionExecution__Sequence * array = (plansys2_msgs__msg__ActionExecution__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__ActionExecution__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__ActionExecution__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__ActionExecution__Sequence__destroy(plansys2_msgs__msg__ActionExecution__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__ActionExecution__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__ActionExecution__Sequence__are_equal(const plansys2_msgs__msg__ActionExecution__Sequence * lhs, const plansys2_msgs__msg__ActionExecution__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__ActionExecution__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__ActionExecution__Sequence__copy(
  const plansys2_msgs__msg__ActionExecution__Sequence * input,
  plansys2_msgs__msg__ActionExecution__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__ActionExecution);
    plansys2_msgs__msg__ActionExecution * data =
      (plansys2_msgs__msg__ActionExecution *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__ActionExecution__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__ActionExecution__fini(&data[i]);
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
    if (!plansys2_msgs__msg__ActionExecution__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
