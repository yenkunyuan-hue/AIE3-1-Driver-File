// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_environment_msgs:msg/Turbidity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/turbidity.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__TURBIDITY__BUILDER_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__TURBIDITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_environment_msgs/msg/detail/turbidity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_environment_msgs
{

namespace msg
{

namespace builder
{

class Init_Turbidity_ntu
{
public:
  explicit Init_Turbidity_ntu(::marine_environment_msgs::msg::Turbidity & msg)
  : msg_(msg)
  {}
  ::marine_environment_msgs::msg::Turbidity ntu(::marine_environment_msgs::msg::Turbidity::_ntu_type arg)
  {
    msg_.ntu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_environment_msgs::msg::Turbidity msg_;
};

class Init_Turbidity_header
{
public:
  Init_Turbidity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turbidity_ntu header(::marine_environment_msgs::msg::Turbidity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Turbidity_ntu(msg_);
  }

private:
  ::marine_environment_msgs::msg::Turbidity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_environment_msgs::msg::Turbidity>()
{
  return marine_environment_msgs::msg::builder::Init_Turbidity_header();
}

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__TURBIDITY__BUILDER_HPP_
