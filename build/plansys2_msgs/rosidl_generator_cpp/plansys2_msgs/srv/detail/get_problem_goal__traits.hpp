// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/GetProblemGoal.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_GOAL__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_GOAL__TRAITS_HPP_

#include "plansys2_msgs/srv/detail/get_problem_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetProblemGoal_Request>()
{
  return "plansys2_msgs::srv::GetProblemGoal_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::GetProblemGoal_Request>()
{
  return "plansys2_msgs/srv/GetProblemGoal_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetProblemGoal_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetProblemGoal_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<plansys2_msgs::srv::GetProblemGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'tree'
#include "plansys2_msgs/msg/detail/tree__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetProblemGoal_Response>()
{
  return "plansys2_msgs::srv::GetProblemGoal_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::GetProblemGoal_Response>()
{
  return "plansys2_msgs/srv/GetProblemGoal_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetProblemGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetProblemGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetProblemGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetProblemGoal>()
{
  return "plansys2_msgs::srv::GetProblemGoal";
}

template<>
inline const char * name<plansys2_msgs::srv::GetProblemGoal>()
{
  return "plansys2_msgs/srv/GetProblemGoal";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetProblemGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::GetProblemGoal_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::GetProblemGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetProblemGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::GetProblemGoal_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::GetProblemGoal_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::GetProblemGoal>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::GetProblemGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::GetProblemGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_GOAL__TRAITS_HPP_
