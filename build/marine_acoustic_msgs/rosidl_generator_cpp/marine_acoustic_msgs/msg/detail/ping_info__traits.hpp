// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_acoustic_msgs:msg/PingInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_acoustic_msgs/msg/ping_info.hpp"


#ifndef MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__TRAITS_HPP_
#define MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "marine_acoustic_msgs/msg/detail/ping_info__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marine_acoustic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PingInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: sound_speed
  {
    out << "sound_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_speed, out);
    out << ", ";
  }

  // member: tx_beamwidths
  {
    if (msg.tx_beamwidths.size() == 0) {
      out << "tx_beamwidths: []";
    } else {
      out << "tx_beamwidths: [";
      size_t pending_items = msg.tx_beamwidths.size();
      for (auto item : msg.tx_beamwidths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rx_beamwidths
  {
    if (msg.rx_beamwidths.size() == 0) {
      out << "rx_beamwidths: []";
    } else {
      out << "rx_beamwidths: [";
      size_t pending_items = msg.rx_beamwidths.size();
      for (auto item : msg.rx_beamwidths) {
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
  const PingInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: sound_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_speed, out);
    out << "\n";
  }

  // member: tx_beamwidths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tx_beamwidths.size() == 0) {
      out << "tx_beamwidths: []\n";
    } else {
      out << "tx_beamwidths:\n";
      for (auto item : msg.tx_beamwidths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rx_beamwidths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rx_beamwidths.size() == 0) {
      out << "rx_beamwidths: []\n";
    } else {
      out << "rx_beamwidths:\n";
      for (auto item : msg.rx_beamwidths) {
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

inline std::string to_yaml(const PingInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, marine_acoustic_msgs::msg::PingInfo>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).frequency,
    std::forward<T>(msg).sound_speed,
    std::forward<T>(msg).tx_beamwidths,
    std::forward<T>(msg).rx_beamwidths);
}

}  // namespace msg

}  // namespace marine_acoustic_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<marine_acoustic_msgs::msg::PingInfo>()
{
  return "marine_acoustic_msgs::msg::PingInfo";
}

template<>
constexpr const char * name<marine_acoustic_msgs::msg::PingInfo>()
{
  return "marine_acoustic_msgs/msg/PingInfo";
}

template<>
struct has_fixed_size<marine_acoustic_msgs::msg::PingInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marine_acoustic_msgs::msg::PingInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marine_acoustic_msgs::msg::PingInfo>
  : std::true_type {};

template<>
struct MessageTraits<marine_acoustic_msgs::msg::PingInfo>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "frequency",
    "sound_speed",
    "tx_beamwidths",
    "rx_beamwidths",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ACOUSTIC_MSGS__MSG__DETAIL__PING_INFO__TRAITS_HPP_
