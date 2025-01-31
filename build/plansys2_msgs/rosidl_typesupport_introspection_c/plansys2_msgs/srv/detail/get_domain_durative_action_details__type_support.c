// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:srv/GetDomainDurativeActionDetails.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__functions.h"
#include "plansys2_msgs/srv/detail/get_domain_durative_action_details__struct.h"


// Include directives for member types
// Member `durative_action`
// Member `parameters`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__srv__GetDomainDurativeActionDetails_Request__init(message_memory);
}

void GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_fini_function(void * message_memory)
{
  plansys2_msgs__srv__GetDomainDurativeActionDetails_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_member_array[2] = {
  {
    "durative_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Request, durative_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Request, parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_members = {
  "plansys2_msgs__srv",  // message namespace
  "GetDomainDurativeActionDetails_Request",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Request),
  GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_member_array,  // message members
  GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_type_support_handle = {
  0,
  &GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Request)() {
  if (!GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_type_support_handle.typesupport_identifier) {
    GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDomainDurativeActionDetails_Request__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_durative_action_details__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_durative_action_details__functions.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_durative_action_details__struct.h"


// Include directives for member types
// Member `durative_action`
#include "plansys2_msgs/msg/durative_action.h"
// Member `durative_action`
#include "plansys2_msgs/msg/detail/durative_action__rosidl_typesupport_introspection_c.h"
// Member `error_info`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__srv__GetDomainDurativeActionDetails_Response__init(message_memory);
}

void GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_fini_function(void * message_memory)
{
  plansys2_msgs__srv__GetDomainDurativeActionDetails_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "durative_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Response, durative_action),  // bytes offset in struct
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
    offsetof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Response, error_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_members = {
  "plansys2_msgs__srv",  // message namespace
  "GetDomainDurativeActionDetails_Response",  // message name
  3,  // number of fields
  sizeof(plansys2_msgs__srv__GetDomainDurativeActionDetails_Response),
  GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_member_array,  // message members
  GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_type_support_handle = {
  0,
  &GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Response)() {
  GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, DurativeAction)();
  if (!GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_type_support_handle.typesupport_identifier) {
    GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDomainDurativeActionDetails_Response__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "plansys2_msgs/srv/detail/get_domain_durative_action_details__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_members = {
  "plansys2_msgs__srv",  // service namespace
  "GetDomainDurativeActionDetails",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Request_message_type_support_handle,
  NULL  // response message
  // plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_Response_message_type_support_handle
};

static rosidl_service_type_support_t plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_type_support_handle = {
  0,
  &plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails)() {
  if (!plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_type_support_handle.typesupport_identifier) {
    plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, srv, GetDomainDurativeActionDetails_Response)()->data;
  }

  return &plansys2_msgs__srv__detail__get_domain_durative_action_details__rosidl_typesupport_introspection_c__GetDomainDurativeActionDetails_service_type_support_handle;
}
