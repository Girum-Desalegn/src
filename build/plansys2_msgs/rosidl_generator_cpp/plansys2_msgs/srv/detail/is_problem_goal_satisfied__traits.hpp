// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/IsProblemGoalSatisfied.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__TRAITS_HPP_

#include "plansys2_msgs/srv/detail/is_problem_goal_satisfied__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tree'
#include "plansys2_msgs/msg/detail/tree__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>()
{
  return "plansys2_msgs::srv::IsProblemGoalSatisfied_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>()
{
  return "plansys2_msgs/srv/IsProblemGoalSatisfied_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::msg::Tree>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::msg::Tree>::value> {};

template<>
struct is_message<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>()
{
  return "plansys2_msgs::srv::IsProblemGoalSatisfied_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>()
{
  return "plansys2_msgs/srv/IsProblemGoalSatisfied_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::IsProblemGoalSatisfied>()
{
  return "plansys2_msgs::srv::IsProblemGoalSatisfied";
}

template<>
inline const char * name<plansys2_msgs::srv::IsProblemGoalSatisfied>()
{
  return "plansys2_msgs/srv/IsProblemGoalSatisfied";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::IsProblemGoalSatisfied>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::IsProblemGoalSatisfied_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::IsProblemGoalSatisfied_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__IS_PROBLEM_GOAL_SATISFIED__TRAITS_HPP_
