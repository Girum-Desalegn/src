// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cascade_lifecycle_msgs:msg/Activation.idl
// generated code does not contain a copyright notice
#include "cascade_lifecycle_msgs/msg/detail/activation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cascade_lifecycle_msgs/msg/detail/activation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cascade_lifecycle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cascade_lifecycle_msgs
cdr_serialize(
  const cascade_lifecycle_msgs::msg::Activation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: operation_type
  cdr << ros_message.operation_type;
  // Member: activator
  cdr << ros_message.activator;
  // Member: activation
  cdr << ros_message.activation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cascade_lifecycle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cascade_lifecycle_msgs::msg::Activation & ros_message)
{
  // Member: operation_type
  cdr >> ros_message.operation_type;

  // Member: activator
  cdr >> ros_message.activator;

  // Member: activation
  cdr >> ros_message.activation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cascade_lifecycle_msgs
get_serialized_size(
  const cascade_lifecycle_msgs::msg::Activation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: operation_type
  {
    size_t item_size = sizeof(ros_message.operation_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: activator
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.activator.size() + 1);
  // Member: activation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.activation.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cascade_lifecycle_msgs
max_serialized_size_Activation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: operation_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: activator
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: activation
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

static bool _Activation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cascade_lifecycle_msgs::msg::Activation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Activation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cascade_lifecycle_msgs::msg::Activation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Activation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cascade_lifecycle_msgs::msg::Activation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Activation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Activation(full_bounded, 0);
}

static message_type_support_callbacks_t _Activation__callbacks = {
  "cascade_lifecycle_msgs::msg",
  "Activation",
  _Activation__cdr_serialize,
  _Activation__cdr_deserialize,
  _Activation__get_serialized_size,
  _Activation__max_serialized_size
};

static rosidl_message_type_support_t _Activation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Activation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cascade_lifecycle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cascade_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cascade_lifecycle_msgs::msg::Activation>()
{
  return &cascade_lifecycle_msgs::msg::typesupport_fastrtps_cpp::_Activation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cascade_lifecycle_msgs, msg, Activation)() {
  return &cascade_lifecycle_msgs::msg::typesupport_fastrtps_cpp::_Activation__handle;
}

#ifdef __cplusplus
}
#endif
