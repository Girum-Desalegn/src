// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
#include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plansys2_msgs/action/detail/execute_plan__functions.h"
#include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `plan`
#include "plansys2_msgs/msg/plan.h"
// Member `plan`
#include "plansys2_msgs/msg/detail/plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_Goal__init(message_memory);
}

void ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_member_array[1] = {
  {
    "plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_Goal, plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_Goal",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_Goal),
  ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_member_array,  // message members
  ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_type_support_handle = {
  0,
  &ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_Goal)() {
  ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, Plan)();
  if (!ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_Goal__rosidl_typesupport_introspection_c__ExecutePlan_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `action_execution_status`
#include "plansys2_msgs/msg/action_execution_info.h"
// Member `action_execution_status`
#include "plansys2_msgs/msg/detail/action_execution_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_Result__init(message_memory);
}

void ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_Result__fini(message_memory);
}

size_t ExecutePlan_Result__rosidl_typesupport_introspection_c__size_function__ActionExecutionInfo__action_execution_status(
  const void * untyped_member)
{
  const plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (const plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ExecutePlan_Result__rosidl_typesupport_introspection_c__get_const_function__ActionExecutionInfo__action_execution_status(
  const void * untyped_member, size_t index)
{
  const plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (const plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ExecutePlan_Result__rosidl_typesupport_introspection_c__get_function__ActionExecutionInfo__action_execution_status(
  void * untyped_member, size_t index)
{
  plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ExecutePlan_Result__rosidl_typesupport_introspection_c__resize_function__ActionExecutionInfo__action_execution_status(
  void * untyped_member, size_t size)
{
  plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  plansys2_msgs__msg__ActionExecutionInfo__Sequence__fini(member);
  return plansys2_msgs__msg__ActionExecutionInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_execution_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_Result, action_execution_status),  // bytes offset in struct
    NULL,  // default value
    ExecutePlan_Result__rosidl_typesupport_introspection_c__size_function__ActionExecutionInfo__action_execution_status,  // size() function pointer
    ExecutePlan_Result__rosidl_typesupport_introspection_c__get_const_function__ActionExecutionInfo__action_execution_status,  // get_const(index) function pointer
    ExecutePlan_Result__rosidl_typesupport_introspection_c__get_function__ActionExecutionInfo__action_execution_status,  // get(index) function pointer
    ExecutePlan_Result__rosidl_typesupport_introspection_c__resize_function__ActionExecutionInfo__action_execution_status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_Result",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_Result),
  ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_member_array,  // message members
  ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_type_support_handle = {
  0,
  &ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_Result)() {
  ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, ActionExecutionInfo)();
  if (!ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_Result__rosidl_typesupport_introspection_c__ExecutePlan_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `action_execution_status`
// already included above
// #include "plansys2_msgs/msg/action_execution_info.h"
// Member `action_execution_status`
// already included above
// #include "plansys2_msgs/msg/detail/action_execution_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_Feedback__init(message_memory);
}

void ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_Feedback__fini(message_memory);
}

size_t ExecutePlan_Feedback__rosidl_typesupport_introspection_c__size_function__ActionExecutionInfo__action_execution_status(
  const void * untyped_member)
{
  const plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (const plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ExecutePlan_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionExecutionInfo__action_execution_status(
  const void * untyped_member, size_t index)
{
  const plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (const plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ExecutePlan_Feedback__rosidl_typesupport_introspection_c__get_function__ActionExecutionInfo__action_execution_status(
  void * untyped_member, size_t index)
{
  plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ExecutePlan_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionExecutionInfo__action_execution_status(
  void * untyped_member, size_t size)
{
  plansys2_msgs__msg__ActionExecutionInfo__Sequence * member =
    (plansys2_msgs__msg__ActionExecutionInfo__Sequence *)(untyped_member);
  plansys2_msgs__msg__ActionExecutionInfo__Sequence__fini(member);
  return plansys2_msgs__msg__ActionExecutionInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_member_array[1] = {
  {
    "action_execution_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_Feedback, action_execution_status),  // bytes offset in struct
    NULL,  // default value
    ExecutePlan_Feedback__rosidl_typesupport_introspection_c__size_function__ActionExecutionInfo__action_execution_status,  // size() function pointer
    ExecutePlan_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionExecutionInfo__action_execution_status,  // get_const(index) function pointer
    ExecutePlan_Feedback__rosidl_typesupport_introspection_c__get_function__ActionExecutionInfo__action_execution_status,  // get(index) function pointer
    ExecutePlan_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionExecutionInfo__action_execution_status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_Feedback",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_Feedback),
  ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_member_array,  // message members
  ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_type_support_handle = {
  0,
  &ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_Feedback)() {
  ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, msg, ActionExecutionInfo)();
  if (!ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_Feedback__rosidl_typesupport_introspection_c__ExecutePlan_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "plansys2_msgs/action/execute_plan.h"
// Member `goal`
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_SendGoal_Request__init(message_memory);
}

void ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Request),
  ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_member_array,  // message members
  ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_type_support_handle = {
  0,
  &ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal_Request)() {
  ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_Goal)();
  if (!ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_SendGoal_Response__init(message_memory);
}

void ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_SendGoal_Response),
  ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_member_array,  // message members
  ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_type_support_handle = {
  0,
  &ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal_Response)() {
  ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_members = {
  "plansys2_msgs__action",  // service namespace
  "ExecutePlan_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_type_support_handle = {
  0,
  &plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal)() {
  if (!plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_type_support_handle.typesupport_identifier) {
    plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_SendGoal_Response)()->data;
  }

  return &plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_GetResult_Request__init(message_memory);
}

void ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Request),
  ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_member_array,  // message members
  ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_type_support_handle = {
  0,
  &ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult_Request)() {
  ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "plansys2_msgs/action/execute_plan.h"
// Member `result`
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_GetResult_Response__init(message_memory);
}

void ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_GetResult_Response),
  ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_member_array,  // message members
  ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_type_support_handle = {
  0,
  &ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult_Response)() {
  ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_Result)();
  if (!ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_members = {
  "plansys2_msgs__action",  // service namespace
  "ExecutePlan_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_type_support_handle = {
  0,
  &plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult)() {
  if (!plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_type_support_handle.typesupport_identifier) {
    plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_GetResult_Response)()->data;
  }

  return &plansys2_msgs__action__detail__execute_plan__rosidl_typesupport_introspection_c__ExecutePlan_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plansys2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__functions.h"
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "plansys2_msgs/action/execute_plan.h"
// Member `feedback`
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plansys2_msgs__action__ExecutePlan_FeedbackMessage__init(message_memory);
}

void ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_fini_function(void * message_memory)
{
  plansys2_msgs__action__ExecutePlan_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plansys2_msgs__action__ExecutePlan_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_members = {
  "plansys2_msgs__action",  // message namespace
  "ExecutePlan_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(plansys2_msgs__action__ExecutePlan_FeedbackMessage),
  ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_member_array,  // message members
  ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_type_support_handle = {
  0,
  &ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plansys2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_FeedbackMessage)() {
  ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plansys2_msgs, action, ExecutePlan_Feedback)();
  if (!ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePlan_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePlan_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
