// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cascade_lifecycle_msgs:msg/Activation.idl
// generated code does not contain a copyright notice

#ifndef CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__BUILDER_HPP_
#define CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__BUILDER_HPP_

#include "cascade_lifecycle_msgs/msg/detail/activation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cascade_lifecycle_msgs
{

namespace msg
{

namespace builder
{

class Init_Activation_activation
{
public:
  explicit Init_Activation_activation(::cascade_lifecycle_msgs::msg::Activation & msg)
  : msg_(msg)
  {}
  ::cascade_lifecycle_msgs::msg::Activation activation(::cascade_lifecycle_msgs::msg::Activation::_activation_type arg)
  {
    msg_.activation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cascade_lifecycle_msgs::msg::Activation msg_;
};

class Init_Activation_activator
{
public:
  explicit Init_Activation_activator(::cascade_lifecycle_msgs::msg::Activation & msg)
  : msg_(msg)
  {}
  Init_Activation_activation activator(::cascade_lifecycle_msgs::msg::Activation::_activator_type arg)
  {
    msg_.activator = std::move(arg);
    return Init_Activation_activation(msg_);
  }

private:
  ::cascade_lifecycle_msgs::msg::Activation msg_;
};

class Init_Activation_operation_type
{
public:
  Init_Activation_operation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Activation_activator operation_type(::cascade_lifecycle_msgs::msg::Activation::_operation_type_type arg)
  {
    msg_.operation_type = std::move(arg);
    return Init_Activation_activator(msg_);
  }

private:
  ::cascade_lifecycle_msgs::msg::Activation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cascade_lifecycle_msgs::msg::Activation>()
{
  return cascade_lifecycle_msgs::msg::builder::Init_Activation_operation_type();
}

}  // namespace cascade_lifecycle_msgs

#endif  // CASCADE_LIFECYCLE_MSGS__MSG__DETAIL__ACTIVATION__BUILDER_HPP_
