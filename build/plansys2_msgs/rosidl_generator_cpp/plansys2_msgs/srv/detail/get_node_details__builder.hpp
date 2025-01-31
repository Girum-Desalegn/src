// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/GetNodeDetails.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/get_node_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeDetails_Request_expression
{
public:
  Init_GetNodeDetails_Request_expression()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::GetNodeDetails_Request expression(::plansys2_msgs::srv::GetNodeDetails_Request::_expression_type arg)
  {
    msg_.expression = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetNodeDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetNodeDetails_Request>()
{
  return plansys2_msgs::srv::builder::Init_GetNodeDetails_Request_expression();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeDetails_Response_error_info
{
public:
  explicit Init_GetNodeDetails_Response_error_info(::plansys2_msgs::srv::GetNodeDetails_Response & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::srv::GetNodeDetails_Response error_info(::plansys2_msgs::srv::GetNodeDetails_Response::_error_info_type arg)
  {
    msg_.error_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::GetNodeDetails_Response msg_;
};

class Init_GetNodeDetails_Response_node
{
public:
  explicit Init_GetNodeDetails_Response_node(::plansys2_msgs::srv::GetNodeDetails_Response & msg)
  : msg_(msg)
  {}
  Init_GetNodeDetails_Response_error_info node(::plansys2_msgs::srv::GetNodeDetails_Response::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_GetNodeDetails_Response_error_info(msg_);
  }

private:
  ::plansys2_msgs::srv::GetNodeDetails_Response msg_;
};

class Init_GetNodeDetails_Response_success
{
public:
  Init_GetNodeDetails_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetNodeDetails_Response_node success(::plansys2_msgs::srv::GetNodeDetails_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetNodeDetails_Response_node(msg_);
  }

private:
  ::plansys2_msgs::srv::GetNodeDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::GetNodeDetails_Response>()
{
  return plansys2_msgs::srv::builder::Init_GetNodeDetails_Response_success();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__GET_NODE_DETAILS__BUILDER_HPP_
