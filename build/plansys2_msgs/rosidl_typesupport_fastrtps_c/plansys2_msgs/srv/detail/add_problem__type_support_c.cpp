// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:srv/AddProblem.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/add_problem__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/detail/add_problem__struct.h"
#include "plansys2_msgs/srv/detail/add_problem__functions.h"
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

#include "rosidl_runtime_c/string.h"  // problem
#include "rosidl_runtime_c/string_functions.h"  // problem

// forward declare type support functions


using _AddProblem_Request__ros_msg_type = plansys2_msgs__srv__AddProblem_Request;

static bool _AddProblem_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddProblem_Request__ros_msg_type * ros_message = static_cast<const _AddProblem_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: problem
  {
    const rosidl_runtime_c__String * str = &ros_message->problem;
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

static bool _AddProblem_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddProblem_Request__ros_msg_type * ros_message = static_cast<_AddProblem_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: problem
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->problem.data) {
      rosidl_runtime_c__String__init(&ros_message->problem);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->problem,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'problem'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__AddProblem_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddProblem_Request__ros_msg_type * ros_message = static_cast<const _AddProblem_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name problem
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->problem.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AddProblem_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__AddProblem_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__AddProblem_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: problem
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

static size_t _AddProblem_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__AddProblem_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddProblem_Request = {
  "plansys2_msgs::srv",
  "AddProblem_Request",
  _AddProblem_Request__cdr_serialize,
  _AddProblem_Request__cdr_deserialize,
  _AddProblem_Request__get_serialized_size,
  _AddProblem_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddProblem_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddProblem_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, AddProblem_Request)() {
  return &_AddProblem_Request__type_support;
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
// #include "plansys2_msgs/srv/detail/add_problem__struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/add_problem__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // error_info
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_info

// forward declare type support functions


using _AddProblem_Response__ros_msg_type = plansys2_msgs__srv__AddProblem_Response;

static bool _AddProblem_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddProblem_Response__ros_msg_type * ros_message = static_cast<const _AddProblem_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
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

static bool _AddProblem_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddProblem_Response__ros_msg_type * ros_message = static_cast<_AddProblem_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
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
size_t get_serialized_size_plansys2_msgs__srv__AddProblem_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddProblem_Response__ros_msg_type * ros_message = static_cast<const _AddProblem_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name error_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AddProblem_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__AddProblem_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__AddProblem_Response(
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

static size_t _AddProblem_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__AddProblem_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddProblem_Response = {
  "plansys2_msgs::srv",
  "AddProblem_Response",
  _AddProblem_Response__cdr_serialize,
  _AddProblem_Response__cdr_deserialize,
  _AddProblem_Response__get_serialized_size,
  _AddProblem_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddProblem_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddProblem_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, AddProblem_Response)() {
  return &_AddProblem_Response__type_support;
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
#include "plansys2_msgs/srv/add_problem.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddProblem__callbacks = {
  "plansys2_msgs::srv",
  "AddProblem",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, AddProblem_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, AddProblem_Response)(),
};

static rosidl_service_type_support_t AddProblem__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AddProblem__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, AddProblem)() {
  return &AddProblem__handle;
}

#if defined(__cplusplus)
}
#endif
