// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plansys2_msgs:action/ExecutePlan.idl
// generated code does not contain a copyright notice

#ifndef PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__STRUCT_HPP_
#define PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'plan'
#include "plansys2_msgs/msg/detail/plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_Goal __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_Goal __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_Goal_
{
  using Type = ExecutePlan_Goal_<ContainerAllocator>;

  explicit ExecutePlan_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_init)
  {
    (void)_init;
  }

  explicit ExecutePlan_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _plan_type =
    plansys2_msgs::msg::Plan_<ContainerAllocator>;
  _plan_type plan;

  // setters for named parameter idiom
  Type & set__plan(
    const plansys2_msgs::msg::Plan_<ContainerAllocator> & _arg)
  {
    this->plan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_Goal
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_Goal
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_Goal_ & other) const
  {
    if (this->plan != other.plan) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_Goal_

// alias to use template instance with default allocator
using ExecutePlan_Goal =
  plansys2_msgs::action::ExecutePlan_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'action_execution_status'
#include "plansys2_msgs/msg/detail/action_execution_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_Result __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_Result __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_Result_
{
  using Type = ExecutePlan_Result_<ContainerAllocator>;

  explicit ExecutePlan_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ExecutePlan_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _action_execution_status_type =
    std::vector<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>::other>;
  _action_execution_status_type action_execution_status;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__action_execution_status(
    const std::vector<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->action_execution_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_Result
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_Result
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->action_execution_status != other.action_execution_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_Result_

// alias to use template instance with default allocator
using ExecutePlan_Result =
  plansys2_msgs::action::ExecutePlan_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'action_execution_status'
// already included above
// #include "plansys2_msgs/msg/detail/action_execution_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_Feedback __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_Feedback_
{
  using Type = ExecutePlan_Feedback_<ContainerAllocator>;

  explicit ExecutePlan_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ExecutePlan_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _action_execution_status_type =
    std::vector<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>::other>;
  _action_execution_status_type action_execution_status;

  // setters for named parameter idiom
  Type & set__action_execution_status(
    const std::vector<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<plansys2_msgs::msg::ActionExecutionInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->action_execution_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_Feedback
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_Feedback
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_Feedback_ & other) const
  {
    if (this->action_execution_status != other.action_execution_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_Feedback_

// alias to use template instance with default allocator
using ExecutePlan_Feedback =
  plansys2_msgs::action::ExecutePlan_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "plansys2_msgs/action/detail/execute_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Request __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_SendGoal_Request_
{
  using Type = ExecutePlan_SendGoal_Request_<ContainerAllocator>;

  explicit ExecutePlan_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecutePlan_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const plansys2_msgs::action::ExecutePlan_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Request
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Request
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_SendGoal_Request_

// alias to use template instance with default allocator
using ExecutePlan_SendGoal_Request =
  plansys2_msgs::action::ExecutePlan_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Response __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_SendGoal_Response_
{
  using Type = ExecutePlan_SendGoal_Response_<ContainerAllocator>;

  explicit ExecutePlan_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecutePlan_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Response
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_SendGoal_Response
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_SendGoal_Response_

// alias to use template instance with default allocator
using ExecutePlan_SendGoal_Response =
  plansys2_msgs::action::ExecutePlan_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs

namespace plansys2_msgs
{

namespace action
{

struct ExecutePlan_SendGoal
{
  using Request = plansys2_msgs::action::ExecutePlan_SendGoal_Request;
  using Response = plansys2_msgs::action::ExecutePlan_SendGoal_Response;
};

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Request __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_GetResult_Request_
{
  using Type = ExecutePlan_GetResult_Request_<ContainerAllocator>;

  explicit ExecutePlan_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecutePlan_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Request
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Request
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_GetResult_Request_

// alias to use template instance with default allocator
using ExecutePlan_GetResult_Request =
  plansys2_msgs::action::ExecutePlan_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Response __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_GetResult_Response_
{
  using Type = ExecutePlan_GetResult_Response_<ContainerAllocator>;

  explicit ExecutePlan_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecutePlan_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const plansys2_msgs::action::ExecutePlan_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Response
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_GetResult_Response
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_GetResult_Response_

// alias to use template instance with default allocator
using ExecutePlan_GetResult_Response =
  plansys2_msgs::action::ExecutePlan_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs

namespace plansys2_msgs
{

namespace action
{

struct ExecutePlan_GetResult
{
  using Request = plansys2_msgs::action::ExecutePlan_GetResult_Request;
  using Response = plansys2_msgs::action::ExecutePlan_GetResult_Response;
};

}  // namespace action

}  // namespace plansys2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "plansys2_msgs/action/detail/execute_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__plansys2_msgs__action__ExecutePlan_FeedbackMessage __declspec(deprecated)
#endif

namespace plansys2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecutePlan_FeedbackMessage_
{
  using Type = ExecutePlan_FeedbackMessage_<ContainerAllocator>;

  explicit ExecutePlan_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecutePlan_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const plansys2_msgs::action::ExecutePlan_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_FeedbackMessage
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plansys2_msgs__action__ExecutePlan_FeedbackMessage
    std::shared_ptr<plansys2_msgs::action::ExecutePlan_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutePlan_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutePlan_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutePlan_FeedbackMessage_

// alias to use template instance with default allocator
using ExecutePlan_FeedbackMessage =
  plansys2_msgs::action::ExecutePlan_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plansys2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace plansys2_msgs
{

namespace action
{

struct ExecutePlan
{
  /// The goal message defined in the action definition.
  using Goal = plansys2_msgs::action::ExecutePlan_Goal;
  /// The result message defined in the action definition.
  using Result = plansys2_msgs::action::ExecutePlan_Result;
  /// The feedback message defined in the action definition.
  using Feedback = plansys2_msgs::action::ExecutePlan_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = plansys2_msgs::action::ExecutePlan_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = plansys2_msgs::action::ExecutePlan_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = plansys2_msgs::action::ExecutePlan_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecutePlan ExecutePlan;

}  // namespace action

}  // namespace plansys2_msgs

#endif  // PLANSYS2_MSGS__ACTION__DETAIL__EXECUTE_PLAN__STRUCT_HPP_
