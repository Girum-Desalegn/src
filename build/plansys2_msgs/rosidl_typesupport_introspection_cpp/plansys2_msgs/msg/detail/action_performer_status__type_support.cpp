// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:msg/ActionPerformerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "plansys2_msgs/msg/detail/action_performer_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace plansys2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionPerformerStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) plansys2_msgs::msg::ActionPerformerStatus(_init);
}

void ActionPerformerStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<plansys2_msgs::msg::ActionPerformerStatus *>(message_memory);
  typed_message->~ActionPerformerStatus();
}

size_t size_function__ActionPerformerStatus__specialized_arguments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionPerformerStatus__specialized_arguments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionPerformerStatus__specialized_arguments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ActionPerformerStatus__specialized_arguments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionPerformerStatus_message_member_array[4] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::ActionPerformerStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::ActionPerformerStatus, action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "specialized_arguments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::ActionPerformerStatus, specialized_arguments),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionPerformerStatus__specialized_arguments,  // size() function pointer
    get_const_function__ActionPerformerStatus__specialized_arguments,  // get_const(index) function pointer
    get_function__ActionPerformerStatus__specialized_arguments,  // get(index) function pointer
    resize_function__ActionPerformerStatus__specialized_arguments  // resize(index) function pointer
  },
  {
    "node_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::ActionPerformerStatus, node_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionPerformerStatus_message_members = {
  "plansys2_msgs::msg",  // message namespace
  "ActionPerformerStatus",  // message name
  4,  // number of fields
  sizeof(plansys2_msgs::msg::ActionPerformerStatus),
  ActionPerformerStatus_message_member_array,  // message members
  ActionPerformerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionPerformerStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionPerformerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionPerformerStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace plansys2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::msg::ActionPerformerStatus>()
{
  return &::plansys2_msgs::msg::rosidl_typesupport_introspection_cpp::ActionPerformerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, msg, ActionPerformerStatus)() {
  return &::plansys2_msgs::msg::rosidl_typesupport_introspection_cpp::ActionPerformerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
