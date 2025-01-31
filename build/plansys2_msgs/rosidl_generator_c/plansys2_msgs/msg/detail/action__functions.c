// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/Action.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `parameters`
#include "plansys2_msgs/msg/detail/param__functions.h"
// Member `preconditions`
// Member `effects`
#include "plansys2_msgs/msg/detail/tree__functions.h"

bool
plansys2_msgs__msg__Action__init(plansys2_msgs__msg__Action * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    plansys2_msgs__msg__Action__fini(msg);
    return false;
  }
  // parameters
  if (!plansys2_msgs__msg__Param__Sequence__init(&msg->parameters, 0)) {
    plansys2_msgs__msg__Action__fini(msg);
    return false;
  }
  // preconditions
  if (!plansys2_msgs__msg__Tree__init(&msg->preconditions)) {
    plansys2_msgs__msg__Action__fini(msg);
    return false;
  }
  // effects
  if (!plansys2_msgs__msg__Tree__init(&msg->effects)) {
    plansys2_msgs__msg__Action__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__Action__fini(plansys2_msgs__msg__Action * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // parameters
  plansys2_msgs__msg__Param__Sequence__fini(&msg->parameters);
  // preconditions
  plansys2_msgs__msg__Tree__fini(&msg->preconditions);
  // effects
  plansys2_msgs__msg__Tree__fini(&msg->effects);
}

bool
plansys2_msgs__msg__Action__are_equal(const plansys2_msgs__msg__Action * lhs, const plansys2_msgs__msg__Action * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // parameters
  if (!plansys2_msgs__msg__Param__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  // preconditions
  if (!plansys2_msgs__msg__Tree__are_equal(
      &(lhs->preconditions), &(rhs->preconditions)))
  {
    return false;
  }
  // effects
  if (!plansys2_msgs__msg__Tree__are_equal(
      &(lhs->effects), &(rhs->effects)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__Action__copy(
  const plansys2_msgs__msg__Action * input,
  plansys2_msgs__msg__Action * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // parameters
  if (!plansys2_msgs__msg__Param__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  // preconditions
  if (!plansys2_msgs__msg__Tree__copy(
      &(input->preconditions), &(output->preconditions)))
  {
    return false;
  }
  // effects
  if (!plansys2_msgs__msg__Tree__copy(
      &(input->effects), &(output->effects)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__Action *
plansys2_msgs__msg__Action__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Action * msg = (plansys2_msgs__msg__Action *)allocator.allocate(sizeof(plansys2_msgs__msg__Action), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__Action));
  bool success = plansys2_msgs__msg__Action__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__Action__destroy(plansys2_msgs__msg__Action * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__Action__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__Action__Sequence__init(plansys2_msgs__msg__Action__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Action * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__Action *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__Action), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__Action__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__Action__fini(&data[i - 1]);
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
plansys2_msgs__msg__Action__Sequence__fini(plansys2_msgs__msg__Action__Sequence * array)
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
      plansys2_msgs__msg__Action__fini(&array->data[i]);
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

plansys2_msgs__msg__Action__Sequence *
plansys2_msgs__msg__Action__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Action__Sequence * array = (plansys2_msgs__msg__Action__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__Action__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__Action__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__Action__Sequence__destroy(plansys2_msgs__msg__Action__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__Action__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__Action__Sequence__are_equal(const plansys2_msgs__msg__Action__Sequence * lhs, const plansys2_msgs__msg__Action__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__Action__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__Action__Sequence__copy(
  const plansys2_msgs__msg__Action__Sequence * input,
  plansys2_msgs__msg__Action__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__Action);
    plansys2_msgs__msg__Action * data =
      (plansys2_msgs__msg__Action *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__Action__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__Action__fini(&data[i]);
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
    if (!plansys2_msgs__msg__Action__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
