// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:msg/Knowledge.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__TRAITS_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__TRAITS_HPP_

#include "plansys2_msgs/msg/detail/knowledge__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::msg::Knowledge>()
{
  return "plansys2_msgs::msg::Knowledge";
}

template<>
inline const char * name<plansys2_msgs::msg::Knowledge>()
{
  return "plansys2_msgs/msg/Knowledge";
}

template<>
struct has_fixed_size<plansys2_msgs::msg::Knowledge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::msg::Knowledge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::msg::Knowledge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__MSG__DETAIL__KNOWLEDGE__TRAITS_HPP_
