// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from piper_with_gripper_moveit:action/PoseGoal.idl
// generated code does not contain a copyright notice

#ifndef PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__STRUCT_HPP_
#define PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Goal __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Goal __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_Goal_
{
  using Type = PoseGoal_Goal_<ContainerAllocator>;

  explicit PoseGoal_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->roll_tol_rad = 0.0;
      this->pitch_tol_rad = 0.0;
      this->yaw_tol_rad = 0.0;
    }
  }

  explicit PoseGoal_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->roll_tol_rad = 0.0;
      this->pitch_tol_rad = 0.0;
      this->yaw_tol_rad = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    int8_t;
  _mode_type mode;
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _roll_tol_rad_type =
    double;
  _roll_tol_rad_type roll_tol_rad;
  using _pitch_tol_rad_type =
    double;
  _pitch_tol_rad_type pitch_tol_rad;
  using _yaw_tol_rad_type =
    double;
  _yaw_tol_rad_type yaw_tol_rad;

  // setters for named parameter idiom
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__roll_tol_rad(
    const double & _arg)
  {
    this->roll_tol_rad = _arg;
    return *this;
  }
  Type & set__pitch_tol_rad(
    const double & _arg)
  {
    this->pitch_tol_rad = _arg;
    return *this;
  }
  Type & set__yaw_tol_rad(
    const double & _arg)
  {
    this->yaw_tol_rad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Goal
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Goal
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_Goal_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->roll_tol_rad != other.roll_tol_rad) {
      return false;
    }
    if (this->pitch_tol_rad != other.pitch_tol_rad) {
      return false;
    }
    if (this->yaw_tol_rad != other.yaw_tol_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_Goal_

// alias to use template instance with default allocator
using PoseGoal_Goal =
  piper_with_gripper_moveit::action::PoseGoal_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit


#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Result __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Result __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_Result_
{
  using Type = PoseGoal_Result_<ContainerAllocator>;

  explicit PoseGoal_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit PoseGoal_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Result
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Result
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_Result_

// alias to use template instance with default allocator
using PoseGoal_Result =
  piper_with_gripper_moveit::action::PoseGoal_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit


#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Feedback __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_Feedback_
{
  using Type = PoseGoal_Feedback_<ContainerAllocator>;

  explicit PoseGoal_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit PoseGoal_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Feedback
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_Feedback
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_Feedback_

// alias to use template instance with default allocator
using PoseGoal_Feedback =
  piper_with_gripper_moveit::action::PoseGoal_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "piper_with_gripper_moveit/action/detail/pose_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_SendGoal_Request_
{
  using Type = PoseGoal_SendGoal_Request_<ContainerAllocator>;

  explicit PoseGoal_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PoseGoal_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const piper_with_gripper_moveit::action::PoseGoal_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Request
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_SendGoal_Request_

// alias to use template instance with default allocator
using PoseGoal_SendGoal_Request =
  piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_SendGoal_Response_
{
  using Type = PoseGoal_SendGoal_Response_<ContainerAllocator>;

  explicit PoseGoal_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PoseGoal_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_SendGoal_Response
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_SendGoal_Response_

// alias to use template instance with default allocator
using PoseGoal_SendGoal_Response =
  piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace piper_with_gripper_moveit
{

namespace action
{

struct PoseGoal_SendGoal
{
  using Request = piper_with_gripper_moveit::action::PoseGoal_SendGoal_Request;
  using Response = piper_with_gripper_moveit::action::PoseGoal_SendGoal_Response;
};

}  // namespace action

}  // namespace piper_with_gripper_moveit


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Request __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_GetResult_Request_
{
  using Type = PoseGoal_GetResult_Request_<ContainerAllocator>;

  explicit PoseGoal_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PoseGoal_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Request
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Request
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_GetResult_Request_

// alias to use template instance with default allocator
using PoseGoal_GetResult_Request =
  piper_with_gripper_moveit::action::PoseGoal_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit


// Include directives for member types
// Member 'result'
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Response __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_GetResult_Response_
{
  using Type = PoseGoal_GetResult_Response_<ContainerAllocator>;

  explicit PoseGoal_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PoseGoal_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const piper_with_gripper_moveit::action::PoseGoal_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Response
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_GetResult_Response
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_GetResult_Response_

// alias to use template instance with default allocator
using PoseGoal_GetResult_Response =
  piper_with_gripper_moveit::action::PoseGoal_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit

namespace piper_with_gripper_moveit
{

namespace action
{

struct PoseGoal_GetResult
{
  using Request = piper_with_gripper_moveit::action::PoseGoal_GetResult_Request;
  using Response = piper_with_gripper_moveit::action::PoseGoal_GetResult_Response;
};

}  // namespace action

}  // namespace piper_with_gripper_moveit


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "piper_with_gripper_moveit/action/detail/pose_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage __declspec(deprecated)
#endif

namespace piper_with_gripper_moveit
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PoseGoal_FeedbackMessage_
{
  using Type = PoseGoal_FeedbackMessage_<ContainerAllocator>;

  explicit PoseGoal_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PoseGoal_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const piper_with_gripper_moveit::action::PoseGoal_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__piper_with_gripper_moveit__action__PoseGoal_FeedbackMessage
    std::shared_ptr<piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGoal_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGoal_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGoal_FeedbackMessage_

// alias to use template instance with default allocator
using PoseGoal_FeedbackMessage =
  piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace piper_with_gripper_moveit

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace piper_with_gripper_moveit
{

namespace action
{

struct PoseGoal
{
  /// The goal message defined in the action definition.
  using Goal = piper_with_gripper_moveit::action::PoseGoal_Goal;
  /// The result message defined in the action definition.
  using Result = piper_with_gripper_moveit::action::PoseGoal_Result;
  /// The feedback message defined in the action definition.
  using Feedback = piper_with_gripper_moveit::action::PoseGoal_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = piper_with_gripper_moveit::action::PoseGoal_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = piper_with_gripper_moveit::action::PoseGoal_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = piper_with_gripper_moveit::action::PoseGoal_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PoseGoal PoseGoal;

}  // namespace action

}  // namespace piper_with_gripper_moveit

#endif  // PIPER_WITH_GRIPPER_MOVEIT__ACTION__DETAIL__POSE_GOAL__STRUCT_HPP_
