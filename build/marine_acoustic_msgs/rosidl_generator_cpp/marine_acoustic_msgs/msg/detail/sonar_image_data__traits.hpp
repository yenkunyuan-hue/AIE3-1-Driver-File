// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/SonarImageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/sonar_image_data.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/sonar_image_data__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SonarImageData & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_bigendian
  {
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << ", ";
  }

  // member: dtype
  {
    out << "dtype: ";
    rosidl_generator_traits::value_to_yaml(msg.dtype, out);
    out << ", ";
  }

  // member: beam_count
  {
    out << "beam_count: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_count, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SonarImageData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_bigendian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << "\n";
  }

  // member: dtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dtype: ";
    rosidl_generator_traits::value_to_yaml(msg.dtype, out);
    out << "\n";
  }

  // member: beam_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_count: ";
    rosidl_generator_traits::value_to_yaml(msg.beam_count, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SonarImageData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, marine_acoustic_msgs::msg::SonarImageData>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).is_bigendian,
    std::forward<T>(msg).dtype,
    std::forward<T>(msg).beam_count,
    std::forward<T>(msg).data);
}

}  // namespace msg

}  // namespace marine_acoustic_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<marine_acoustic_msgs::msg::SonarImageData>()
{
  return "marine_acoustic_msgs::msg::SonarImageData";
}

template<>
constexpr const char * name<marine_acoustic_msgs::msg::SonarImageData>()
{
  return "marine_acoustic_msgs/msg/SonarImageData";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::SonarImageData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::SonarImageData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marine_acoustic_msgs::msg::SonarImageData>
  : std::true_type {};

template<>
struct MessageTraits<marine_acoustic_msgs::msg::SonarImageData>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "is_bigendian",
    "dtype",
    "beam_count",
    "data",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__SONAR_IMAGE_DATA__TRAITS_HPP_
