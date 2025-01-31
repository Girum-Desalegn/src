// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cascade_lifecycle_msgs:msg/Activation.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__STRUCT_H_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  cascade_lifecycle_msgs__msg__Activation__ADD = 0
};

/// Constant 'REMOVE'.
enum
{
  cascade_lifecycle_msgs__msg__Activation__REMOVE = 1
};

// Include directives for member types
// Member 'activator'
// Member 'activation'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Activation in the package cascade_lifecycle_msgs.
typedef struct cascade_lifecycle_msgs__msg__Activation
{
  uint8_t operation_type;
  rosidl_runtime_c__String activator;
  rosidl_runtime_c__String activation;
} cascade_lifecycle_msgs__msg__Activation;

// Struct for a sequence of cascade_lifecycle_msgs__msg__Activation.
typedef struct cascade_lifecycle_msgs__msg__Activation__Sequence
{
  cascade_lifecycle_msgs__msg__Activation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cascade_lifecycle_msgs__msg__Activation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__STRUCT_H_
