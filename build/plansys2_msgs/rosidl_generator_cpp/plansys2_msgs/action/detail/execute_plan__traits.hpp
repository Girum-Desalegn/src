// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__TRAITS_HPP_
#define PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__TRAITS_HPP_

#include "plansys2_msgs/action/detail/execute_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_Goal>()
{
  return "plansys2_msgs::action::ExecutePlan_Goal";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_Goal>()
{
  return "plansys2_msgs/action/ExecutePlan_Goal";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_Goal>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::msg::Plan>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_Goal>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::msg::Plan>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_Result>()
{
  return "plansys2_msgs::action::ExecutePlan_Result";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_Result>()
{
  return "plansys2_msgs/action/ExecutePlan_Result";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_Feedback>()
{
  return "plansys2_msgs::action::ExecutePlan_Feedback";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_Feedback>()
{
  return "plansys2_msgs/action/ExecutePlan_Feedback";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "plansys2_msgs/action/detail/execute_plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_SendGoal_Request>()
{
  return "plansys2_msgs::action::ExecutePlan_SendGoal_Request";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_SendGoal_Request>()
{
  return "plansys2_msgs/action/ExecutePlan_SendGoal_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::action::ExecutePlan_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::action::ExecutePlan_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_SendGoal_Response>()
{
  return "plansys2_msgs::action::ExecutePlan_SendGoal_Response";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_SendGoal_Response>()
{
  return "plansys2_msgs/action/ExecutePlan_SendGoal_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_SendGoal>()
{
  return "plansys2_msgs::action::ExecutePlan_SendGoal";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_SendGoal>()
{
  return "plansys2_msgs/action/ExecutePlan_SendGoal";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>::value &&
    has_fixed_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Request>::value &&
    has_bounded_size<plansys2_msgs::action::ExecutePlan_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::action::ExecutePlan_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::action::ExecutePlan_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::action::ExecutePlan_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_GetResult_Request>()
{
  return "plansys2_msgs::action::ExecutePlan_GetResult_Request";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_GetResult_Request>()
{
  return "plansys2_msgs/action/ExecutePlan_GetResult_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_GetResult_Response>()
{
  return "plansys2_msgs::action::ExecutePlan_GetResult_Response";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_GetResult_Response>()
{
  return "plansys2_msgs/action/ExecutePlan_GetResult_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::action::ExecutePlan_Result>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::action::ExecutePlan_Result>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_GetResult>()
{
  return "plansys2_msgs::action::ExecutePlan_GetResult";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_GetResult>()
{
  return "plansys2_msgs/action/ExecutePlan_GetResult";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>::value &&
    has_fixed_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Request>::value &&
    has_bounded_size<plansys2_msgs::action::ExecutePlan_GetResult_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::action::ExecutePlan_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::action::ExecutePlan_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::action::ExecutePlan_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::action::ExecutePlan_FeedbackMessage>()
{
  return "plansys2_msgs::action::ExecutePlan_FeedbackMessage";
}

template<>
inline const char * name<plansys2_msgs::action::ExecutePlan_FeedbackMessage>()
{
  return "plansys2_msgs/action/ExecutePlan_FeedbackMessage";
}

template<>
struct has_fixed_size<plansys2_msgs::action::ExecutePlan_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::action::ExecutePlan_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::action::ExecutePlan_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::action::ExecutePlan_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<plansys2_msgs::action::ExecutePlan_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<plansys2_msgs::action::ExecutePlan>
  : std::true_type
{
};

template<>
struct is_action_goal<plansys2_msgs::action::ExecutePlan_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<plansys2_msgs::action::ExecutePlan_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<plansys2_msgs::action::ExecutePlan_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__TRAITS_HPP_
