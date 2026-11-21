// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aanderaa_smart_sensor:msg/Turbidity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aanderaa_smart_sensor/msg/turbidity.hpp"


#ifndef AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__BUILDER_HPP_
#define AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aanderaa_smart_sensor/msg/detail/turbidity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aanderaa_smart_sensor
{

namespace msg
{

namespace builder
{

class Init_Turbidity_ntu
{
public:
  explicit Init_Turbidity_ntu(::aanderaa_smart_sensor::msg::Turbidity & msg)
  : msg_(msg)
  {}
  ::aanderaa_smart_sensor::msg::Turbidity ntu(::aanderaa_smart_sensor::msg::Turbidity::_ntu_type arg)
  {
    msg_.ntu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Turbidity msg_;
};

class Init_Turbidity_header
{
public:
  Init_Turbidity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turbidity_ntu header(::aanderaa_smart_sensor::msg::Turbidity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Turbidity_ntu(msg_);
  }

private:
  ::aanderaa_smart_sensor::msg::Turbidity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aanderaa_smart_sensor::msg::Turbidity>()
{
  return aanderaa_smart_sensor::msg::builder::Init_Turbidity_header();
}

}  // namespace aanderaa_smart_sensor

#endif  // AANDERAA_SMART_SENSOR__MSG__DETAIL__TURBIDITY__BUILDER_HPP_
