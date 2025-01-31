// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cascade_lifecycle_msgs:msg/Activation.idl
// generated code does not contain a copyright notice
#include "cascade_lifecycle_msgs/msg/detail/activation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `activator`
// Member `activation`
#include "rosidl_runtime_c/string_functions.h"

bool
cascade_lifecycle_msgs__msg__Activation__init(cascade_lifecycle_msgs__msg__Activation * msg)
{
  if (!msg) {
    return false;
  }
  // operation_type
  // activator
  if (!rosidl_runtime_c__String__init(&msg->activator)) {
    cascade_lifecycle_msgs__msg__Activation__fini(msg);
    return false;
  }
  // activation
  if (!rosidl_runtime_c__String__init(&msg->activation)) {
    cascade_lifecycle_msgs__msg__Activation__fini(msg);
    return false;
  }
  return true;
}

void
cascade_lifecycle_msgs__msg__Activation__fini(cascade_lifecycle_msgs__msg__Activation * msg)
{
  if (!msg) {
    return;
  }
  // operation_type
  // activator
  rosidl_runtime_c__String__fini(&msg->activator);
  // activation
  rosidl_runtime_c__String__fini(&msg->activation);
}

bool
cascade_lifecycle_msgs__msg__Activation__are_equal(const cascade_lifecycle_msgs__msg__Activation * lhs, const cascade_lifecycle_msgs__msg__Activation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operation_type
  if (lhs->operation_type != rhs->operation_type) {
    return false;
  }
  // activator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->activator), &(rhs->activator)))
  {
    return false;
  }
  // activation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->activation), &(rhs->activation)))
  {
    return false;
  }
  return true;
}

bool
cascade_lifecycle_msgs__msg__Activation__copy(
  const cascade_lifecycle_msgs__msg__Activation * input,
  cascade_lifecycle_msgs__msg__Activation * output)
{
  if (!input || !output) {
    return false;
  }
  // operation_type
  output->operation_type = input->operation_type;
  // activator
  if (!rosidl_runtime_c__String__copy(
      &(input->activator), &(output->activator)))
  {
    return false;
  }
  // activation
  if (!rosidl_runtime_c__String__copy(
      &(input->activation), &(output->activation)))
  {
    return false;
  }
  return true;
}

cascade_lifecycle_msgs__msg__Activation *
cascade_lifecycle_msgs__msg__Activation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cascade_lifecycle_msgs__msg__Activation * msg = (cascade_lifecycle_msgs__msg__Activation *)allocator.allocate(sizeof(cascade_lifecycle_msgs__msg__Activation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cascade_lifecycle_msgs__msg__Activation));
  bool success = cascade_lifecycle_msgs__msg__Activation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cascade_lifecycle_msgs__msg__Activation__destroy(cascade_lifecycle_msgs__msg__Activation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cascade_lifecycle_msgs__msg__Activation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cascade_lifecycle_msgs__msg__Activation__Sequence__init(cascade_lifecycle_msgs__msg__Activation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cascade_lifecycle_msgs__msg__Activation * data = NULL;

  if (size) {
    data = (cascade_lifecycle_msgs__msg__Activation *)allocator.zero_allocate(size, sizeof(cascade_lifecycle_msgs__msg__Activation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cascade_lifecycle_msgs__msg__Activation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cascade_lifecycle_msgs__msg__Activation__fini(&data[i - 1]);
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
cascade_lifecycle_msgs__msg__Activation__Sequence__fini(cascade_lifecycle_msgs__msg__Activation__Sequence * array)
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
      cascade_lifecycle_msgs__msg__Activation__fini(&array->data[i]);
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

cascade_lifecycle_msgs__msg__Activation__Sequence *
cascade_lifecycle_msgs__msg__Activation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cascade_lifecycle_msgs__msg__Activation__Sequence * array = (cascade_lifecycle_msgs__msg__Activation__Sequence *)allocator.allocate(sizeof(cascade_lifecycle_msgs__msg__Activation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cascade_lifecycle_msgs__msg__Activation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cascade_lifecycle_msgs__msg__Activation__Sequence__destroy(cascade_lifecycle_msgs__msg__Activation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cascade_lifecycle_msgs__msg__Activation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cascade_lifecycle_msgs__msg__Activation__Sequence__are_equal(const cascade_lifecycle_msgs__msg__Activation__Sequence * lhs, const cascade_lifecycle_msgs__msg__Activation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cascade_lifecycle_msgs__msg__Activation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cascade_lifecycle_msgs__msg__Activation__Sequence__copy(
  const cascade_lifecycle_msgs__msg__Activation__Sequence * input,
  cascade_lifecycle_msgs__msg__Activation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cascade_lifecycle_msgs__msg__Activation);
    cascade_lifecycle_msgs__msg__Activation * data =
      (cascade_lifecycle_msgs__msg__Activation *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cascade_lifecycle_msgs__msg__Activation__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cascade_lifecycle_msgs__msg__Activation__fini(&data[i]);
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
    if (!cascade_lifecycle_msgs__msg__Activation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
