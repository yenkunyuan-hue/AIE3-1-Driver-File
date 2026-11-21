// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_environment_msgs:msg/Density.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/density.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__STRUCT_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__STRUCT_HPP_

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
# define DEPRECATED__marine_environment_msgs__msg__Density __attribute__((deprecated))
#else
# define DEPRECATED__marine_environment_msgs__msg__Density __declspec(deprecated)
#endif

namespace marine_environment_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Density_
{
  using Type = Density_<ContainerAllocator>;

  explicit Density_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->density = 0.0f;
    }
  }

  explicit Density_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->density = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _density_type =
    float;
  _density_type density;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__density(
    const float & _arg)
  {
    this->density = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_environment_msgs::msg::Density_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_environment_msgs::msg::Density_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::Density_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::Density_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_environment_msgs__msg__Density
    std::shared_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_environment_msgs__msg__Density
    std::shared_ptr<marine_environment_msgs::msg::Density_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Density_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->density != other.density) {
      return false;
    }
    return true;
  }
  bool operator!=(const Density_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Density_

// alias to use template instance with default allocator
using Density =
  marine_environment_msgs::msg::Density_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__STRUCT_HPP_
