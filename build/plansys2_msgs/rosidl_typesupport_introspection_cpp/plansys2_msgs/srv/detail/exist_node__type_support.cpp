// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:srv/ExistNode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "plansys2_msgs/srv/detail/exist_node__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace plansys2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ExistNode_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) plansys2_msgs::srv::ExistNode_Request(_init);
}

void ExistNode_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<plansys2_msgs::srv::ExistNode_Request *>(message_memory);
  typed_message->~ExistNode_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExistNode_Request_message_member_array[1] = {
  {
    "node",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<plansys2_msgs::msg::Node>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::srv::ExistNode_Request, node),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExistNode_Request_message_members = {
  "plansys2_msgs::srv",  // message namespace
  "ExistNode_Request",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs::srv::ExistNode_Request),
  ExistNode_Request_message_member_array,  // message members
  ExistNode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExistNode_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExistNode_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExistNode_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace plansys2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::srv::ExistNode_Request>()
{
  return &::plansys2_msgs::srv::rosidl_typesupport_introspection_cpp::ExistNode_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, srv, ExistNode_Request)() {
  return &::plansys2_msgs::srv::rosidl_typesupport_introspection_cpp::ExistNode_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "plansys2_msgs/srv/detail/exist_node__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace plansys2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ExistNode_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) plansys2_msgs::srv::ExistNode_Response(_init);
}

void ExistNode_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<plansys2_msgs::srv::ExistNode_Response *>(message_memory);
  typed_message->~ExistNode_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExistNode_Response_message_member_array[1] = {
  {
    "exist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs::srv::ExistNode_Response, exist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExistNode_Response_message_members = {
  "plansys2_msgs::srv",  // message namespace
  "ExistNode_Response",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs::srv::ExistNode_Response),
  ExistNode_Response_message_member_array,  // message members
  ExistNode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExistNode_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExistNode_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExistNode_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace plansys2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::srv::ExistNode_Response>()
{
  return &::plansys2_msgs::srv::rosidl_typesupport_introspection_cpp::ExistNode_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, srv, ExistNode_Response)() {
  return &::plansys2_msgs::srv::rosidl_typesupport_introspection_cpp::ExistNode_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "plansys2_msgs/srv/detail/exist_node__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace plansys2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ExistNode_service_members = {
  "plansys2_msgs::srv",  // service namespace
  "ExistNode",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<plansys2_msgs::srv::ExistNode>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ExistNode_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExistNode_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace plansys2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<plansys2_msgs::srv::ExistNode>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::plansys2_msgs::srv::rosidl_typesupport_introspection_cpp::ExistNode_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::plansys2_msgs::srv::ExistNode_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::plansys2_msgs::srv::ExistNode_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, plansys2_msgs, srv, ExistNode)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<plansys2_msgs::srv::ExistNode>();
}

#ifdef __cplusplus
}
#endif
