// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:srv/AddProblem.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM__STRUCT_H_
#define PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'problem'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AddProblem in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__AddProblem_Request
{
  rosidl_runtime_c__String problem;
} plansys2_msgs__srv__AddProblem_Request;

// Struct for a sequence of plansys2_msgs__srv__AddProblem_Request.
typedef struct plansys2_msgs__srv__AddProblem_Request__Sequence
{
  plansys2_msgs__srv__AddProblem_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__AddProblem_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_info'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AddProblem in the package plansys2_msgs.
typedef struct plansys2_msgs__srv__AddProblem_Response
{
  bool success;
  rosidl_runtime_c__String error_info;
} plansys2_msgs__srv__AddProblem_Response;

// Struct for a sequence of plansys2_msgs__srv__AddProblem_Response.
typedef struct plansys2_msgs__srv__AddProblem_Response__Sequence
{
  plansys2_msgs__srv__AddProblem_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__srv__AddProblem_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__SRV__DETAIL__ADD_PROBLEM__STRUCT_H_
