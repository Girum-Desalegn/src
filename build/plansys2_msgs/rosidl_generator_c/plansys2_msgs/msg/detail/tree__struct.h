// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__TREE__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "plansys2_msgs/msg/detail/node__struct.h"

// Struct defined in msg/Tree in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__Tree
{
  plansys2_msgs__msg__Node__Sequence nodes;
} plansys2_msgs__msg__Tree;

// Struct for a sequence of plansys2_msgs__msg__Tree.
typedef struct plansys2_msgs__msg__Tree__Sequence
{
  plansys2_msgs__msg__Tree * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__Tree__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__TREE__STRUCT_H_
