// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/Plan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__PLAN__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__PLAN__TRAITS_HPP_

#include "plansys2_msgs/msg/detail/plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::msg::Plan>()
{
  return "plansys2_msgs::msg::Plan";
}

template<>
inline const char * name<plansys2_msgs::msg::Plan>()
{
  return "plansys2_msgs/msg/Plan";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::Plan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::Plan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::Plan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__PLAN__TRAITS_HPP_
