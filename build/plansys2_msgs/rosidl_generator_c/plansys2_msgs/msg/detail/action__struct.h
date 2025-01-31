// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'parameters'
#include "plansys2_msgs/msg/detail/param__struct.h"
// Member 'preconditions'
// Member 'effects'
#include "plansys2_msgs/msg/detail/tree__struct.h"

// Struct defined in msg/Action in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__Action
{
  rosidl_runtime_c__String name;
  plansys2_msgs__msg__Param__Sequence parameters;
  plansys2_msgs__msg__Tree preconditions;
  plansys2_msgs__msg__Tree effects;
} plansys2_msgs__msg__Action;

// Struct for a sequence of plansys2_msgs__msg__Action.
typedef struct plansys2_msgs__msg__Action__Sequence
{
  plansys2_msgs__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION__STRUCT_H_
