// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from plansys2_msgs:srv/GetNodeDetails.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/get_node_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `expression`
#include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__srv__GetNodeDetails_Request__init(plansys2_msgs__srv__GetNodeDetails_Request * msg)
{
  if (!msg) {
    return false;
  }
  // expression
  if (!rosidl_runtime_c__String__init(&msg->expression)) {
    plansys2_msgs__srv__GetNodeDetails_Request__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__srv__GetNodeDetails_Request__fini(plansys2_msgs__srv__GetNodeDetails_Request * msg)
{
  if (!msg) {
    return;
  }
  // expression
  rosidl_runtime_c__String__fini(&msg->expression);
}

bool
plansys2_msgs__srv__GetNodeDetails_Request__are_equal(const plansys2_msgs__srv__GetNodeDetails_Request * lhs, const plansys2_msgs__srv__GetNodeDetails_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // expression
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->expression), &(rhs->expression)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__srv__GetNodeDetails_Request__copy(
  const plansys2_msgs__srv__GetNodeDetails_Request * input,
  plansys2_msgs__srv__GetNodeDetails_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // expression
  if (!rosidl_runtime_c__String__copy(
      &(input->expression), &(output->expression)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__srv__GetNodeDetails_Request *
plansys2_msgs__srv__GetNodeDetails_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__GetNodeDetails_Request * msg = (plansys2_msgs__srv__GetNodeDetails_Request *)allocator.allocate(sizeof(plansys2_msgs__srv__GetNodeDetails_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__srv__GetNodeDetails_Request));
  bool success = plansys2_msgs__srv__GetNodeDetails_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__srv__GetNodeDetails_Request__destroy(plansys2_msgs__srv__GetNodeDetails_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__srv__GetNodeDetails_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__srv__GetNodeDetails_Request__Sequence__init(plansys2_msgs__srv__GetNodeDetails_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__GetNodeDetails_Request * data = NULL;

  if (size) {
    data = (plansys2_msgs__srv__GetNodeDetails_Request *)allocator.zero_allocate(size, sizeof(plansys2_msgs__srv__GetNodeDetails_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__srv__GetNodeDetails_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__srv__GetNodeDetails_Request__fini(&data[i - 1]);
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
plansys2_msgs__srv__GetNodeDetails_Request__Sequence__fini(plansys2_msgs__srv__GetNodeDetails_Request__Sequence * array)
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
      plansys2_msgs__srv__GetNodeDetails_Request__fini(&array->data[i]);
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

plansys2_msgs__srv__GetNodeDetails_Request__Sequence *
plansys2_msgs__srv__GetNodeDetails_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__GetNodeDetails_Request__Sequence * array = (plansys2_msgs__srv__GetNodeDetails_Request__Sequence *)allocator.allocate(sizeof(plansys2_msgs__srv__GetNodeDetails_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__srv__GetNodeDetails_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__srv__GetNodeDetails_Request__Sequence__destroy(plansys2_msgs__srv__GetNodeDetails_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__srv__GetNodeDetails_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__srv__GetNodeDetails_Request__Sequence__are_equal(const plansys2_msgs__srv__GetNodeDetails_Request__Sequence * lhs, const plansys2_msgs__srv__GetNodeDetails_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__srv__GetNodeDetails_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__srv__GetNodeDetails_Request__Sequence__copy(
  const plansys2_msgs__srv__GetNodeDetails_Request__Sequence * input,
  plansys2_msgs__srv__GetNodeDetails_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__srv__GetNodeDetails_Request);
    plansys2_msgs__srv__GetNodeDetails_Request * data =
      (plansys2_msgs__srv__GetNodeDetails_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__srv__GetNodeDetails_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__srv__GetNodeDetails_Request__fini(&data[i]);
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
    if (!plansys2_msgs__srv__GetNodeDetails_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `node`
#include "plansys2_msgs/msg/detail/node__functions.h"
// Member `error_info`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
plansys2_msgs__srv__GetNodeDetails_Response__init(plansys2_msgs__srv__GetNodeDetails_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // node
  if (!plansys2_msgs__msg__Node__init(&msg->node)) {
    plansys2_msgs__srv__GetNodeDetails_Response__fini(msg);
    return false;
  }
  // error_info
  if (!rosidl_runtime_c__String__init(&msg->error_info)) {
    plansys2_msgs__srv__GetNodeDetails_Response__fini(msg);
    return false;
  }
  return true;
}

void
plansys2_msgs__srv__GetNodeDetails_Response__fini(plansys2_msgs__srv__GetNodeDetails_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // node
  plansys2_msgs__msg__Node__fini(&msg->node);
  // error_info
  rosidl_runtime_c__String__fini(&msg->error_info);
}

bool
plansys2_msgs__srv__GetNodeDetails_Response__are_equal(const plansys2_msgs__srv__GetNodeDetails_Response * lhs, const plansys2_msgs__srv__GetNodeDetails_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // node
  if (!plansys2_msgs__msg__Node__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // error_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_info), &(rhs->error_info)))
  {
    return false;
  }
  return true;
}

bool
plansys2_msgs__srv__GetNodeDetails_Response__copy(
  const plansys2_msgs__srv__GetNodeDetails_Response * input,
  plansys2_msgs__srv__GetNodeDetails_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // node
  if (!plansys2_msgs__msg__Node__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // error_info
  if (!rosidl_runtime_c__String__copy(
      &(input->error_info), &(output->error_info)))
  {
    return false;
  }
  return true;
}

plansys2_msgs__srv__GetNodeDetails_Response *
plansys2_msgs__srv__GetNodeDetails_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__GetNodeDetails_Response * msg = (plansys2_msgs__srv__GetNodeDetails_Response *)allocator.allocate(sizeof(plansys2_msgs__srv__GetNodeDetails_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(plansys2_msgs__srv__GetNodeDetails_Response));
  bool success = plansys2_msgs__srv__GetNodeDetails_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
plansys2_msgs__srv__GetNodeDetails_Response__destroy(plansys2_msgs__srv__GetNodeDetails_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    plansys2_msgs__srv__GetNodeDetails_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
plansys2_msgs__srv__GetNodeDetails_Response__Sequence__init(plansys2_msgs__srv__GetNodeDetails_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__GetNodeDetails_Response * data = NULL;

  if (size) {
    data = (plansys2_msgs__srv__GetNodeDetails_Response *)allocator.zero_allocate(size, sizeof(plansys2_msgs__srv__GetNodeDetails_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = plansys2_msgs__srv__GetNodeDetails_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        plansys2_msgs__srv__GetNodeDetails_Response__fini(&data[i - 1]);
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
plansys2_msgs__srv__GetNodeDetails_Response__Sequence__fini(plansys2_msgs__srv__GetNodeDetails_Response__Sequence * array)
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
      plansys2_msgs__srv__GetNodeDetails_Response__fini(&array->data[i]);
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

plansys2_msgs__srv__GetNodeDetails_Response__Sequence *
plansys2_msgs__srv__GetNodeDetails_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  plansys2_msgs__srv__GetNodeDetails_Response__Sequence * array = (plansys2_msgs__srv__GetNodeDetails_Response__Sequence *)allocator.allocate(sizeof(plansys2_msgs__srv__GetNodeDetails_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = plansys2_msgs__srv__GetNodeDetails_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
plansys2_msgs__srv__GetNodeDetails_Response__Sequence__destroy(plansys2_msgs__srv__GetNodeDetails_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    plansys2_msgs__srv__GetNodeDetails_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
plansys2_msgs__srv__GetNodeDetails_Response__Sequence__are_equal(const plansys2_msgs__srv__GetNodeDetails_Response__Sequence * lhs, const plansys2_msgs__srv__GetNodeDetails_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!plansys2_msgs__srv__GetNodeDetails_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
plansys2_msgs__srv__GetNodeDetails_Response__Sequence__copy(
  const plansys2_msgs__srv__GetNodeDetails_Response__Sequence * input,
  plansys2_msgs__srv__GetNodeDetails_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(plansys2_msgs__srv__GetNodeDetails_Response);
    plansys2_msgs__srv__GetNodeDetails_Response * data =
      (plansys2_msgs__srv__GetNodeDetails_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!plansys2_msgs__srv__GetNodeDetails_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          plansys2_msgs__srv__GetNodeDetails_Response__fini(&data[i]);
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
    if (!plansys2_msgs__srv__GetNodeDetails_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
