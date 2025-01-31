// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plansys2_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define PLANSYS2_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include "plansys2_msgs/msg/detail/node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace plansys2_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_negate
{
public:
  explicit Init_Node_negate(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::plansys2_msgs::msg::Node negate(::plansys2_msgs::msg::Node::_negate_type arg)
  {
    msg_.negate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_value
{
public:
  explicit Init_Node_value(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_negate value(::plansys2_msgs::msg::Node::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Node_negate(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_parameters
{
public:
  explicit Init_Node_parameters(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_value parameters(::plansys2_msgs::msg::Node::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_Node_value(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_name
{
public:
  explicit Init_Node_name(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_parameters name(::plansys2_msgs::msg::Node::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Node_parameters(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_children
{
public:
  explicit Init_Node_children(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_name children(::plansys2_msgs::msg::Node::_children_type arg)
  {
    msg_.children = std::move(arg);
    return Init_Node_name(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_node_id
{
public:
  explicit Init_Node_node_id(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_children node_id(::plansys2_msgs::msg::Node::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Node_children(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_modifier_type
{
public:
  explicit Init_Node_modifier_type(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_node_id modifier_type(::plansys2_msgs::msg::Node::_modifier_type_type arg)
  {
    msg_.modifier_type = std::move(arg);
    return Init_Node_node_id(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_expression_type
{
public:
  explicit Init_Node_expression_type(::plansys2_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_modifier_type expression_type(::plansys2_msgs::msg::Node::_expression_type_type arg)
  {
    msg_.expression_type = std::move(arg);
    return Init_Node_modifier_type(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

class Init_Node_node_type
{
public:
  Init_Node_node_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_expression_type node_type(::plansys2_msgs::msg::Node::_node_type_type arg)
  {
    msg_.node_type = std::move(arg);
    return Init_Node_expression_type(msg_);
  }

private:
  ::plansys2_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plansys2_msgs::msg::Node>()
{
  return plansys2_msgs::msg::builder::Init_Node_node_type();
}

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
