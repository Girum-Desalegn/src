// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/durative_action__rosidl_typesupport_fastrtps_cpp.hpp"
#include "plansys2_msgs/msg/detail/durative_action__struct.hpp"

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
  const plansys2_msgs::msg::Param &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::Param &);
size_t get_serialized_size(
  const plansys2_msgs::msg::Param &,
  size_t current_alignment);
size_t
max_serialized_size_Param(
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
bool cdr_serialize(
  const plansys2_msgs::msg::Tree &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::Tree &);
size_t get_serialized_size(
  const plansys2_msgs::msg::Tree &,
  size_t current_alignment);
size_t
max_serialized_size_Tree(
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
bool cdr_serialize(
  const plansys2_msgs::msg::Tree &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::Tree &);
size_t get_serialized_size(
  const plansys2_msgs::msg::Tree &,
  size_t current_alignment);
size_t
max_serialized_size_Tree(
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
bool cdr_serialize(
  const plansys2_msgs::msg::Tree &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::Tree &);
size_t get_serialized_size(
  const plansys2_msgs::msg::Tree &,
  size_t current_alignment);
size_t
max_serialized_size_Tree(
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
bool cdr_serialize(
  const plansys2_msgs::msg::Tree &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::Tree &);
size_t get_serialized_size(
  const plansys2_msgs::msg::Tree &,
  size_t current_alignment);
size_t
max_serialized_size_Tree(
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
bool cdr_serialize(
  const plansys2_msgs::msg::Tree &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  plansys2_msgs::msg::Tree &);
size_t get_serialized_size(
  const plansys2_msgs::msg::Tree &,
  size_t current_alignment);
size_t
max_serialized_size_Tree(
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
  const plansys2_msgs::msg::DurativeAction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: parameters
  {
    size_t size = ros_message.parameters.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.parameters[i],
        cdr);
    }
  }
  // Member: at_start_requirements
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.at_start_requirements,
    cdr);
  // Member: over_all_requirements
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.over_all_requirements,
    cdr);
  // Member: at_end_requirements
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.at_end_requirements,
    cdr);
  // Member: at_start_effects
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.at_start_effects,
    cdr);
  // Member: at_end_effects
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.at_end_effects,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  plansys2_msgs::msg::DurativeAction & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.parameters.resize(size);
    for (size_t i = 0; i < size; i++) {
      plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.parameters[i]);
    }
  }

  // Member: at_start_requirements
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.at_start_requirements);

  // Member: over_all_requirements
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.over_all_requirements);

  // Member: at_end_requirements
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.at_end_requirements);

  // Member: at_start_effects
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.at_start_effects);

  // Member: at_end_effects
  plansys2_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.at_end_effects);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
get_serialized_size(
  const plansys2_msgs::msg::DurativeAction & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: parameters
  {
    size_t array_size = ros_message.parameters.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.parameters[index], current_alignment);
    }
  }
  // Member: at_start_requirements

  current_alignment +=
    plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.at_start_requirements, current_alignment);
  // Member: over_all_requirements

  current_alignment +=
    plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.over_all_requirements, current_alignment);
  // Member: at_end_requirements

  current_alignment +=
    plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.at_end_requirements, current_alignment);
  // Member: at_start_effects

  current_alignment +=
    plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.at_start_effects, current_alignment);
  // Member: at_end_effects

  current_alignment +=
    plansys2_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.at_end_effects, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plansys2_msgs
max_serialized_size_DurativeAction(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: parameters
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Param(
        full_bounded, current_alignment);
    }
  }

  // Member: at_start_requirements
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tree(
        full_bounded, current_alignment);
    }
  }

  // Member: over_all_requirements
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tree(
        full_bounded, current_alignment);
    }
  }

  // Member: at_end_requirements
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tree(
        full_bounded, current_alignment);
    }
  }

  // Member: at_start_effects
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tree(
        full_bounded, current_alignment);
    }
  }

  // Member: at_end_effects
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        plansys2_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tree(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DurativeAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const plansys2_msgs::msg::DurativeAction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DurativeAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<plansys2_msgs::msg::DurativeAction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DurativeAction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const plansys2_msgs::msg::DurativeAction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DurativeAction__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DurativeAction(full_bounded, 0);
}

static message_type_support_callbacks_t _DurativeAction__callbacks = {
  "plansys2_msgs::msg",
  "DurativeAction",
  _DurativeAction__cdr_serialize,
  _DurativeAction__cdr_deserialize,
  _DurativeAction__get_serialized_size,
  _DurativeAction__max_serialized_size
};

static rosidl_message_type_support_t _DurativeAction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DurativeAction__callbacks,
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
get_message_type_support_handle<plansys2_msgs::msg::DurativeAction>()
{
  return &plansys2_msgs::msg::typesupport_fastrtps_cpp::_DurativeAction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, plansys2_msgs, msg, DurativeAction)() {
  return &plansys2_msgs::msg::typesupport_fastrtps_cpp::_DurativeAction__handle;
}

#ifdef __cplusplus
}
#endif
