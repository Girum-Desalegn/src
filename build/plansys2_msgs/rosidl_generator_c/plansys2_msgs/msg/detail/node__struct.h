// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__NODE__STRUCT_H_
#define PLANSYS2_MSGS__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  plansys2_msgs__msg__Node__UNKNOWN = 0
};

/// Constant 'AND'.
enum
{
  plansys2_msgs__msg__Node__AND = 1
};

/// Constant 'OR'.
enum
{
  plansys2_msgs__msg__Node__OR = 2
};

/// Constant 'NOT'.
enum
{
  plansys2_msgs__msg__Node__NOT = 3
};

/// Constant 'ACTION'.
enum
{
  plansys2_msgs__msg__Node__ACTION = 4
};

/// Constant 'PREDICATE'.
enum
{
  plansys2_msgs__msg__Node__PREDICATE = 5
};

/// Constant 'FUNCTION'.
enum
{
  plansys2_msgs__msg__Node__FUNCTION = 6
};

/// Constant 'EXPRESSION'.
enum
{
  plansys2_msgs__msg__Node__EXPRESSION = 7
};

/// Constant 'FUNCTION_MODIFIER'.
enum
{
  plansys2_msgs__msg__Node__FUNCTION_MODIFIER = 8
};

/// Constant 'NUMBER'.
enum
{
  plansys2_msgs__msg__Node__NUMBER = 9
};

/// Constant 'COMP_GE'.
enum
{
  plansys2_msgs__msg__Node__COMP_GE = 10
};

/// Constant 'COMP_GT'.
enum
{
  plansys2_msgs__msg__Node__COMP_GT = 11
};

/// Constant 'COMP_LE'.
enum
{
  plansys2_msgs__msg__Node__COMP_LE = 12
};

/// Constant 'COMP_LT'.
enum
{
  plansys2_msgs__msg__Node__COMP_LT = 13
};

/// Constant 'ARITH_MULT'.
enum
{
  plansys2_msgs__msg__Node__ARITH_MULT = 14
};

/// Constant 'ARITH_DIV'.
enum
{
  plansys2_msgs__msg__Node__ARITH_DIV = 15
};

/// Constant 'ARITH_ADD'.
enum
{
  plansys2_msgs__msg__Node__ARITH_ADD = 16
};

/// Constant 'ARITH_SUB'.
enum
{
  plansys2_msgs__msg__Node__ARITH_SUB = 17
};

/// Constant 'ASSIGN'.
enum
{
  plansys2_msgs__msg__Node__ASSIGN = 18
};

/// Constant 'INCREASE'.
enum
{
  plansys2_msgs__msg__Node__INCREASE = 19
};

/// Constant 'DECREASE'.
enum
{
  plansys2_msgs__msg__Node__DECREASE = 20
};

/// Constant 'SCALE_UP'.
enum
{
  plansys2_msgs__msg__Node__SCALE_UP = 21
};

/// Constant 'SCALE_DOWN'.
enum
{
  plansys2_msgs__msg__Node__SCALE_DOWN = 22
};

// Include directives for member types
// Member 'children'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'parameters'
#include "plansys2_msgs/msg/detail/param__struct.h"

// Struct defined in msg/Node in the package plansys2_msgs.
typedef struct plansys2_msgs__msg__Node
{
  uint8_t node_type;
  uint8_t expression_type;
  uint8_t modifier_type;
  uint32_t node_id;
  rosidl_runtime_c__uint32__Sequence children;
  rosidl_runtime_c__String name;
  plansys2_msgs__msg__Param__Sequence parameters;
  double value;
  bool negate;
} plansys2_msgs__msg__Node;

// Struct for a sequence of plansys2_msgs__msg__Node.
typedef struct plansys2_msgs__msg__Node__Sequence
{
  plansys2_msgs__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__MSG__DETAIL__NODE__STRUCT_H_
