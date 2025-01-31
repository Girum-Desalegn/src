// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:msg/Plan.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/plan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "plansys2_msgs/msg/detail/plan__struct.hpp"

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
bool cdr_serialize(
  const plansys2_msgs::msg::PlanItem &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::PlanItem &);
size_t get_serialized_size(
  const plansys2_msgs::msg::PlanItem &,
  size_t current_alignment);
size_t
max_serialized_size_PlanItem(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
cdr_serialize(
  const plansys2_msgs::msg::Plan & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: items
  {
    size_t size = ros_message.items.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.items[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  plansys2_msgs::msg::Plan & ros_message)
{
  // Member: items
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.items.resize(size);
    for (size_t i = 0; i < size; i++) {
      plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.items[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
get_serialized_size(
  const plansys2_msgs::msg::Plan & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: items
  {
    size_t array_size = ros_message.items.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.items[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
max_serialized_size_Plan(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: items
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PlanItem(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Plan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const plansys2_msgs::msg::Plan *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Plan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<plansys2_msgs::msg::Plan *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Plan__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const plansys2_msgs::msg::Plan *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Plan__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Plan(full_bounded, 0);
}

static message_type_support_callbacks_t _Plan__callbacks = {
  "plansys2_msgs::msg",
  "Plan",
  _Plan__cdr_serialize,
  _Plan__cdr_deserialize,
  _Plan__get_serialized_size,
  _Plan__max_serialized_size
};

static rosidl_message_type_support_t _Plan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Plan__callbacks,
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
get_message_type_support_handle<plansys2_msgs::msg::Plan>()
{
  return &plansys2_msgs::msg::typesupport_fastrtps_cpp::_Plan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plansys2_msgs, msg, Plan)() {
  return &plansys2_msgs::msg::typesupport_fastrtps_cpp::_Plan__handle;
}

#ifdef __cplusplus
}
#endif
