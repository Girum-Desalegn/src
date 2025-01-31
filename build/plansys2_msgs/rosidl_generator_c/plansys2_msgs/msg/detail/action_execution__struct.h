// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/ActionExecution.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REQUEST'.
enum
{
  plansys2_msgs__msg__ActionExecution__REQUEST = 1
};

/// Constant 'RESPONSE'.
enum
{
  plansys2_msgs__msg__ActionExecution__RESPONSE = 2
};

/// Constant 'CONFIRM'.
enum
{
  plansys2_msgs__msg__ActionExecution__CONFIRM = 3
};

/// Constant 'REJECT'.
enum
{
  plansys2_msgs__msg__ActionExecution__REJECT = 4
};

/// Constant 'FEEDBACK'.
enum
{
  plansys2_msgs__msg__ActionExecution__FEEDBACK = 5
};

/// Constant 'FINISH'.
enum
{
  plansys2_msgs__msg__ActionExecution__FINISH = 6
};

/// Constant 'CANCEL'.
enum
{
  plansys2_msgs__msg__ActionExecution__CANCEL = 7
};

// Include directives for member types
// Member 'node_id'
// Member 'action'
// Member 'arguments'
// Member 'status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ActionExecution in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__ActionExecution
{
  int16_t type;
  rosidl_runtime_c__String node_id;
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String__Sequence arguments;
  bool success;
  float completion;
  rosidl_runtime_c__String status;
} plansys2_msgs__msg__ActionExecution;

// Struct for a sequence of plansys2_msgs__msg__ActionExecution.
typedef struct plansys2_msgs__msg__ActionExecution__Sequence
{
  plansys2_msgs__msg__ActionExecution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__ActionExecution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION__STRUCT_H_
