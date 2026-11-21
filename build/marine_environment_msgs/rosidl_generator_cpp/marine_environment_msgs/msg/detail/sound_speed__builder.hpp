// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from marine_environment_msgs:msg/SoundSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/sound_speed.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__BUILDER_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "marine_environment_msgs/msg/detail/sound_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace marine_environment_msgs
{

namespace msg
{

namespace builder
{

class Init_SoundSpeed_sound_speed
{
public:
  explicit Init_SoundSpeed_sound_speed(::marine_environment_msgs::msg::SoundSpeed & msg)
  : msg_(msg)
  {}
  ::marine_environment_msgs::msg::SoundSpeed sound_speed(::marine_environment_msgs::msg::SoundSpeed::_sound_speed_type arg)
  {
    msg_.sound_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::marine_environment_msgs::msg::SoundSpeed msg_;
};

class Init_SoundSpeed_header
{
public:
  Init_SoundSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundSpeed_sound_speed header(::marine_environment_msgs::msg::SoundSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SoundSpeed_sound_speed(msg_);
  }

private:
  ::marine_environment_msgs::msg::SoundSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::marine_environment_msgs::msg::SoundSpeed>()
{
  return marine_environment_msgs::msg::builder::Init_SoundSpeed_header();
}

}  // namespace marine_environment_msgs

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SOUND_SPEED__BUILDER_HPP_
