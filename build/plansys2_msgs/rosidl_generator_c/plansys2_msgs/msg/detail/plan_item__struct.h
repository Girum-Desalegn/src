// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/PlanItem.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PlanItem in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__PlanItem
{
  float time;
  rosidl_runtime_c__String action;
  float duration;
} plansys2_msgs__msg__PlanItem;

// Struct for a sequence of plansys2_msgs__msg__PlanItem.
typedef struct plansys2_msgs__msg__PlanItem__Sequence
{
  plansys2_msgs__msg__PlanItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__PlanItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN_ITEM__STRUCT_H_
