// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/spectral_reading.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__STRUCT_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__STRUCT_HPP_

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
# define DEPRECATED__marine_environment_msgs__msg__SpectralReading __attribute__((deprecated))
#else
# define DEPRECATED__marine_environment_msgs__msg__SpectralReading __declspec(deprecated)
#endif

namespace marine_environment_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpectralReading_
{
  using Type = SpectralReading_<ContainerAllocator>;

  explicit SpectralReading_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unit = "";
    }
  }

  explicit SpectralReading_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unit = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _channel_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _channel_name_type channel_name;
  using _wavelength_nm_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _wavelength_nm_type wavelength_nm;
  using _fwhm_nm_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _fwhm_nm_type fwhm_nm;
  using _intensity_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _intensity_type intensity;
  using _raw_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _raw_type raw;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unit_type unit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__channel_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->channel_name = _arg;
    return *this;
  }
  Type & set__wavelength_nm(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->wavelength_nm = _arg;
    return *this;
  }
  Type & set__fwhm_nm(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->fwhm_nm = _arg;
    return *this;
  }
  Type & set__intensity(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->intensity = _arg;
    return *this;
  }
  Type & set__raw(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->raw = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    marine_environment_msgs::msg::SpectralReading_<ContainerAllocator> *;
  using ConstRawPtr =
    const marine_environment_msgs::msg::SpectralReading_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::SpectralReading_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      marine_environment_msgs::msg::SpectralReading_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__marine_environment_msgs__msg__SpectralReading
    std::shared_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__marine_environment_msgs__msg__SpectralReading
    std::shared_ptr<marine_environment_msgs::msg::SpectralReading_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpectralReading_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->channel_name != other.channel_name) {
      return false;
    }
    if (this->wavelength_nm != other.wavelength_nm) {
      return false;
    }
    if (this->fwhm_nm != other.fwhm_nm) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    if (this->raw != other.raw) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpectralReading_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpectralReading_

// alias to use template instance with default allocator
using SpectralReading =
  marine_environment_msgs::msg::SpectralReading_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__STRUCT_HPP_
