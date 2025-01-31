// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/action_performer_status__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/action_performer_status__functions.h"
#include "plansys2_msgs/msg/detail/action_performer_status__struct.h"


// Include directives for member types
// Member `action`
// Member `specialized_arguments`
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__ActionPerformerStatus__init(message_memory);
}

void ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_fini_function(void * message_memory)
{
  plansys2_msgs__msg__ActionPerformerStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_member_array[4] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__ActionPerformerStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__ActionPerformerStatus, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "specialized_arguments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__ActionPerformerStatus, specialized_arguments),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__ActionPerformerStatus, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "ActionPerformerStatus",  // message name
  4,  // number of fields
  sizeof(plansys2_msgs__msg__ActionPerformerStatus),
  ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_member_array,  // message members
  ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_type_support_handle = {
  0,
  &ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, ActionPerformerStatus)() {
  if (!ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_type_support_handle.typesupport_identifier) {
    ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActionPerformerStatus__rosidl_typesupport_introspection_c__ActionPerformerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
