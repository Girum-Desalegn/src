// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:msg/DurativeAction.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/durative_action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/msg/detail/durative_action__struct.h"
#include "plansys2_msgs/msg/detail/durative_action__functions.h"
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

#include "plansys2_msgs/msg/detail/param__functions.h"  // parameters
#include "plansys2_msgs/msg/detail/tree__functions.h"  // at_end_effects, at_end_requirements, at_start_effects, at_start_requirements, over_all_requirements
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions
size_t get_serialized_size_plansys2_msgs__msg__Param(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_plansys2_msgs__msg__Param(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Param)();
size_t get_serialized_size_plansys2_msgs__msg__Tree(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_plansys2_msgs__msg__Tree(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree)();


using _DurativeAction__ros_msg_type = plansys2_msgs__msg__DurativeAction;

static bool _DurativeAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DurativeAction__ros_msg_type * ros_message = static_cast<const _DurativeAction__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Param
      )()->data);
    size_t size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: at_start_requirements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->at_start_requirements, cdr))
    {
      return false;
    }
  }

  // Field name: over_all_requirements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->over_all_requirements, cdr))
    {
      return false;
    }
  }

  // Field name: at_end_requirements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->at_end_requirements, cdr))
    {
      return false;
    }
  }

  // Field name: at_start_effects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->at_start_effects, cdr))
    {
      return false;
    }
  }

  // Field name: at_end_effects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->at_end_effects, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DurativeAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DurativeAction__ros_msg_type * ros_message = static_cast<_DurativeAction__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Param
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parameters.data) {
      plansys2_msgs__msg__Param__Sequence__fini(&ros_message->parameters);
    }
    if (!plansys2_msgs__msg__Param__Sequence__init(&ros_message->parameters, size)) {
      return "failed to create array for field 'parameters'";
    }
    auto array_ptr = ros_message->parameters.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: at_start_requirements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->at_start_requirements))
    {
      return false;
    }
  }

  // Field name: over_all_requirements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->over_all_requirements))
    {
      return false;
    }
  }

  // Field name: at_end_requirements
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->at_end_requirements))
    {
      return false;
    }
  }

  // Field name: at_start_effects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->at_start_effects))
    {
      return false;
    }
  }

  // Field name: at_end_effects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Tree
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->at_end_effects))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__msg__DurativeAction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DurativeAction__ros_msg_type * ros_message = static_cast<const _DurativeAction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name parameters
  {
    size_t array_size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_plansys2_msgs__msg__Param(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name at_start_requirements

  current_alignment += get_serialized_size_plansys2_msgs__msg__Tree(
    &(ros_message->at_start_requirements), current_alignment);
  // field.name over_all_requirements

  current_alignment += get_serialized_size_plansys2_msgs__msg__Tree(
    &(ros_message->over_all_requirements), current_alignment);
  // field.name at_end_requirements

  current_alignment += get_serialized_size_plansys2_msgs__msg__Tree(
    &(ros_message->at_end_requirements), current_alignment);
  // field.name at_start_effects

  current_alignment += get_serialized_size_plansys2_msgs__msg__Tree(
    &(ros_message->at_start_effects), current_alignment);
  // field.name at_end_effects

  current_alignment += get_serialized_size_plansys2_msgs__msg__Tree(
    &(ros_message->at_end_effects), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DurativeAction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__msg__DurativeAction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__msg__DurativeAction(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: parameters
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Param(
        full_bounded, current_alignment);
    }
  }
  // member: at_start_requirements
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Tree(
        full_bounded, current_alignment);
    }
  }
  // member: over_all_requirements
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Tree(
        full_bounded, current_alignment);
    }
  }
  // member: at_end_requirements
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Tree(
        full_bounded, current_alignment);
    }
  }
  // member: at_start_effects
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Tree(
        full_bounded, current_alignment);
    }
  }
  // member: at_end_effects
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__Tree(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DurativeAction__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__msg__DurativeAction(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DurativeAction = {
  "plansys2_msgs::msg",
  "DurativeAction",
  _DurativeAction__cdr_serialize,
  _DurativeAction__cdr_deserialize,
  _DurativeAction__get_serialized_size,
  _DurativeAction__max_serialized_size
};

static rosidl_message_type_support_t _DurativeAction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DurativeAction,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, DurativeAction)() {
  return &_DurativeAction__type_support;
}

#if defined(__cplusplus)
}
#endif
