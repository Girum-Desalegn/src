// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:msg/Plan.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/plan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/msg/detail/plan__struct.h"
#include "plansys2_msgs/msg/detail/plan__functions.h"
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

#include "plansys2_msgs/msg/detail/plan_item__functions.h"  // items

// forward declare type support functions
size_t get_serialized_size_plansys2_msgs__msg__PlanItem(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_plansys2_msgs__msg__PlanItem(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, PlanItem)();


using _Plan__ros_msg_type = plansys2_msgs__msg__Plan;

static bool _Plan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Plan__ros_msg_type * ros_message = static_cast<const _Plan__ros_msg_type *>(untyped_ros_message);
  // Field name: items
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, PlanItem
      )()->data);
    size_t size = ros_message->items.size;
    auto array_ptr = ros_message->items.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Plan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Plan__ros_msg_type * ros_message = static_cast<_Plan__ros_msg_type *>(untyped_ros_message);
  // Field name: items
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, PlanItem
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->items.data) {
      plansys2_msgs__msg__PlanItem__Sequence__fini(&ros_message->items);
    }
    if (!plansys2_msgs__msg__PlanItem__Sequence__init(&ros_message->items, size)) {
      return "failed to create array for field 'items'";
    }
    auto array_ptr = ros_message->items.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__msg__Plan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Plan__ros_msg_type * ros_message = static_cast<const _Plan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name items
  {
    size_t array_size = ros_message->items.size;
    auto array_ptr = ros_message->items.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_plansys2_msgs__msg__PlanItem(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Plan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__msg__Plan(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__msg__Plan(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: items
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__PlanItem(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Plan__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__msg__Plan(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Plan = {
  "plansys2_msgs::msg",
  "Plan",
  _Plan__cdr_serialize,
  _Plan__cdr_deserialize,
  _Plan__get_serialized_size,
  _Plan__max_serialized_size
};

static rosidl_message_type_support_t _Plan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Plan,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Plan)() {
  return &_Plan__type_support;
}

#if defined(__cplusplus)
}
#endif
