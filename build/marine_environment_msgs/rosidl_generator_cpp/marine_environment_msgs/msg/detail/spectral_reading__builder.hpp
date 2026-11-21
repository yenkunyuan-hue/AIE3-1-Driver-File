// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/spectral_reading.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__BUILDER_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_environment_msgs/msg/detail/spectral_reading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_environment_msgs
{

namespace msg
{

namespace builder
{

class Init_SpectralReading_unit
{
public:
  explicit Init_SpectralReading_unit(::marine_environment_msgs::msg::SpectralReading & msg)
  : msg_(msg)
  {}
  ::marine_environment_msgs::msg::SpectralReading unit(::marine_environment_msgs::msg::SpectralReading::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

class Init_SpectralReading_raw
{
public:
  explicit Init_SpectralReading_raw(::marine_environment_msgs::msg::SpectralReading & msg)
  : msg_(msg)
  {}
  Init_SpectralReading_unit raw(::marine_environment_msgs::msg::SpectralReading::_raw_type arg)
  {
    msg_.raw = std::move(arg);
    return Init_SpectralReading_unit(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

class Init_SpectralReading_intensity
{
public:
  explicit Init_SpectralReading_intensity(::marine_environment_msgs::msg::SpectralReading & msg)
  : msg_(msg)
  {}
  Init_SpectralReading_raw intensity(::marine_environment_msgs::msg::SpectralReading::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return Init_SpectralReading_raw(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

class Init_SpectralReading_fwhm_nm
{
public:
  explicit Init_SpectralReading_fwhm_nm(::marine_environment_msgs::msg::SpectralReading & msg)
  : msg_(msg)
  {}
  Init_SpectralReading_intensity fwhm_nm(::marine_environment_msgs::msg::SpectralReading::_fwhm_nm_type arg)
  {
    msg_.fwhm_nm = std::move(arg);
    return Init_SpectralReading_intensity(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

class Init_SpectralReading_wavelength_nm
{
public:
  explicit Init_SpectralReading_wavelength_nm(::marine_environment_msgs::msg::SpectralReading & msg)
  : msg_(msg)
  {}
  Init_SpectralReading_fwhm_nm wavelength_nm(::marine_environment_msgs::msg::SpectralReading::_wavelength_nm_type arg)
  {
    msg_.wavelength_nm = std::move(arg);
    return Init_SpectralReading_fwhm_nm(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

class Init_SpectralReading_channel_name
{
public:
  explicit Init_SpectralReading_channel_name(::marine_environment_msgs::msg::SpectralReading & msg)
  : msg_(msg)
  {}
  Init_SpectralReading_wavelength_nm channel_name(::marine_environment_msgs::msg::SpectralReading::_channel_name_type arg)
  {
    msg_.channel_name = std::move(arg);
    return Init_SpectralReading_wavelength_nm(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

class Init_SpectralReading_header
{
public:
  Init_SpectralReading_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpectralReading_channel_name header(::marine_environment_msgs::msg::SpectralReading::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpectralReading_channel_name(msg_);
  }

private:
  ::marine_environment_msgs::msg::SpectralReading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_environment_msgs::msg::SpectralReading>()
{
  return marine_environment_msgs::msg::builder::Init_SpectralReading_header();
}

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__BUILDER_HPP_
