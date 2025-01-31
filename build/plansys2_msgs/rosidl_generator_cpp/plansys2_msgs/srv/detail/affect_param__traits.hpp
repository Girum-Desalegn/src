// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/AffectParam.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__TRAITS_HPP_

#include "plansys2_msgs/srv/detail/affect_param__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'param'
#include "plansys2_msgs/msg/detail/param__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::AffectParam_Request>()
{
  return "plansys2_msgs::srv::AffectParam_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::AffectParam_Request>()
{
  return "plansys2_msgs/srv/AffectParam_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::AffectParam_Request>
  : std::integral_constant<bool, has_fixed_size<plansys2_msgs::msg::Param>::value> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::AffectParam_Request>
  : std::integral_constant<bool, has_bounded_size<plansys2_msgs::msg::Param>::value> {};

template<>
struct is_message<plansys2_msgs::srv::AffectParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::AffectParam_Response>()
{
  return "plansys2_msgs::srv::AffectParam_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::AffectParam_Response>()
{
  return "plansys2_msgs/srv/AffectParam_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::AffectParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::AffectParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::AffectParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::AffectParam>()
{
  return "plansys2_msgs::srv::AffectParam";
}

template<>
inline const char * name<plansys2_msgs::srv::AffectParam>()
{
  return "plansys2_msgs/srv/AffectParam";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::AffectParam>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::AffectParam_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::AffectParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::AffectParam>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::AffectParam_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::AffectParam_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::AffectParam>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::AffectParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::AffectParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__AFFECT_PARAM__TRAITS_HPP_
