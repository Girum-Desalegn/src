// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cascade_lifecycle_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_H_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/State in the package cascade_lifecycle_msgs.
typedef struct cascade_lifecycle_msgs__msg__State
{
  uint8_t state;
  rosidl_runtime_c__String node_name;
} cascade_lifecycle_msgs__msg__State;

// Struct for a sequence of cascade_lifecycle_msgs__msg__State.
typedef struct cascade_lifecycle_msgs__msg__State__Sequence
{
  cascade_lifecycle_msgs__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cascade_lifecycle_msgs__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__STRUCT_H_
