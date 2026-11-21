// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_environment_msgs:msg/Density.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/density.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__BUILDER_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_environment_msgs/msg/detail/density__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_environment_msgs
{

namespace msg
{

namespace builder
{

class Init_Density_density
{
public:
  explicit Init_Density_density(::marine_environment_msgs::msg::Density & msg)
  : msg_(msg)
  {}
  ::marine_environment_msgs::msg::Density density(::marine_environment_msgs::msg::Density::_density_type arg)
  {
    msg_.density = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_environment_msgs::msg::Density msg_;
};

class Init_Density_header
{
public:
  Init_Density_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Density_density header(::marine_environment_msgs::msg::Density::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Density_density(msg_);
  }

private:
  ::marine_environment_msgs::msg::Density msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_environment_msgs::msg::Density>()
{
  return marine_environment_msgs::msg::builder::Init_Density_header();
}

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__DENSITY__BUILDER_HPP_
