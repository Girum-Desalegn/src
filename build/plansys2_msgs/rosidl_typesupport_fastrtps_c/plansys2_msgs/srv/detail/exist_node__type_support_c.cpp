// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:srv/ExistNode.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/exist_node__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/detail/exist_node__struct.h"
#include "plansys2_msgs/srv/detail/exist_node__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "plansys2_msgs/msg/detail/node__functions.h"  // node

// forward declare type support functions
size_t get_serialized_size_plansys2_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_plansys2_msgs__msg__Node(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Node)();


using _ExistNode_Request__ros_msg_type = plansys2_msgs__srv__ExistNode_Request;

static bool _ExistNode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExistNode_Request__ros_msg_type * ros_message = static_cast<const _ExistNode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Node
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->node, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ExistNode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExistNode_Request__ros_msg_type * ros_message = static_cast<_ExistNode_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Node
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->node))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__ExistNode_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExistNode_Request__ros_msg_type * ros_message = static_cast<const _ExistNode_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node

  current_alignment += get_serialized_size_plansys2_msgs__msg__Node(
    &(ros_message->node), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ExistNode_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__ExistNode_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__ExistNode_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: node
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Node(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ExistNode_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__ExistNode_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ExistNode_Request = {
  "plansys2_msgs::srv",
  "ExistNode_Request",
  _ExistNode_Request__cdr_serialize,
  _ExistNode_Request__cdr_deserialize,
  _ExistNode_Request__get_serialized_size,
  _ExistNode_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExistNode_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExistNode_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, ExistNode_Request)() {
  return &_ExistNode_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "plansys2_msgs/srv/detail/exist_node__struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/exist_node__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ExistNode_Response__ros_msg_type = plansys2_msgs__srv__ExistNode_Response;

static bool _ExistNode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExistNode_Response__ros_msg_type * ros_message = static_cast<const _ExistNode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exist
  {
    cdr << (ros_message->exist ? true : false);
  }

  return true;
}

static bool _ExistNode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExistNode_Response__ros_msg_type * ros_message = static_cast<_ExistNode_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exist
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->exist = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__ExistNode_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExistNode_Response__ros_msg_type * ros_message = static_cast<const _ExistNode_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name exist
  {
    size_t item_size = sizeof(ros_message->exist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ExistNode_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__ExistNode_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__ExistNode_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: exist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ExistNode_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__ExistNode_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ExistNode_Response = {
  "plansys2_msgs::srv",
  "ExistNode_Response",
  _ExistNode_Response__cdr_serialize,
  _ExistNode_Response__cdr_deserialize,
  _ExistNode_Response__get_serialized_size,
  _ExistNode_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExistNode_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExistNode_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, ExistNode_Response)() {
  return &_ExistNode_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/exist_node.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ExistNode__callbacks = {
  "plansys2_msgs::srv",
  "ExistNode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, ExistNode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, ExistNode_Response)(),
};

static rosidl_service_type_support_t ExistNode__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ExistNode__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, ExistNode)() {
  return &ExistNode__handle;
}

#if defined(__cplusplus)
}
#endif
