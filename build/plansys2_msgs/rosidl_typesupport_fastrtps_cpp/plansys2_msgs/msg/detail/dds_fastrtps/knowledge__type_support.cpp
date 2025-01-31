// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/knowledge__rosidl_typesupport_fastrtps_cpp.hpp"
#include "plansys2_msgs/msg/detail/knowledge__struct.hpp"

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

namespace plansys2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
cdr_serialize(
  const plansys2_msgs::msg::Knowledge & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: instances
  {
    cdr << ros_message.instances;
  }
  // Member: predicates
  {
    cdr << ros_message.predicates;
  }
  // Member: functions
  {
    cdr << ros_message.functions;
  }
  // Member: goal
  cdr << ros_message.goal;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  plansys2_msgs::msg::Knowledge & ros_message)
{
  // Member: instances
  {
    cdr >> ros_message.instances;
  }

  // Member: predicates
  {
    cdr >> ros_message.predicates;
  }

  // Member: functions
  {
    cdr >> ros_message.functions;
  }

  // Member: goal
  cdr >> ros_message.goal;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
get_serialized_size(
  const plansys2_msgs::msg::Knowledge & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: instances
  {
    size_t array_size = ros_message.instances.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.instances[index].size() + 1);
    }
  }
  // Member: predicates
  {
    size_t array_size = ros_message.predicates.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.predicates[index].size() + 1);
    }
  }
  // Member: functions
  {
    size_t array_size = ros_message.functions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.functions[index].size() + 1);
    }
  }
  // Member: goal
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.goal.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
max_serialized_size_Knowledge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: instances
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: predicates
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: functions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: goal
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

static bool _Knowledge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const plansys2_msgs::msg::Knowledge *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Knowledge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<plansys2_msgs::msg::Knowledge *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Knowledge__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const plansys2_msgs::msg::Knowledge *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Knowledge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Knowledge(full_bounded, 0);
}

static message_type_support_callbacks_t _Knowledge__callbacks = {
  "plansys2_msgs::msg",
  "Knowledge",
  _Knowledge__cdr_serialize,
  _Knowledge__cdr_deserialize,
  _Knowledge__get_serialized_size,
  _Knowledge__max_serialized_size
};

static rosidl_message_type_support_t _Knowledge__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Knowledge__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace plansys2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<plansys2_msgs::msg::Knowledge>()
{
  return &plansys2_msgs::msg::typesupport_fastrtps_cpp::_Knowledge__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plansys2_msgs, msg, Knowledge)() {
  return &plansys2_msgs::msg::typesupport_fastrtps_cpp::_Knowledge__handle;
}

#ifdef __cplusplus
}
#endif
