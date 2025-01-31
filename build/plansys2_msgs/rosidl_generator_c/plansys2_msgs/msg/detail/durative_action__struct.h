// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__STRUCT_H_

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
// Member 'at_start_requirements'
// Member 'over_all_requirements'
// Member 'at_end_requirements'
// Member 'at_start_effects'
// Member 'at_end_effects'
#include "plansys2_msgs/msg/detail/tree__struct.h"

// Struct defined in msg/DurativeAction in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__DurativeAction
{
  rosidl_runtime_c__String name;
  plansys2_msgs__msg__Param__Sequence parameters;
  plansys2_msgs__msg__Tree at_start_requirements;
  plansys2_msgs__msg__Tree over_all_requirements;
  plansys2_msgs__msg__Tree at_end_requirements;
  plansys2_msgs__msg__Tree at_start_effects;
  plansys2_msgs__msg__Tree at_end_effects;
} plansys2_msgs__msg__DurativeAction;

// Struct for a sequence of plansys2_msgs__msg__DurativeAction.
typedef struct plansys2_msgs__msg__DurativeAction__Sequence
{
  plansys2_msgs__msg__DurativeAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__DurativeAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__DURATIVE_ACTION__STRUCT_H_
