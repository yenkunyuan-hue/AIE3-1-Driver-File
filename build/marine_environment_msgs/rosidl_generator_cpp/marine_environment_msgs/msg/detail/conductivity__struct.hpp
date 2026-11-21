// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_environment_msgs:msg/Conductivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/conductivity.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__STRUCT_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__STRUCT_HPP_

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
# define DEPRECATED__marine_environment_msgs__msg__Conductivity __attribute__((deprecated))
#else
# define DEPRECATED__marine_environment_msgs__msg__Conductivity __declspec(deprecated)
#endif

namespace marine_environment_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Conductivity_
{
  using Type = Conductivity_<ContainerAllocator>;

  explicit Conductivity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conductivity = 0.0f;
      this->salinity = 0.0f;
    }
  }

  explicit Conductivity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conductivity = 0.0f;
      this->salinity = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _conductivity_type =
    float;
  _conductivity_type conductivity;
  using _salinity_type =
    float;
  _salinity_type salinity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__conductivity(
    const float & _arg)
  {
    this->conductivity = _arg;
    return *this;
  }
  Type & set__salinity(
    const float & _arg)
  {
    this->salinity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_environment_msgs::msg::Conductivity_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_environment_msgs::msg::Conductivity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::Conductivity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::Conductivity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_environment_msgs__msg__Conductivity
    std::shared_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_environment_msgs__msg__Conductivity
    std::shared_ptr<marine_environment_msgs::msg::Conductivity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Conductivity_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->conductivity != other.conductivity) {
      return false;
    }
    if (this->salinity != other.salinity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Conductivity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Conductivity_

// alias to use template instance with default allocator
using Conductivity =
  marine_environment_msgs::msg::Conductivity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__STRUCT_HPP_
