// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/ActionExecutionInfo.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/action_execution_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start_stamp`
// Member `status_stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `action_full_name`
// Member `action`
// Member `arguments`
// Member `message_status`
#include "rosidl_runtime_c/string_functions.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
plansys2_msgs__msg__ActionExecutionInfo__init(plansys2_msgs__msg__ActionExecutionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // start_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->start_stamp)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  // status_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->status_stamp)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  // action_full_name
  if (!rosidl_runtime_c__String__init(&msg->action_full_name)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  // arguments
  if (!rosidl_runtime_c__String__Sequence__init(&msg->arguments, 0)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  // completion
  // message_status
  if (!rosidl_runtime_c__String__init(&msg->message_status)) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__ActionExecutionInfo__fini(plansys2_msgs__msg__ActionExecutionInfo * msg)
{
  if (!msg) {
    return;
  }
  // status
  // start_stamp
  builtin_interfaces__msg__Time__fini(&msg->start_stamp);
  // status_stamp
  builtin_interfaces__msg__Time__fini(&msg->status_stamp);
  // action_full_name
  rosidl_runtime_c__String__fini(&msg->action_full_name);
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // arguments
  rosidl_runtime_c__String__Sequence__fini(&msg->arguments);
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // completion
  // message_status
  rosidl_runtime_c__String__fini(&msg->message_status);
}

bool
plansys2_msgs__msg__ActionExecutionInfo__are_equal(const plansys2_msgs__msg__ActionExecutionInfo * lhs, const plansys2_msgs__msg__ActionExecutionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // start_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_stamp), &(rhs->start_stamp)))
  {
    return false;
  }
  // status_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->status_stamp), &(rhs->status_stamp)))
  {
    return false;
  }
  // action_full_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action_full_name), &(rhs->action_full_name)))
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
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // completion
  if (lhs->completion != rhs->completion) {
    return false;
  }
  // message_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_status), &(rhs->message_status)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__ActionExecutionInfo__copy(
  const plansys2_msgs__msg__ActionExecutionInfo * input,
  plansys2_msgs__msg__ActionExecutionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // start_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_stamp), &(output->start_stamp)))
  {
    return false;
  }
  // status_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->status_stamp), &(output->status_stamp)))
  {
    return false;
  }
  // action_full_name
  if (!rosidl_runtime_c__String__copy(
      &(input->action_full_name), &(output->action_full_name)))
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
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // completion
  output->completion = input->completion;
  // message_status
  if (!rosidl_runtime_c__String__copy(
      &(input->message_status), &(output->message_status)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__ActionExecutionInfo *
plansys2_msgs__msg__ActionExecutionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionExecutionInfo * msg = (plansys2_msgs__msg__ActionExecutionInfo *)allocator.allocate(sizeof(plansys2_msgs__msg__ActionExecutionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__ActionExecutionInfo));
  bool success = plansys2_msgs__msg__ActionExecutionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__ActionExecutionInfo__destroy(plansys2_msgs__msg__ActionExecutionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__ActionExecutionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__ActionExecutionInfo__Sequence__init(plansys2_msgs__msg__ActionExecutionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionExecutionInfo * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__ActionExecutionInfo *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__ActionExecutionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__ActionExecutionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__ActionExecutionInfo__fini(&data[i - 1]);
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
plansys2_msgs__msg__ActionExecutionInfo__Sequence__fini(plansys2_msgs__msg__ActionExecutionInfo__Sequence * array)
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
      plansys2_msgs__msg__ActionExecutionInfo__fini(&array->data[i]);
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

plansys2_msgs__msg__ActionExecutionInfo__Sequence *
plansys2_msgs__msg__ActionExecutionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionExecutionInfo__Sequence * array = (plansys2_msgs__msg__ActionExecutionInfo__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__ActionExecutionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__ActionExecutionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__ActionExecutionInfo__Sequence__destroy(plansys2_msgs__msg__ActionExecutionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__ActionExecutionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__ActionExecutionInfo__Sequence__are_equal(const plansys2_msgs__msg__ActionExecutionInfo__Sequence * lhs, const plansys2_msgs__msg__ActionExecutionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__ActionExecutionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__ActionExecutionInfo__Sequence__copy(
  const plansys2_msgs__msg__ActionExecutionInfo__Sequence * input,
  plansys2_msgs__msg__ActionExecutionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__ActionExecutionInfo);
    plansys2_msgs__msg__ActionExecutionInfo * data =
      (plansys2_msgs__msg__ActionExecutionInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__ActionExecutionInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__ActionExecutionInfo__fini(&data[i]);
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
    if (!plansys2_msgs__msg__ActionExecutionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
