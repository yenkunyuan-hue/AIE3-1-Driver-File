// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aanderaa_smart_sensor:msg/Density.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/density.hpp"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__DENSITY__BUILDER_HPP_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__DENSITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aanderaa_smart_sensor/msg/detail/density__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aanderaa_smart_sensor
{

namespace msg
{

namespace builder
{

class Init_Density_density
{
public:
  explicit Init_Density_density(::aanderaa_smart_sensor::msg::Density & msg)
  : msg_(msg)
  {}
  ::aanderaa_smart_sensor::msg::Density density(::aanderaa_smart_sensor::msg::Density::_density_type arg)
  {
    msg_.density = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Density msg_;
};

class Init_Density_header
{
public:
  Init_Density_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Density_density header(::aanderaa_smart_sensor::msg::Density::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Density_density(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Density msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aanderaa_smart_sensor::msg::Density>()
{
  return aanderaa_smart_sensor::msg::builder::Init_Density_header();
}

}  // namespace aanderaa_smart_sensor

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__DENSITY__BUILDER_HPP_
