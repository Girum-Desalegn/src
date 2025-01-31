// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/msg/detail/knowledge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/msg/detail/knowledge__struct.h"
#include "plansys2_msgs/msg/detail/knowledge__functions.h"
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

#include "rosidl_runtime_c/string.h"  // functions, goal, instances, predicates
#include "rosidl_runtime_c/string_functions.h"  // functions, goal, instances, predicates

// forward declare type support functions


using _Knowledge__ros_msg_type = plansys2_msgs__msg__Knowledge;

static bool _Knowledge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Knowledge__ros_msg_type * ros_message = static_cast<const _Knowledge__ros_msg_type *>(untyped_ros_message);
  // Field name: instances
  {
    size_t size = ros_message->instances.size;
    auto array_ptr = ros_message->instances.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: predicates
  {
    size_t size = ros_message->predicates.size;
    auto array_ptr = ros_message->predicates.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: functions
  {
    size_t size = ros_message->functions.size;
    auto array_ptr = ros_message->functions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: goal
  {
    const rosidl_runtime_c__String * str = &ros_message->goal;
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

static bool _Knowledge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Knowledge__ros_msg_type * ros_message = static_cast<_Knowledge__ros_msg_type *>(untyped_ros_message);
  // Field name: instances
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->instances.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->instances);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->instances, size)) {
      return "failed to create array for field 'instances'";
    }
    auto array_ptr = ros_message->instances.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'instances'\n");
        return false;
      }
    }
  }

  // Field name: predicates
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicates.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->predicates);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->predicates, size)) {
      return "failed to create array for field 'predicates'";
    }
    auto array_ptr = ros_message->predicates.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'predicates'\n");
        return false;
      }
    }
  }

  // Field name: functions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->functions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->functions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->functions, size)) {
      return "failed to create array for field 'functions'";
    }
    auto array_ptr = ros_message->functions.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'functions'\n");
        return false;
      }
    }
  }

  // Field name: goal
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->goal.data) {
      rosidl_runtime_c__String__init(&ros_message->goal);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->goal,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'goal'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__msg__Knowledge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Knowledge__ros_msg_type * ros_message = static_cast<const _Knowledge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name instances
  {
    size_t array_size = ros_message->instances.size;
    auto array_ptr = ros_message->instances.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name predicates
  {
    size_t array_size = ros_message->predicates.size;
    auto array_ptr = ros_message->predicates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name functions
  {
    size_t array_size = ros_message->functions.size;
    auto array_ptr = ros_message->functions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name goal
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->goal.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Knowledge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__msg__Knowledge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__msg__Knowledge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: instances
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
  // member: predicates
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
  // member: functions
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
  // member: goal
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

static size_t _Knowledge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__msg__Knowledge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Knowledge = {
  "plansys2_msgs::msg",
  "Knowledge",
  _Knowledge__cdr_serialize,
  _Knowledge__cdr_deserialize,
  _Knowledge__get_serialized_size,
  _Knowledge__max_serialized_size
};

static rosidl_message_type_support_t _Knowledge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Knowledge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, Knowledge)() {
  return &_Knowledge__type_support;
}

#if defined(__cplusplus)
}
#endif
