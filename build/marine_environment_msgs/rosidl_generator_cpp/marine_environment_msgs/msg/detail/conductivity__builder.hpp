// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_environment_msgs:msg/Conductivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/conductivity.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__BUILDER_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_environment_msgs/msg/detail/conductivity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_environment_msgs
{

namespace msg
{

namespace builder
{

class Init_Conductivity_salinity
{
public:
  explicit Init_Conductivity_salinity(::marine_environment_msgs::msg::Conductivity & msg)
  : msg_(msg)
  {}
  ::marine_environment_msgs::msg::Conductivity salinity(::marine_environment_msgs::msg::Conductivity::_salinity_type arg)
  {
    msg_.salinity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_environment_msgs::msg::Conductivity msg_;
};

class Init_Conductivity_conductivity
{
public:
  explicit Init_Conductivity_conductivity(::marine_environment_msgs::msg::Conductivity & msg)
  : msg_(msg)
  {}
  Init_Conductivity_salinity conductivity(::marine_environment_msgs::msg::Conductivity::_conductivity_type arg)
  {
    msg_.conductivity = std::move(arg);
    return Init_Conductivity_salinity(msg_);
  }

private:
  ::marine_environment_msgs::msg::Conductivity msg_;
};

class Init_Conductivity_header
{
public:
  Init_Conductivity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Conductivity_conductivity header(::marine_environment_msgs::msg::Conductivity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Conductivity_conductivity(msg_);
  }

private:
  ::marine_environment_msgs::msg::Conductivity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_environment_msgs::msg::Conductivity>()
{
  return marine_environment_msgs::msg::builder::Init_Conductivity_header();
}

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__BUILDER_HPP_
