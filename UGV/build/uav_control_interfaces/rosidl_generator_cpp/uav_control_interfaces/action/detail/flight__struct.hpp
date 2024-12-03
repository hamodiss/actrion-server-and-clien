// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uav_control_interfaces:action/Flight.idl
// generated code does not contain a copyright notice

#ifndef UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__STRUCT_HPP_
#define UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_Goal __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_Goal __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_Goal_
{
  using Type = Flight_Goal_<ContainerAllocator>;

  explicit Flight_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
    }
  }

  explicit Flight_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
    }
  }

  // field types and members
  using _altitude_type =
    float;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_Goal
    std::shared_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_Goal
    std::shared_ptr<uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_Goal_ & other) const
  {
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_Goal_

// alias to use template instance with default allocator
using Flight_Goal =
  uav_control_interfaces::action::Flight_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces


#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_Result __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_Result __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_Result_
{
  using Type = Flight_Result_<ContainerAllocator>;

  explicit Flight_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_altitude = 0.0f;
    }
  }

  explicit Flight_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_altitude = 0.0f;
    }
  }

  // field types and members
  using _current_altitude_type =
    float;
  _current_altitude_type current_altitude;

  // setters for named parameter idiom
  Type & set__current_altitude(
    const float & _arg)
  {
    this->current_altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uav_control_interfaces::action::Flight_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_Result
    std::shared_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_Result
    std::shared_ptr<uav_control_interfaces::action::Flight_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_Result_ & other) const
  {
    if (this->current_altitude != other.current_altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_Result_

// alias to use template instance with default allocator
using Flight_Result =
  uav_control_interfaces::action::Flight_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces


#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_Feedback __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_Feedback_
{
  using Type = Flight_Feedback_<ContainerAllocator>;

  explicit Flight_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit Flight_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_Feedback
    std::shared_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_Feedback
    std::shared_ptr<uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_Feedback_

// alias to use template instance with default allocator
using Flight_Feedback =
  uav_control_interfaces::action::Flight_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "uav_control_interfaces/action/detail/flight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Request __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_SendGoal_Request_
{
  using Type = Flight_SendGoal_Request_<ContainerAllocator>;

  explicit Flight_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Flight_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uav_control_interfaces::action::Flight_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const uav_control_interfaces::action::Flight_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Request
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Request
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_SendGoal_Request_

// alias to use template instance with default allocator
using Flight_SendGoal_Request =
  uav_control_interfaces::action::Flight_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Response __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_SendGoal_Response_
{
  using Type = Flight_SendGoal_Response_<ContainerAllocator>;

  explicit Flight_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Flight_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Response
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_SendGoal_Response
    std::shared_ptr<uav_control_interfaces::action::Flight_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_SendGoal_Response_

// alias to use template instance with default allocator
using Flight_SendGoal_Response =
  uav_control_interfaces::action::Flight_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces

namespace uav_control_interfaces
{

namespace action
{

struct Flight_SendGoal
{
  using Request = uav_control_interfaces::action::Flight_SendGoal_Request;
  using Response = uav_control_interfaces::action::Flight_SendGoal_Response;
};

}  // namespace action

}  // namespace uav_control_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Request __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_GetResult_Request_
{
  using Type = Flight_GetResult_Request_<ContainerAllocator>;

  explicit Flight_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Flight_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Request
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Request
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_GetResult_Request_

// alias to use template instance with default allocator
using Flight_GetResult_Request =
  uav_control_interfaces::action::Flight_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Response __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_GetResult_Response_
{
  using Type = Flight_GetResult_Response_<ContainerAllocator>;

  explicit Flight_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Flight_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uav_control_interfaces::action::Flight_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const uav_control_interfaces::action::Flight_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Response
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_GetResult_Response
    std::shared_ptr<uav_control_interfaces::action::Flight_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_GetResult_Response_

// alias to use template instance with default allocator
using Flight_GetResult_Response =
  uav_control_interfaces::action::Flight_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces

namespace uav_control_interfaces
{

namespace action
{

struct Flight_GetResult
{
  using Request = uav_control_interfaces::action::Flight_GetResult_Request;
  using Response = uav_control_interfaces::action::Flight_GetResult_Response;
};

}  // namespace action

}  // namespace uav_control_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "uav_control_interfaces/action/detail/flight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uav_control_interfaces__action__Flight_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__uav_control_interfaces__action__Flight_FeedbackMessage __declspec(deprecated)
#endif

namespace uav_control_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Flight_FeedbackMessage_
{
  using Type = Flight_FeedbackMessage_<ContainerAllocator>;

  explicit Flight_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Flight_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const uav_control_interfaces::action::Flight_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uav_control_interfaces__action__Flight_FeedbackMessage
    std::shared_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uav_control_interfaces__action__Flight_FeedbackMessage
    std::shared_ptr<uav_control_interfaces::action::Flight_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flight_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flight_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flight_FeedbackMessage_

// alias to use template instance with default allocator
using Flight_FeedbackMessage =
  uav_control_interfaces::action::Flight_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace uav_control_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace uav_control_interfaces
{

namespace action
{

struct Flight
{
  /// The goal message defined in the action definition.
  using Goal = uav_control_interfaces::action::Flight_Goal;
  /// The result message defined in the action definition.
  using Result = uav_control_interfaces::action::Flight_Result;
  /// The feedback message defined in the action definition.
  using Feedback = uav_control_interfaces::action::Flight_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = uav_control_interfaces::action::Flight_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = uav_control_interfaces::action::Flight_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = uav_control_interfaces::action::Flight_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Flight Flight;

}  // namespace action

}  // namespace uav_control_interfaces

#endif  // UAV_CONTROL_INTERFACES__ACTION__DETAIL__FLIGHT__STRUCT_HPP_
