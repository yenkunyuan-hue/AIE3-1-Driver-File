// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_environment_msgs:msg/Conductivity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/conductivity.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__TRAITS_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "marine_environment_msgs/msg/detail/conductivity__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace marine_environment_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Conductivity & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: conductivity
  {
    out << "conductivity: ";
    rosidl_generator_traits::value_to_yaml(msg.conductivity, out);
    out << ", ";
  }

  // member: salinity
  {
    out << "salinity: ";
    rosidl_generator_traits::value_to_yaml(msg.salinity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conductivity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: conductivity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conductivity: ";
    rosidl_generator_traits::value_to_yaml(msg.conductivity, out);
    out << "\n";
  }

  // member: salinity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "salinity: ";
    rosidl_generator_traits::value_to_yaml(msg.salinity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conductivity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, marine_environment_msgs::msg::Conductivity>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).conductivity,
    std::forward<T>(msg).salinity);
}

}  // namespace msg

}  // namespace marine_environment_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<marine_environment_msgs::msg::Conductivity>()
{
  return "marine_environment_msgs::msg::Conductivity";
}

template<>
constexpr const char * name<marine_environment_msgs::msg::Conductivity>()
{
  return "marine_environment_msgs/msg/Conductivity";
}

template<>
struct has_fixed_size<marine_environment_msgs::msg::Conductivity>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<marine_environment_msgs::msg::Conductivity>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<marine_environment_msgs::msg::Conductivity>
  : std::true_type {};

template<>
struct MessageTraits<marine_environment_msgs::msg::Conductivity>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "conductivity",
    "salinity",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__CONDUCTIVITY__TRAITS_HPP_
