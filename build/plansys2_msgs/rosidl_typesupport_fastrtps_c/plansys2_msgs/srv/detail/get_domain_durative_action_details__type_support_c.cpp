// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from plansys2_msgs:srv/GetDomainDurativeActionDetails.idl
// generated code does not contain a copyright notice
#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "plansys2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__struct.h"
#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__functions.h"
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

#include "rosidl_runtime_c/string.h"  // durative_action, parameters
#include "rosidl_runtime_c/string_functions.h"  // durative_action, parameters

// forward declare type support functions


using _GetDomainDurativeActionDetails_Request__ros_msg_type = plansys2_msgs__srv__GetDomainDurativeActionDetails_Request;

static bool _GetDomainDurativeActionDetails_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDomainDurativeActionDetails_Request__ros_msg_type * ros_message = static_cast<const _GetDomainDurativeActionDetails_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: durative_action
  {
    const rosidl_runtime_c__String * str = &ros_message->durative_action;
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
    size_t size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
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

  return true;
}

static bool _GetDomainDurativeActionDetails_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDomainDurativeActionDetails_Request__ros_msg_type * ros_message = static_cast<_GetDomainDurativeActionDetails_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: durative_action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->durative_action.data) {
      rosidl_runtime_c__String__init(&ros_message->durative_action);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->durative_action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'durative_action'\n");
      return false;
    }
  }

  // Field name: parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parameters.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->parameters);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->parameters, size)) {
      return "failed to create array for field 'parameters'";
    }
    auto array_ptr = ros_message->parameters.data;
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
        fprintf(stderr, "failed to assign string into field 'parameters'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t get_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDomainDurativeActionDetails_Request__ros_msg_type * ros_message = static_cast<const _GetDomainDurativeActionDetails_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name durative_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->durative_action.size + 1);
  // field.name parameters
  {
    size_t array_size = ros_message->parameters.size;
    auto array_ptr = ros_message->parameters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetDomainDurativeActionDetails_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: durative_action
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

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetDomainDurativeActionDetails_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDomainDurativeActionDetails_Request = {
  "plansys2_msgs::srv",
  "GetDomainDurativeActionDetails_Request",
  _GetDomainDurativeActionDetails_Request__cdr_serialize,
  _GetDomainDurativeActionDetails_Request__cdr_deserialize,
  _GetDomainDurativeActionDetails_Request__get_serialized_size,
  _GetDomainDurativeActionDetails_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDomainDurativeActionDetails_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDomainDurativeActionDetails_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Request)() {
  return &_GetDomainDurativeActionDetails_Request__type_support;
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
// #include "plansys2_msgs/srv/detail/get_domain_durative_action_details__struct.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_durative_action_details__functions.h"
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

#include "plansys2_msgs/msg/detail/durative_action__functions.h"  // durative_action
// already included above
// #include "rosidl_runtime_c/string.h"  // error_info
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_info

// forward declare type support functions
size_t get_serialized_size_plansys2_msgs__msg__DurativeAction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_plansys2_msgs__msg__DurativeAction(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, DurativeAction)();


using _GetDomainDurativeActionDetails_Response__ros_msg_type = plansys2_msgs__srv__GetDomainDurativeActionDetails_Response;

static bool _GetDomainDurativeActionDetails_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDomainDurativeActionDetails_Response__ros_msg_type * ros_message = static_cast<const _GetDomainDurativeActionDetails_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: durative_action
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, DurativeAction
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->durative_action, cdr))
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

static bool _GetDomainDurativeActionDetails_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDomainDurativeActionDetails_Response__ros_msg_type * ros_message = static_cast<_GetDomainDurativeActionDetails_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: durative_action
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, plansys2_msgs, msg, DurativeAction
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->durative_action))
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
size_t get_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDomainDurativeActionDetails_Response__ros_msg_type * ros_message = static_cast<const _GetDomainDurativeActionDetails_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name durative_action

  current_alignment += get_serialized_size_plansys2_msgs__msg__DurativeAction(
    &(ros_message->durative_action), current_alignment);
  // field.name error_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetDomainDurativeActionDetails_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_plansys2_msgs
size_t max_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Response(
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
  // member: durative_action
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_plansys2_msgs__msg__DurativeAction(
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

static size_t _GetDomainDurativeActionDetails_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_plansys2_msgs__srv__GetDomainDurativeActionDetails_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDomainDurativeActionDetails_Response = {
  "plansys2_msgs::srv",
  "GetDomainDurativeActionDetails_Response",
  _GetDomainDurativeActionDetails_Response__cdr_serialize,
  _GetDomainDurativeActionDetails_Response__cdr_deserialize,
  _GetDomainDurativeActionDetails_Response__get_serialized_size,
  _GetDomainDurativeActionDetails_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDomainDurativeActionDetails_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDomainDurativeActionDetails_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Response)() {
  return &_GetDomainDurativeActionDetails_Response__type_support;
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
#include "plansys2_msgs/srv/get_domain_durative_action_details.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetDomainDurativeActionDetails__callbacks = {
  "plansys2_msgs::srv",
  "GetDomainDurativeActionDetails",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Response)(),
};

static rosidl_service_type_support_t GetDomainDurativeActionDetails__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetDomainDurativeActionDetails__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, plansys2_msgs, srv, GetDomainDurativeActionDetails)() {
  return &GetDomainDurativeActionDetails__handle;
}

#if defined(__cplusplus)
}
#endif
