// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:msg/PlanItem.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/plan_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__msg__PlanItem__init(plansys2_msgs__msg__PlanItem * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    plansys2_msgs__msg__PlanItem__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
plansys2_msgs__msg__PlanItem__fini(plansys2_msgs__msg__PlanItem * msg)
{
  if (!msg) {
    return;
  }
  // time
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // duration
}

bool
plansys2_msgs__msg__PlanItem__are_equal(const plansys2_msgs__msg__PlanItem * lhs, const plansys2_msgs__msg__PlanItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
plansys2_msgs__msg__PlanItem__copy(
  const plansys2_msgs__msg__PlanItem * input,
  plansys2_msgs__msg__PlanItem * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

plansys2_msgs__msg__PlanItem *
plansys2_msgs__msg__PlanItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__PlanItem * msg = (plansys2_msgs__msg__PlanItem *)allocator.allocate(sizeof(plansys2_msgs__msg__PlanItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__msg__PlanItem));
  bool success = plansys2_msgs__msg__PlanItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__msg__PlanItem__destroy(plansys2_msgs__msg__PlanItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__msg__PlanItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__msg__PlanItem__Sequence__init(plansys2_msgs__msg__PlanItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__PlanItem * data = NULL;

  if (size) {
    data = (plansys2_msgs__msg__PlanItem *)allocator.zero_allocate(size, sizeof(plansys2_msgs__msg__PlanItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__msg__PlanItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__msg__PlanItem__fini(&data[i - 1]);
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
plansys2_msgs__msg__PlanItem__Sequence__fini(plansys2_msgs__msg__PlanItem__Sequence * array)
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
      plansys2_msgs__msg__PlanItem__fini(&array->data[i]);
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

plansys2_msgs__msg__PlanItem__Sequence *
plansys2_msgs__msg__PlanItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__msg__PlanItem__Sequence * array = (plansys2_msgs__msg__PlanItem__Sequence *)allocator.allocate(sizeof(plansys2_msgs__msg__PlanItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__msg__PlanItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__msg__PlanItem__Sequence__destroy(plansys2_msgs__msg__PlanItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__msg__PlanItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__msg__PlanItem__Sequence__are_equal(const plansys2_msgs__msg__PlanItem__Sequence * lhs, const plansys2_msgs__msg__PlanItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__msg__PlanItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__msg__PlanItem__Sequence__copy(
  const plansys2_msgs__msg__PlanItem__Sequence * input,
  plansys2_msgs__msg__PlanItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__msg__PlanItem);
    plansys2_msgs__msg__PlanItem * data =
      (plansys2_msgs__msg__PlanItem *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__msg__PlanItem__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__msg__PlanItem__fini(&data[i]);
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
    if (!plansys2_msgs__msg__PlanItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
