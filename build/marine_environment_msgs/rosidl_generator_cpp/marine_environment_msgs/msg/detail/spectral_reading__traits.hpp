// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marine_environment_msgs:msg/SpectralReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "marine_environment_msgs/msg/spectral_reading.hpp"


#ifndef MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__TRAITS_HPP_
#define MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "marine_environment_msgs/msg/detail/spectral_reading__struct.hpp"
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
  const SpectralReading & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: channel_name
  {
    if (msg.channel_name.size() == 0) {
      out << "channel_name: []";
    } else {
      out << "channel_name: [";
      size_t pending_items = msg.channel_name.size();
      for (auto item : msg.channel_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wavelength_nm
  {
    if (msg.wavelength_nm.size() == 0) {
      out << "wavelength_nm: []";
    } else {
      out << "wavelength_nm: [";
      size_t pending_items = msg.wavelength_nm.size();
      for (auto item : msg.wavelength_nm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fwhm_nm
  {
    if (msg.fwhm_nm.size() == 0) {
      out << "fwhm_nm: []";
    } else {
      out << "fwhm_nm: [";
      size_t pending_items = msg.fwhm_nm.size();
      for (auto item : msg.fwhm_nm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensity
  {
    if (msg.intensity.size() == 0) {
      out << "intensity: []";
    } else {
      out << "intensity: [";
      size_t pending_items = msg.intensity.size();
      for (auto item : msg.intensity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw
  {
    if (msg.raw.size() == 0) {
      out << "raw: []";
    } else {
      out << "raw: [";
      size_t pending_items = msg.raw.size();
      for (auto item : msg.raw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpectralReading & msg,
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

  // member: channel_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel_name.size() == 0) {
      out << "channel_name: []\n";
    } else {
      out << "channel_name:\n";
      for (auto item : msg.channel_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wavelength_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wavelength_nm.size() == 0) {
      out << "wavelength_nm: []\n";
    } else {
      out << "wavelength_nm:\n";
      for (auto item : msg.wavelength_nm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fwhm_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fwhm_nm.size() == 0) {
      out << "fwhm_nm: []\n";
    } else {
      out << "fwhm_nm:\n";
      for (auto item : msg.fwhm_nm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensity.size() == 0) {
      out << "intensity: []\n";
    } else {
      out << "intensity:\n";
      for (auto item : msg.intensity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw.size() == 0) {
      out << "raw: []\n";
    } else {
      out << "raw:\n";
      for (auto item : msg.raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpectralReading & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, marine_environment_msgs::msg::SpectralReading>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).channel_name,
    std::forward<T>(msg).wavelength_nm,
    std::forward<T>(msg).fwhm_nm,
    std::forward<T>(msg).intensity,
    std::forward<T>(msg).raw,
    std::forward<T>(msg).unit);
}

}  // namespace msg

}  // namespace marine_environment_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<marine_environment_msgs::msg::SpectralReading>()
{
  return "marine_environment_msgs::msg::SpectralReading";
}

template<>
constexpr const char * name<marine_environment_msgs::msg::SpectralReading>()
{
  return "marine_environment_msgs/msg/SpectralReading";
}

template<>
struct has_fixed_size<marine_environment_msgs::msg::SpectralReading>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marine_environment_msgs::msg::SpectralReading>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marine_environment_msgs::msg::SpectralReading>
  : std::true_type {};

template<>
struct MessageTraits<marine_environment_msgs::msg::SpectralReading>
{
  static constexpr std::size_t member_count = 7;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "channel_name",
    "wavelength_nm",
    "fwhm_nm",
    "intensity",
    "raw",
    "unit",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MARINE_ENVIRONMENT_MSGS__MSG__DETAIL__SPECTRAL_READING__TRAITS_HPP_
