// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/ActionExecutionInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__TRAITS_HPP_

#include "plansys2_msgs/msg/detail/action_execution_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_stamp'
// Member 'status_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::msg::ActionExecutionInfo>()
{
  return "plansys2_msgs::msg::ActionExecutionInfo";
}

template<>
inline const char * name<plansys2_msgs::msg::ActionExecutionInfo>()
{
  return "plansys2_msgs/msg/ActionExecutionInfo";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::ActionExecutionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::ActionExecutionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::ActionExecutionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__ACTION_EXECUTION_INFO__TRAITS_HPP_
