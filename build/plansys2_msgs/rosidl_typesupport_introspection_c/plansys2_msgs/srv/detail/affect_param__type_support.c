// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:srv/AffectParam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/srv/detail/affect_param__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/srv/detail/affect_param__functions.h"
#include "plansys2_msgs/srv/detail/affect_param__struct.h"


// Include directives for member types
// Member `param`
#include "plansys2_msgs/msg/param.h"
// Member `param`
#include "plansys2_msgs/msg/detail/param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__srv__AffectParam_Request__init(message_memory);
}

void AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_fini_function(void * message_memory)
{
  plansys2_msgs__srv__AffectParam_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_member_array[1] = {
  {
    "param",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__AffectParam_Request, param),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_members = {
  "plansys2_msgs__srv",  // message namespace
  "AffectParam_Request",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs__srv__AffectParam_Request),
  AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_member_array,  // message members
  AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_type_support_handle = {
  0,
  &AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam_Request)() {
  AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Param)();
  if (!AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_type_support_handle.typesupport_identifier) {
    AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AffectParam_Request__rosidl_typesupport_introspection_c__AffectParam_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/srv/detail/affect_param__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/srv/detail/affect_param__functions.h"
// already included above
// #include "plansys2_msgs/srv/detail/affect_param__struct.h"


// Include directives for member types
// Member `error_info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__srv__AffectParam_Response__init(message_memory);
}

void AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_fini_function(void * message_memory)
{
  plansys2_msgs__srv__AffectParam_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__AffectParam_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__AffectParam_Response, error_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_members = {
  "plansys2_msgs__srv",  // message namespace
  "AffectParam_Response",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__srv__AffectParam_Response),
  AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_member_array,  // message members
  AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_type_support_handle = {
  0,
  &AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam_Response)() {
  if (!AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_type_support_handle.typesupport_identifier) {
    AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AffectParam_Response__rosidl_typesupport_introspection_c__AffectParam_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "plansys2_msgs/srv/detail/affect_param__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_members = {
  "plansys2_msgs__srv",  // service namespace
  "AffectParam",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_Request_message_type_support_handle,
  NULL  // response message
  // plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_Response_message_type_support_handle
};

static rosidl_service_type_support_t plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_type_support_handle = {
  0,
  &plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam)() {
  if (!plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_type_support_handle.typesupport_identifier) {
    plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, AffectParam_Response)()->data;
  }

  return &plansys2_msgs__srv__detail__affect_param__rosidl_typesupport_introspection_c__AffectParam_service_type_support_handle;
}
