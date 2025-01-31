// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:srv/GetNodeDetails.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/get_node_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/detail/get_node_details__struct.h"
#include "plansys2_msgs/srv/detail/get_node_details__functions.h"
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

#include "rosidl_runtime_c/string.h"  // expression
#include "rosidl_runtime_c/string_functions.h"  // expression

// forward declare type support functions


using _GetNodeDetails_Request__ros_msg_type = plansys2_msgs__srv__GetNodeDetails_Request;

static bool _GetNodeDetails_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNodeDetails_Request__ros_msg_type * ros_message = static_cast<const _GetNodeDetails_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: expression
  {
    const rosidl_runtime_c__String * str = &ros_message->expression;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetNodeDetails_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNodeDetails_Request__ros_msg_type * ros_message = static_cast<_GetNodeDetails_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: expression
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->expression.data) {
      rosidl_runtime_c__String__init(&ros_message->expression);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->expression,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'expression'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__GetNodeDetails_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodeDetails_Request__ros_msg_type * ros_message = static_cast<const _GetNodeDetails_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name expression
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->expression.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetNodeDetails_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__GetNodeDetails_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__GetNodeDetails_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: expression
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetNodeDetails_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__GetNodeDetails_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetNodeDetails_Request = {
  "plansys2_msgs::srv",
  "GetNodeDetails_Request",
  _GetNodeDetails_Request__cdr_serialize,
  _GetNodeDetails_Request__cdr_deserialize,
  _GetNodeDetails_Request__get_serialized_size,
  _GetNodeDetails_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetNodeDetails_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodeDetails_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetNodeDetails_Request)() {
  return &_GetNodeDetails_Request__type_support;
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
// #include "plansys2_msgs/srv/detail/get_node_details__struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_node_details__functions.h"
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

#include "plansys2_msgs/msg/detail/node__functions.h"  // node
// already included above
// #include "rosidl_runtime_c/string.h"  // error_info
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_info

// forward declare type support functions
size_t get_serialized_size_plansys2_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_plansys2_msgs__msg__Node(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Node)();


using _GetNodeDetails_Response__ros_msg_type = plansys2_msgs__srv__GetNodeDetails_Response;

static bool _GetNodeDetails_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNodeDetails_Response__ros_msg_type * ros_message = static_cast<const _GetNodeDetails_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

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

  // Field name: error_info
  {
    const rosidl_runtime_c__String * str = &ros_message->error_info;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetNodeDetails_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNodeDetails_Response__ros_msg_type * ros_message = static_cast<_GetNodeDetails_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

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

  // Field name: error_info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_info.data) {
      rosidl_runtime_c__String__init(&ros_message->error_info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_info'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__GetNodeDetails_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodeDetails_Response__ros_msg_type * ros_message = static_cast<const _GetNodeDetails_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name node

  current_alignment += get_serialized_size_plansys2_msgs__msg__Node(
    &(ros_message->node), current_alignment);
  // field.name error_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetNodeDetails_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__GetNodeDetails_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__GetNodeDetails_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: node
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Node(
        full_bounded, current_alignment);
    }
  }
  // member: error_info
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetNodeDetails_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__GetNodeDetails_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetNodeDetails_Response = {
  "plansys2_msgs::srv",
  "GetNodeDetails_Response",
  _GetNodeDetails_Response__cdr_serialize,
  _GetNodeDetails_Response__cdr_deserialize,
  _GetNodeDetails_Response__get_serialized_size,
  _GetNodeDetails_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetNodeDetails_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodeDetails_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetNodeDetails_Response)() {
  return &_GetNodeDetails_Response__type_support;
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
#include "plansys2_msgs/srv/get_node_details.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetNodeDetails__callbacks = {
  "plansys2_msgs::srv",
  "GetNodeDetails",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetNodeDetails_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetNodeDetails_Response)(),
};

static rosidl_service_type_support_t GetNodeDetails__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetNodeDetails__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetNodeDetails)() {
  return &GetNodeDetails__handle;
}

#if defined(__cplusplus)
}
#endif
