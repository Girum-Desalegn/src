// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'instances'
// Member 'predicates'
// Member 'functions'
// Member 'goal'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Knowledge in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__Knowledge
{
  rosidl_runtime_c__String__Sequence instances;
  rosidl_runtime_c__String__Sequence predicates;
  rosidl_runtime_c__String__Sequence functions;
  rosidl_runtime_c__String goal;
} plansys2_msgs__msg__Knowledge;

// Struct for a sequence of plansys2_msgs__msg__Knowledge.
typedef struct plansys2_msgs__msg__Knowledge__Sequence
{
  plansys2_msgs__msg__Knowledge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__Knowledge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__STRUCT_H_
