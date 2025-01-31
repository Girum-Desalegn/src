// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cascade_lifecycle_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include "cascade_lifecycle_msgs/msg/detail/state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cascade_lifecycle_msgs::msg::State>()
{
  return "cascade_lifecycle_msgs::msg::State";
}

template<>
inline const char * name<cascade_lifecycle_msgs::msg::State>()
{
  return "cascade_lifecycle_msgs/msg/State";
}

template<>
struct has_fixed_size<cascade_lifecycle_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cascade_lifecycle_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cascade_lifecycle_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
