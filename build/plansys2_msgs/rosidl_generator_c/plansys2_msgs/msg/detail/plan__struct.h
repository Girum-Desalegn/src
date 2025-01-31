// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "plansys2_msgs/msg/detail/plan_item__struct.h"

// Struct defined in msg/Plan in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__Plan
{
  plansys2_msgs__msg__PlanItem__Sequence items;
} plansys2_msgs__msg__Plan;

// Struct for a sequence of plansys2_msgs__msg__Plan.
typedef struct plansys2_msgs__msg__Plan__Sequence
{
  plansys2_msgs__msg__Plan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__Plan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN__STRUCT_H_
