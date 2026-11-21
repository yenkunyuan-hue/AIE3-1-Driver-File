// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aanderaa_smart_sensor:msg/Turbidity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/turbidity.hpp"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__STRUCT_HPP_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__STRUCT_HPP_

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
# define DEPRECATED__aanderaa_smart_sensor__msg__Turbidity __attribute__((deprecated))
#else
# define DEPRECATED__aanderaa_smart_sensor__msg__Turbidity __declspec(deprecated)
#endif

namespace aanderaa_smart_sensor
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Turbidity_
{
  using Type = Turbidity_<ContainerAllocator>;

  explicit Turbidity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ntu = 0.0f;
    }
  }

  explicit Turbidity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ntu = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ntu_type =
    float;
  _ntu_type ntu;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ntu(
    const float & _arg)
  {
    this->ntu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator> *;
  using ConstRawPtr =
    const aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aanderaa_smart_sensor__msg__Turbidity
    std::shared_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aanderaa_smart_sensor__msg__Turbidity
    std::shared_ptr<aanderaa_smart_sensor::msg::Turbidity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turbidity_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ntu != other.ntu) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turbidity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turbidity_

// alias to use template instance with default allocator
using Turbidity =
  aanderaa_smart_sensor::msg::Turbidity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aanderaa_smart_sensor

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__STRUCT_HPP_
