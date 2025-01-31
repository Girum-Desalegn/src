// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cascade_lifecycle_msgs:msg/Activation.idl
// generated code does not contain a copyright notice
#include "cascade_lifecycle_msgs/msg/detail/activation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cascade_lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cascade_lifecycle_msgs/msg/detail/activation__struct.h"
#include "cascade_lifecycle_msgs/msg/detail/activation__functions.h"
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

#include "rosidl_runtime_c/string.h"  // activation, activator
#include "rosidl_runtime_c/string_functions.h"  // activation, activator

// forward declare type support functions


using _Activation__ros_msg_type = cascade_lifecycle_msgs__msg__Activation;

static bool _Activation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Activation__ros_msg_type * ros_message = static_cast<const _Activation__ros_msg_type *>(untyped_ros_message);
  // Field name: operation_type
  {
    cdr << ros_message->operation_type;
  }

  // Field name: activator
  {
    const rosidl_runtime_c__String * str = &ros_message->activator;
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

  // Field name: activation
  {
    const rosidl_runtime_c__String * str = &ros_message->activation;
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

static bool _Activation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Activation__ros_msg_type * ros_message = static_cast<_Activation__ros_msg_type *>(untyped_ros_message);
  // Field name: operation_type
  {
    cdr >> ros_message->operation_type;
  }

  // Field name: activator
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->activator.data) {
      rosidl_runtime_c__String__init(&ros_message->activator);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->activator,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'activator'\n");
      return false;
    }
  }

  // Field name: activation
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->activation.data) {
      rosidl_runtime_c__String__init(&ros_message->activation);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->activation,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'activation'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cascade_lifecycle_msgs
size_t get_serialized_size_cascade_lifecycle_msgs__msg__Activation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Activation__ros_msg_type * ros_message = static_cast<const _Activation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name operation_type
  {
    size_t item_size = sizeof(ros_message->operation_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name activator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->activator.size + 1);
  // field.name activation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->activation.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Activation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cascade_lifecycle_msgs__msg__Activation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cascade_lifecycle_msgs
size_t max_serialized_size_cascade_lifecycle_msgs__msg__Activation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: operation_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: activator
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: activation
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

static size_t _Activation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cascade_lifecycle_msgs__msg__Activation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Activation = {
  "cascade_lifecycle_msgs::msg",
  "Activation",
  _Activation__cdr_serialize,
  _Activation__cdr_deserialize,
  _Activation__get_serialized_size,
  _Activation__max_serialized_size
};

static rosidl_message_type_support_t _Activation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Activation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cascade_lifecycle_msgs, msg, Activation)() {
  return &_Activation__type_support;
}

#if defined(__cplusplus)
}
#endif
