// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "plansys2_msgs/msg/detail/durative_action__struct.hpp"
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

void DurativeAction_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) plansys2_msgs::msg::DurativeAction(_init);
}

void DurativeAction_fini_function(void * message_memory)
{
  auto typed_message = static_cast<plansys2_msgs::msg::DurativeAction *>(message_memory);
  typed_message->~DurativeAction();
}

size_t size_function__DurativeAction__parameters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DurativeAction__parameters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void * get_function__DurativeAction__parameters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  return &member[index];
}

void resize_function__DurativeAction__parameters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<plansys2_msgs::msg::Param> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DurativeAction_message_member_array[7] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Param>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, parameters),  // bytes offset in struct
    nullptr,  // default value
    size_function__DurativeAction__parameters,  // size() function pointer
    get_const_function__DurativeAction__parameters,  // get_const(index) function pointer
    get_function__DurativeAction__parameters,  // get(index) function pointer
    resize_function__DurativeAction__parameters  // resize(index) function pointer
  },
  {
    "at_start_requirements",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, at_start_requirements),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "over_all_requirements",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, over_all_requirements),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "at_end_requirements",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, at_end_requirements),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "at_start_effects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, at_start_effects),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "at_end_effects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::msg::DurativeAction, at_end_effects),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DurativeAction_message_members = {
  "plansys2_msgs::msg",  // message namespace
  "DurativeAction",  // message name
  7,  // number of fields
  sizeof(plansys2_msgs::msg::DurativeAction),
  DurativeAction_message_member_array,  // message members
  DurativeAction_init_function,  // function to initialize message memory (memory has to be allocated)
  DurativeAction_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DurativeAction_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DurativeAction_message_members,
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
get_message_type_support_handle<plansys2_msgs::msg::DurativeAction>()
{
  return &::plansys2_msgs::msg::rosidl_typesupport_introspection_cpp::DurativeAction_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, msg, DurativeAction)() {
  return &::plansys2_msgs::msg::rosidl_typesupport_introspection_cpp::DurativeAction_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
