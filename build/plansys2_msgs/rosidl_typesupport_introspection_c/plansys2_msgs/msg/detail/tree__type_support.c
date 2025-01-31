// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:msg/Tree.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/msg/detail/tree__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/msg/detail/tree__functions.h"
#include "plansys2_msgs/msg/detail/tree__struct.h"


// Include directives for member types
// Member `nodes`
#include "plansys2_msgs/msg/node.h"
// Member `nodes`
#include "plansys2_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Tree__rosidl_typesupport_introspection_c__Tree_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__msg__Tree__init(message_memory);
}

void Tree__rosidl_typesupport_introspection_c__Tree_fini_function(void * message_memory)
{
  plansys2_msgs__msg__Tree__fini(message_memory);
}

size_t Tree__rosidl_typesupport_introspection_c__size_function__Node__nodes(
  const void * untyped_member)
{
  const plansys2_msgs__msg__Node__Sequence * member =
    (const plansys2_msgs__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * Tree__rosidl_typesupport_introspection_c__get_const_function__Node__nodes(
  const void * untyped_member, size_t index)
{
  const plansys2_msgs__msg__Node__Sequence * member =
    (const plansys2_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Tree__rosidl_typesupport_introspection_c__get_function__Node__nodes(
  void * untyped_member, size_t index)
{
  plansys2_msgs__msg__Node__Sequence * member =
    (plansys2_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Tree__rosidl_typesupport_introspection_c__resize_function__Node__nodes(
  void * untyped_member, size_t size)
{
  plansys2_msgs__msg__Node__Sequence * member =
    (plansys2_msgs__msg__Node__Sequence *)(untyped_member);
  plansys2_msgs__msg__Node__Sequence__fini(member);
  return plansys2_msgs__msg__Node__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Tree__rosidl_typesupport_introspection_c__Tree_message_member_array[1] = {
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__msg__Tree, nodes),  // bytes offset in struct
    NULL,  // default value
    Tree__rosidl_typesupport_introspection_c__size_function__Node__nodes,  // size() function pointer
    Tree__rosidl_typesupport_introspection_c__get_const_function__Node__nodes,  // get_const(index) function pointer
    Tree__rosidl_typesupport_introspection_c__get_function__Node__nodes,  // get(index) function pointer
    Tree__rosidl_typesupport_introspection_c__resize_function__Node__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tree__rosidl_typesupport_introspection_c__Tree_message_members = {
  "plansys2_msgs__msg",  // message namespace
  "Tree",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs__msg__Tree),
  Tree__rosidl_typesupport_introspection_c__Tree_message_member_array,  // message members
  Tree__rosidl_typesupport_introspection_c__Tree_init_function,  // function to initialize message memory (memory has to be allocated)
  Tree__rosidl_typesupport_introspection_c__Tree_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle = {
  0,
  &Tree__rosidl_typesupport_introspection_c__Tree_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Tree)() {
  Tree__rosidl_typesupport_introspection_c__Tree_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Node)();
  if (!Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle.typesupport_identifier) {
    Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
