// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/durative_action__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/durative_action__functions.h"
#include "plansys2_msgs/msg/detail/durative_action__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `parameters`
#include "plansys2_msgs/msg/param.h"
// Member `parameters`
#include "plansys2_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"
// Member `at_start_requirements`
// Member `over_all_requirements`
// Member `at_end_requirements`
// Member `at_start_effects`
// Member `at_end_effects`
#include "plansys2_msgs/msg/tree.h"
// Member `at_start_requirements`
// Member `over_all_requirements`
// Member `at_end_requirements`
// Member `at_start_effects`
// Member `at_end_effects`
#include "plansys2_msgs/msg/detail/tree__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__DurativeAction__init(message_memory);
}

void DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_fini_function(void * message_memory)
{
  plansys2_msgs__msg__DurativeAction__fini(message_memory);
}

size_t DurativeAction__rosidl_typesupport_introspection_c__size_function__Param__parameters(
  const void * untyped_member)
{
  const plansys2_msgs__msg__Param__Sequence * member =
    (const plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  return member->size;
}

const void * DurativeAction__rosidl_typesupport_introspection_c__get_const_function__Param__parameters(
  const void * untyped_member, size_t index)
{
  const plansys2_msgs__msg__Param__Sequence * member =
    (const plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DurativeAction__rosidl_typesupport_introspection_c__get_function__Param__parameters(
  void * untyped_member, size_t index)
{
  plansys2_msgs__msg__Param__Sequence * member =
    (plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DurativeAction__rosidl_typesupport_introspection_c__resize_function__Param__parameters(
  void * untyped_member, size_t size)
{
  plansys2_msgs__msg__Param__Sequence * member =
    (plansys2_msgs__msg__Param__Sequence *)(untyped_member);
  plansys2_msgs__msg__Param__Sequence__fini(member);
  return plansys2_msgs__msg__Param__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, parameters),  // bytes offset in struct
    NULL,  // default value
    DurativeAction__rosidl_typesupport_introspection_c__size_function__Param__parameters,  // size() function pointer
    DurativeAction__rosidl_typesupport_introspection_c__get_const_function__Param__parameters,  // get_const(index) function pointer
    DurativeAction__rosidl_typesupport_introspection_c__get_function__Param__parameters,  // get(index) function pointer
    DurativeAction__rosidl_typesupport_introspection_c__resize_function__Param__parameters  // resize(index) function pointer
  },
  {
    "at_start_requirements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, at_start_requirements),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "over_all_requirements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, over_all_requirements),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "at_end_requirements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, at_end_requirements),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "at_start_effects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, at_start_effects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "at_end_effects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__DurativeAction, at_end_effects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "DurativeAction",  // message name
  7,  // number of fields
  sizeof(plansys2_msgs__msg__DurativeAction),
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array,  // message members
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_init_function,  // function to initialize message memory (memory has to be allocated)
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_type_support_handle = {
  0,
  &DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, DurativeAction)() {
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Param)();
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Tree)();
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Tree)();
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Tree)();
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Tree)();
  DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Tree)();
  if (!DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_type_support_handle.typesupport_identifier) {
    DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DurativeAction__rosidl_typesupport_introspection_c__DurativeAction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
