// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__STRUCT_H_
#define PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_Goal
{
  plansys2_msgs__msg__Plan plan;
} plansys2_msgs__action__ExecutePlan_Goal;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_Goal.
typedef struct plansys2_msgs__action__ExecutePlan_Goal__Sequence
{
  plansys2_msgs__action__ExecutePlan_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'action_execution_status'
#include "plansys2_msgs/msg/detail/action_execution_info__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_Result
{
  bool success;
  plansys2_msgs__msg__ActionExecutionInfo__Sequence action_execution_status;
} plansys2_msgs__action__ExecutePlan_Result;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_Result.
typedef struct plansys2_msgs__action__ExecutePlan_Result__Sequence
{
  plansys2_msgs__action__ExecutePlan_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'action_execution_status'
// already included above
// #include "plansys2_msgs/msg/detail/action_execution_info__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_Feedback
{
  plansys2_msgs__msg__ActionExecutionInfo__Sequence action_execution_status;
} plansys2_msgs__action__ExecutePlan_Feedback;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_Feedback.
typedef struct plansys2_msgs__action__ExecutePlan_Feedback__Sequence
{
  plansys2_msgs__action__ExecutePlan_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "plansys2_msgs/action/detail/execute_plan__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  plansys2_msgs__action__ExecutePlan_Goal goal;
} plansys2_msgs__action__ExecutePlan_SendGoal_Request;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_SendGoal_Request.
typedef struct plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence
{
  plansys2_msgs__action__ExecutePlan_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} plansys2_msgs__action__ExecutePlan_SendGoal_Response;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_SendGoal_Response.
typedef struct plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence
{
  plansys2_msgs__action__ExecutePlan_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} plansys2_msgs__action__ExecutePlan_GetResult_Request;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_GetResult_Request.
typedef struct plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence
{
  plansys2_msgs__action__ExecutePlan_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_GetResult_Response
{
  int8_t status;
  plansys2_msgs__action__ExecutePlan_Result result;
} plansys2_msgs__action__ExecutePlan_GetResult_Response;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_GetResult_Response.
typedef struct plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence
{
  plansys2_msgs__action__ExecutePlan_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.h"

// Struct defined in action/ExecutePlan in the package plansys2_msgs.
typedef struct plansys2_msgs__action__ExecutePlan_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  plansys2_msgs__action__ExecutePlan_Feedback feedback;
} plansys2_msgs__action__ExecutePlan_FeedbackMessage;

// Struct for a sequence of plansys2_msgs__action__ExecutePlan_FeedbackMessage.
typedef struct plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence
{
  plansys2_msgs__action__ExecutePlan_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} plansys2_msgs__action__ExecutePlan_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__STRUCT_H_
