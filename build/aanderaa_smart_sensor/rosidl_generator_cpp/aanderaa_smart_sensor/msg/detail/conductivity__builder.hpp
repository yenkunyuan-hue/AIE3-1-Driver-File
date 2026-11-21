// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aanderaa_smart_sensor:msg/Conductivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/conductivity.hpp"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__CONDUCTIVITY__BUILDER_HPP_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__CONDUCTIVITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aanderaa_smart_sensor/msg/detail/conductivity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aanderaa_smart_sensor
{

namespace msg
{

namespace builder
{

class Init_Conductivity_salinity
{
public:
  explicit Init_Conductivity_salinity(::aanderaa_smart_sensor::msg::Conductivity & msg)
  : msg_(msg)
  {}
  ::aanderaa_smart_sensor::msg::Conductivity salinity(::aanderaa_smart_sensor::msg::Conductivity::_salinity_type arg)
  {
    msg_.salinity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Conductivity msg_;
};

class Init_Conductivity_conductivity
{
public:
  explicit Init_Conductivity_conductivity(::aanderaa_smart_sensor::msg::Conductivity & msg)
  : msg_(msg)
  {}
  Init_Conductivity_salinity conductivity(::aanderaa_smart_sensor::msg::Conductivity::_conductivity_type arg)
  {
    msg_.conductivity = std::move(arg);
    return Init_Conductivity_salinity(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Conductivity msg_;
};

class Init_Conductivity_header
{
public:
  Init_Conductivity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Conductivity_conductivity header(::aanderaa_smart_sensor::msg::Conductivity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Conductivity_conductivity(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Conductivity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aanderaa_smart_sensor::msg::Conductivity>()
{
  return aanderaa_smart_sensor::msg::builder::Init_Conductivity_header();
}

}  // namespace aanderaa_smart_sensor

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__CONDUCTIVITY__BUILDER_HPP_
