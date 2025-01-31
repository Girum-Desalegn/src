// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/ActionExecutionInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_EXECUTED'.
enum
{
  plansys2_msgs__msg__ActionExecutionInfo__NOT_EXECUTED = 1
};

/// Constant 'EXECUTING'.
enum
{
  plansys2_msgs__msg__ActionExecutionInfo__EXECUTING = 2
};

/// Constant 'FAILED'.
enum
{
  plansys2_msgs__msg__ActionExecutionInfo__FAILED = 3
};

/// Constant 'SUCCEEDED'.
enum
{
  plansys2_msgs__msg__ActionExecutionInfo__SUCCEEDED = 4
};

/// Constant 'CANCELLED'.
enum
{
  plansys2_msgs__msg__ActionExecutionInfo__CANCELLED = 5
};

// Include directives for member types
// Member 'start_stamp'
// Member 'status_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'action_full_name'
// Member 'action'
// Member 'arguments'
// Member 'message_status'
#include "rosidl_runtime_c/string.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/ActionExecutionInfo in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__ActionExecutionInfo
{
  int8_t status;
  builtin_interfaces__msg__Time start_stamp;
  builtin_interfaces__msg__Time status_stamp;
  rosidl_runtime_c__String action_full_name;
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String__Sequence arguments;
  builtin_interfaces__msg__Duration duration;
  float completion;
  rosidl_runtime_c__String message_status;
} plansys2_msgs__msg__ActionExecutionInfo;

// Struct for a sequence of plansys2_msgs__msg__ActionExecutionInfo.
typedef struct plansys2_msgs__msg__ActionExecutionInfo__Sequence
{
  plansys2_msgs__msg__ActionExecutionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__ActionExecutionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__STRUCT_H_
