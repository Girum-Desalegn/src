// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plansys2_msgs:srv/GetProblemInstanceDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_INSTANCE_DETAILS__TRAITS_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_INSTANCE_DETAILS__TRAITS_HPP_

#include "plansys2_msgs/srv/detail/get_problem_instance_details__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetProblemInstanceDetails_Request>()
{
  return "plansys2_msgs::srv::GetProblemInstanceDetails_Request";
}

template<>
inline const char * name<plansys2_msgs::srv::GetProblemInstanceDetails_Request>()
{
  return "plansys2_msgs/srv/GetProblemInstanceDetails_Request";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetProblemInstanceDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetProblemInstanceDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetProblemInstanceDetails_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'instance'
#include "plansys2_msgs/msg/detail/param__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetProblemInstanceDetails_Response>()
{
  return "plansys2_msgs::srv::GetProblemInstanceDetails_Response";
}

template<>
inline const char * name<plansys2_msgs::srv::GetProblemInstanceDetails_Response>()
{
  return "plansys2_msgs/srv/GetProblemInstanceDetails_Response";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetProblemInstanceDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetProblemInstanceDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plansys2_msgs::srv::GetProblemInstanceDetails_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plansys2_msgs::srv::GetProblemInstanceDetails>()
{
  return "plansys2_msgs::srv::GetProblemInstanceDetails";
}

template<>
inline const char * name<plansys2_msgs::srv::GetProblemInstanceDetails>()
{
  return "plansys2_msgs/srv/GetProblemInstanceDetails";
}

template<>
struct has_fixed_size<plansys2_msgs::srv::GetProblemInstanceDetails>
  : std::integral_constant<
    bool,
    has_fixed_size<plansys2_msgs::srv::GetProblemInstanceDetails_Request>::value &&
    has_fixed_size<plansys2_msgs::srv::GetProblemInstanceDetails_Response>::value
  >
{
};

template<>
struct has_bounded_size<plansys2_msgs::srv::GetProblemInstanceDetails>
  : std::integral_constant<
    bool,
    has_bounded_size<plansys2_msgs::srv::GetProblemInstanceDetails_Request>::value &&
    has_bounded_size<plansys2_msgs::srv::GetProblemInstanceDetails_Response>::value
  >
{
};

template<>
struct is_service<plansys2_msgs::srv::GetProblemInstanceDetails>
  : std::true_type
{
};

template<>
struct is_service_request<plansys2_msgs::srv::GetProblemInstanceDetails_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plansys2_msgs::srv::GetProblemInstanceDetails_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_PROBLEM_INSTANCE_DETAILS__TRAITS_HPP_
