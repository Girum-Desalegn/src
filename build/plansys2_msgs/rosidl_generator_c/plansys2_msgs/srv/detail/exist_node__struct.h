// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:srv/ExistNode.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__STRUCT_H_
#define PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node'
#include "plansys2_msgs/msg/detail/node__struct.h"

// Struct defined in srv/ExistNode in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__ExistNode_Request
{
  plansys2_msgs__msg__Node node;
} plansys2_msgs__srv__ExistNode_Request;

// Struct for a sequence of plansys2_msgs__srv__ExistNode_Request.
typedef struct plansys2_msgs__srv__ExistNode_Request__Sequence
{
  plansys2_msgs__srv__ExistNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__ExistNode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ExistNode in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__ExistNode_Response
{
  bool exist;
} plansys2_msgs__srv__ExistNode_Response;

// Struct for a sequence of plansys2_msgs__srv__ExistNode_Response.
typedef struct plansys2_msgs__srv__ExistNode_Response__Sequence
{
  plansys2_msgs__srv__ExistNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__ExistNode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__STRUCT_H_
