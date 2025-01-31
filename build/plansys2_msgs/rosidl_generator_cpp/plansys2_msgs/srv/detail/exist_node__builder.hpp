// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:srv/ExistNode.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__BUILDER_HPP_
#define PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__BUILDER_HPP_

#include "plansys2_msgs/srv/detail/exist_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_ExistNode_Request_node
{
public:
  Init_ExistNode_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::ExistNode_Request node(::plansys2_msgs::srv::ExistNode_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::ExistNode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::ExistNode_Request>()
{
  return plansys2_msgs::srv::builder::Init_ExistNode_Request_node();
}

}  // namespace plansys2_msgs


namespace plansys2_msgs
{

namespace srv
{

namespace builder
{

class Init_ExistNode_Response_exist
{
public:
  Init_ExistNode_Response_exist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plansys2_msgs::srv::ExistNode_Response exist(::plansys2_msgs::srv::ExistNode_Response::_exist_type arg)
  {
    msg_.exist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::srv::ExistNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::srv::ExistNode_Response>()
{
  return plansys2_msgs::srv::builder::Init_ExistNode_Response_exist();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__SRV__DETAIL__EXIST_NODE__BUILDER_HPP_
