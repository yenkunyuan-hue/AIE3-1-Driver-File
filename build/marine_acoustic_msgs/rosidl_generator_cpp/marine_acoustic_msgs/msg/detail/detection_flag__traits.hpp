// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/DetectionFlag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/detection_flag.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/detection_flag__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionFlag & msg,
  std::ostream & out)
{
  out << "{";
  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionFlag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionFlag & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, marine_acoustic_msgs::msg::DetectionFlag>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).flag);
}

}  // namespace msg

}  // namespace marine_acoustic_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<marine_acoustic_msgs::msg::DetectionFlag>()
{
  return "marine_acoustic_msgs::msg::DetectionFlag";
}

template<>
constexpr const char * name<marine_acoustic_msgs::msg::DetectionFlag>()
{
  return "marine_acoustic_msgs/msg/DetectionFlag";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::DetectionFlag>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::DetectionFlag>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marine_acoustic_msgs::msg::DetectionFlag>
  : std::true_type {};

template<>
struct MessageTraits<marine_acoustic_msgs::msg::DetectionFlag>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "flag",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__DETECTION_FLAG__TRAITS_HPP_
