// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_environment_msgs:msg/SoundSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/sound_speed.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__STRUCT_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__marine_environment_msgs__msg__SoundSpeed __attribute__((deprecated))
#else
# define DEPRECATED__marine_environment_msgs__msg__SoundSpeed __declspec(deprecated)
#endif

namespace marine_environment_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SoundSpeed_
{
  using Type = SoundSpeed_<ContainerAllocator>;

  explicit SoundSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound_speed = 0.0f;
    }
  }

  explicit SoundSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sound_speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sound_speed_type =
    float;
  _sound_speed_type sound_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sound_speed(
    const float & _arg)
  {
    this->sound_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_environment_msgs__msg__SoundSpeed
    std::shared_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_environment_msgs__msg__SoundSpeed
    std::shared_ptr<marine_environment_msgs::msg::SoundSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SoundSpeed_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sound_speed != other.sound_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SoundSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SoundSpeed_

// alias to use template instance with default allocator
using SoundSpeed =
  marine_environment_msgs::msg::SoundSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__STRUCT_HPP_
