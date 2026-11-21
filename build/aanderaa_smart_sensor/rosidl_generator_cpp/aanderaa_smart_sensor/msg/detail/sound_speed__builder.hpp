// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aanderaa_smart_sensor:msg/SoundSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/sound_speed.hpp"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__SOUND_SPEED__BUILDER_HPP_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__SOUND_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aanderaa_smart_sensor/msg/detail/sound_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aanderaa_smart_sensor
{

namespace msg
{

namespace builder
{

class Init_SoundSpeed_sound_speed
{
public:
  explicit Init_SoundSpeed_sound_speed(::aanderaa_smart_sensor::msg::SoundSpeed & msg)
  : msg_(msg)
  {}
  ::aanderaa_smart_sensor::msg::SoundSpeed sound_speed(::aanderaa_smart_sensor::msg::SoundSpeed::_sound_speed_type arg)
  {
    msg_.sound_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::SoundSpeed msg_;
};

class Init_SoundSpeed_header
{
public:
  Init_SoundSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoundSpeed_sound_speed header(::aanderaa_smart_sensor::msg::SoundSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SoundSpeed_sound_speed(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::SoundSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aanderaa_smart_sensor::msg::SoundSpeed>()
{
  return aanderaa_smart_sensor::msg::builder::Init_SoundSpeed_header();
}

}  // namespace aanderaa_smart_sensor

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__SOUND_SPEED__BUILDER_HPP_
