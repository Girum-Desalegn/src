// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/knowledge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `instances`
// Member `predicates`
// Member `functions`
// Member `goal`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__msg__Knowledge__init(plansys2_msgs__msg__Knowledge * msg)
{
  if (!msg) {
    return false;
  }
  // instances
  if (!rosidl_runtime_c__String__Sequence__init(&msg->instances, 0)) {
    plansys2_msgs__msg__Knowledge__fini(msg);
    return false;
  }
  // predicates
  if (!rosidl_runtime_c__String__Sequence__init(&msg->predicates, 0)) {
    plansys2_msgs__msg__Knowledge__fini(msg);
    return false;
  }
  // functions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->functions, 0)) {
    plansys2_msgs__msg__Knowledge__fini(msg);
    return false;
  }
  // goal
  if (!rosidl_runtime_c__String__init(&msg->goal)) {
    plansys2_msgs__msg__Knowledge__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__msg__Knowledge__fini(plansys2_msgs__msg__Knowledge * msg)
{
  if (!msg) {
    return;
  }
  // instances
  rosidl_runtime_c__String__Sequence__fini(&msg->instances);
  // predicates
  rosidl_runtime_c__String__Sequence__fini(&msg->predicates);
  // functions
  rosidl_runtime_c__String__Sequence__fini(&msg->functions);
  // goal
  rosidl_runtime_c__String__fini(&msg->goal);
}

bool
plansys2_msgs__msg__Knowledge__are_equal(const plansys2_msgs__msg__Knowledge * lhs, const plansys2_msgs__msg__Knowledge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // instances
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->instances), &(rhs->instances)))
  {
    return false;
  }
  // predicates
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->predicates), &(rhs->predicates)))
  {
    return false;
  }
  // functions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->functions), &(rhs->functions)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__Knowledge__copy(
  const plansys2_msgs__msg__Knowledge * input,
  plansys2_msgs__msg__Knowledge * output)
{
  if (!input || !output) {
    return false;
  }
  // instances
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->instances), &(output->instances)))
  {
    return false;
  }
  // predicates
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->predicates), &(output->predicates)))
  {
    return false;
  }
  // functions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->functions), &(output->functions)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__String__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__msg__Knowledge *
plansys2_msgs__msg__Knowledge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Knowledge * msg = (plansys2_msgs__msg__Knowledge *)allocator.allocate(sizeof(plansys2_msgs__msg__Knowledge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__Knowledge));
  bool success = plansys2_msgs__msg__Knowledge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__Knowledge__destroy(plansys2_msgs__msg__Knowledge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__Knowledge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__Knowledge__Sequence__init(plansys2_msgs__msg__Knowledge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Knowledge * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__Knowledge *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__Knowledge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__Knowledge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__Knowledge__fini(&data[i - 1]);
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
plansys2_msgs__msg__Knowledge__Sequence__fini(plansys2_msgs__msg__Knowledge__Sequence * array)
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
      plansys2_msgs__msg__Knowledge__fini(&array->data[i]);
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

plansys2_msgs__msg__Knowledge__Sequence *
plansys2_msgs__msg__Knowledge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__Knowledge__Sequence * array = (plansys2_msgs__msg__Knowledge__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__Knowledge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__Knowledge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__Knowledge__Sequence__destroy(plansys2_msgs__msg__Knowledge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__Knowledge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__Knowledge__Sequence__are_equal(const plansys2_msgs__msg__Knowledge__Sequence * lhs, const plansys2_msgs__msg__Knowledge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__Knowledge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__Knowledge__Sequence__copy(
  const plansys2_msgs__msg__Knowledge__Sequence * input,
  plansys2_msgs__msg__Knowledge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__Knowledge);
    plansys2_msgs__msg__Knowledge * data =
      (plansys2_msgs__msg__Knowledge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__Knowledge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__Knowledge__fini(&data[i]);
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
    if (!plansys2_msgs__msg__Knowledge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
