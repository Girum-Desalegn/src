// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_

#include "plansys2_msgs/srv/detail/get_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetPlan_Request>()
{
  return "plansys2_msgs::srv::GetPlan_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::GetPlan_Request>()
{
  return "plansys2_msgs/srv/GetPlan_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetPlan_Response>()
{
  return "plansys2_msgs::srv::GetPlan_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::GetPlan_Response>()
{
  return "plansys2_msgs/srv/GetPlan_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetPlan>()
{
  return "plansys2_msgs::srv::GetPlan";
}

template<>
inline const char * name<plansys2_msgs::srv::GetPlan>()
{
  return "plansys2_msgs/srv/GetPlan";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::GetPlan_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::GetPlan_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::GetPlan_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::GetPlan>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::GetPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::GetPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PLAN__TRAITS_HPP_
