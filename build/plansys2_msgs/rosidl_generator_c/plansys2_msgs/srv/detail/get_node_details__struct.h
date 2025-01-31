// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:srv/GetNodeDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__STRUCT_H_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'expression'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetNodeDetails in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__GetNodeDetails_Request
{
  rosidl_runtime_c__String expression;
} plansys2_msgs__srv__GetNodeDetails_Request;

// Struct for a sequence of plansys2_msgs__srv__GetNodeDetails_Request.
typedef struct plansys2_msgs__srv__GetNodeDetails_Request__Sequence
{
  plansys2_msgs__srv__GetNodeDetails_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__GetNodeDetails_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'node'
#include "plansys2_msgs/msg/detail/node__struct.h"
// Member 'error_info'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetNodeDetails in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__GetNodeDetails_Response
{
  bool success;
  plansys2_msgs__msg__Node node;
  rosidl_runtime_c__String error_info;
} plansys2_msgs__srv__GetNodeDetails_Response;

// Struct for a sequence of plansys2_msgs__srv__GetNodeDetails_Response.
typedef struct plansys2_msgs__srv__GetNodeDetails_Response__Sequence
{
  plansys2_msgs__srv__GetNodeDetails_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__GetNodeDetails_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__STRUCT_H_
