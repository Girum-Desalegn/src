// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/action_performer_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
// Member `specialized_arguments`
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__msg__ActionPerformerStatus__init(plansys2_msgs__msg__ActionPerformerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    plansys2_msgs__msg__ActionPerformerStatus__fini(msg);
    return false;
  }
  // specialized_arguments
  if (!rosidl_runtime_c__String__Sequence__init(&msg->specialized_arguments, 0)) {
    plansys2_msgs__msg__ActionPerformerStatus__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    plansys2_msgs__msg__ActionPerformerStatus__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__ActionPerformerStatus__fini(plansys2_msgs__msg__ActionPerformerStatus * msg)
{
  if (!msg) {
    return;
  }
  // state
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // specialized_arguments
  rosidl_runtime_c__String__Sequence__fini(&msg->specialized_arguments);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
}

bool
plansys2_msgs__msg__ActionPerformerStatus__are_equal(const plansys2_msgs__msg__ActionPerformerStatus * lhs, const plansys2_msgs__msg__ActionPerformerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // specialized_arguments
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->specialized_arguments), &(rhs->specialized_arguments)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__ActionPerformerStatus__copy(
  const plansys2_msgs__msg__ActionPerformerStatus * input,
  plansys2_msgs__msg__ActionPerformerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // specialized_arguments
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->specialized_arguments), &(output->specialized_arguments)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__ActionPerformerStatus *
plansys2_msgs__msg__ActionPerformerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionPerformerStatus * msg = (plansys2_msgs__msg__ActionPerformerStatus *)allocator.allocate(sizeof(plansys2_msgs__msg__ActionPerformerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__ActionPerformerStatus));
  bool success = plansys2_msgs__msg__ActionPerformerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__ActionPerformerStatus__destroy(plansys2_msgs__msg__ActionPerformerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__ActionPerformerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__ActionPerformerStatus__Sequence__init(plansys2_msgs__msg__ActionPerformerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionPerformerStatus * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__ActionPerformerStatus *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__ActionPerformerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__ActionPerformerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__ActionPerformerStatus__fini(&data[i - 1]);
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
plansys2_msgs__msg__ActionPerformerStatus__Sequence__fini(plansys2_msgs__msg__ActionPerformerStatus__Sequence * array)
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
      plansys2_msgs__msg__ActionPerformerStatus__fini(&array->data[i]);
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

plansys2_msgs__msg__ActionPerformerStatus__Sequence *
plansys2_msgs__msg__ActionPerformerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__ActionPerformerStatus__Sequence * array = (plansys2_msgs__msg__ActionPerformerStatus__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__ActionPerformerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__ActionPerformerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__ActionPerformerStatus__Sequence__destroy(plansys2_msgs__msg__ActionPerformerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__ActionPerformerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__ActionPerformerStatus__Sequence__are_equal(const plansys2_msgs__msg__ActionPerformerStatus__Sequence * lhs, const plansys2_msgs__msg__ActionPerformerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__ActionPerformerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__ActionPerformerStatus__Sequence__copy(
  const plansys2_msgs__msg__ActionPerformerStatus__Sequence * input,
  plansys2_msgs__msg__ActionPerformerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__ActionPerformerStatus);
    plansys2_msgs__msg__ActionPerformerStatus * data =
      (plansys2_msgs__msg__ActionPerformerStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__ActionPerformerStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__ActionPerformerStatus__fini(&data[i]);
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
    if (!plansys2_msgs__msg__ActionPerformerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
