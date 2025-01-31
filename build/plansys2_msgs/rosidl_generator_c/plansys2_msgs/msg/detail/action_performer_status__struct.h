// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_READY'.
enum
{
  plansys2_msgs__msg__ActionPerformerStatus__NOT_READY = 0
};

/// Constant 'READY'.
enum
{
  plansys2_msgs__msg__ActionPerformerStatus__READY = 1
};

/// Constant 'RUNNING'.
enum
{
  plansys2_msgs__msg__ActionPerformerStatus__RUNNING = 2
};

/// Constant 'FAILURE'.
enum
{
  plansys2_msgs__msg__ActionPerformerStatus__FAILURE = 4
};

// Include directives for member types
// Member 'action'
// Member 'specialized_arguments'
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ActionPerformerStatus in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__ActionPerformerStatus
{
  int8_t state;
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String__Sequence specialized_arguments;
  rosidl_runtime_c__String node_name;
} plansys2_msgs__msg__ActionPerformerStatus;

// Struct for a sequence of plansys2_msgs__msg__ActionPerformerStatus.
typedef struct plansys2_msgs__msg__ActionPerformerStatus__Sequence
{
  plansys2_msgs__msg__ActionPerformerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__ActionPerformerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_PERFORMER_STATUS__STRUCT_H_
