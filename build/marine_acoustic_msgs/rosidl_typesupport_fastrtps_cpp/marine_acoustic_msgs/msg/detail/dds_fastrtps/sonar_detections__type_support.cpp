// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from marine_acoustic_msgs:msg/SonarDetections.idl
// generated code does not contain a copyright notice
#include "marine_acoustic_msgs/msg/detail/sonar_detections__rosidl_typesupport_fastrtps_cpp.hpp"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__functions.h"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__struct.hpp"

#include <cstddef>
#include <cstdio>
#include <limits>
#include <stdexcept>
#include <string>
#include "rcutils/logging_macros.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "marine_acoustic_msgs/msg/detail/sonar_detections__rosidl_typesupport_fastrtps_c.h"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_with_endpoint(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
bool cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace marine_acoustic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const marine_acoustic_msgs::msg::PingInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  marine_acoustic_msgs::msg::PingInfo &);
size_t get_serialized_size(
  const marine_acoustic_msgs::msg::PingInfo &,
  size_t current_alignment);
size_t
max_serialized_size_PingInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const marine_acoustic_msgs::msg::PingInfo &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const marine_acoustic_msgs::msg::PingInfo &,
  size_t current_alignment);
size_t
max_serialized_size_key_PingInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_with_endpoint(
  const marine_acoustic_msgs::msg::PingInfo &,
  eprosima::fastcdr::Cdr &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
bool cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr &,
  marine_acoustic_msgs::msg::PingInfo &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace marine_acoustic_msgs

namespace marine_acoustic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const marine_acoustic_msgs::msg::DetectionFlag &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  marine_acoustic_msgs::msg::DetectionFlag &);
size_t get_serialized_size(
  const marine_acoustic_msgs::msg::DetectionFlag &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionFlag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const marine_acoustic_msgs::msg::DetectionFlag &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const marine_acoustic_msgs::msg::DetectionFlag &,
  size_t current_alignment);
size_t
max_serialized_size_key_DetectionFlag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_with_endpoint(
  const marine_acoustic_msgs::msg::DetectionFlag &,
  eprosima::fastcdr::Cdr &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
bool cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr &,
  marine_acoustic_msgs::msg::DetectionFlag &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace marine_acoustic_msgs


namespace marine_acoustic_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_serialize(
  const marine_acoustic_msgs::msg::SonarDetections & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: ping_info
  marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ping_info,
    cdr);

  // Member: flags
  {
    size_t size = ros_message.flags.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.flags[i],
        cdr);
    }
  }

  // Member: two_way_travel_times
  {
    cdr << ros_message.two_way_travel_times;
  }

  // Member: tx_delays
  {
    cdr << ros_message.tx_delays;
  }

  // Member: intensities
  {
    cdr << ros_message.intensities;
  }

  // Member: tx_angles
  {
    cdr << ros_message.tx_angles;
  }

  // Member: rx_angles
  {
    cdr << ros_message.rx_angles;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs::msg::SonarDetections & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ping_info
  marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ping_info);

  // Member: flags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.flags.resize(size);
    for (size_t i = 0; i < size; i++) {
      marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.flags[i]);
    }
  }

  // Member: two_way_travel_times
  {
    cdr >> ros_message.two_way_travel_times;
  }

  // Member: tx_delays
  {
    cdr >> ros_message.tx_delays;
  }

  // Member: intensities
  {
    cdr >> ros_message.intensities;
  }

  // Member: tx_angles
  {
    cdr >> ros_message.tx_angles;
  }

  // Member: rx_angles
  {
    cdr >> ros_message.rx_angles;
  }

  return true;
}  // NOLINT(readability/fn_size)

// Endpoint-aware serialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_serialize_with_endpoint(
  const marine_acoustic_msgs::msg::SonarDetections & ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  try {
    // Member: header
    std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_with_endpoint(
      ros_message.header,
      cdr, endpoint_info, serialization_context);
    // Member: ping_info
    marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_with_endpoint(
      ros_message.ping_info,
      cdr, endpoint_info, serialization_context);
    // Member: flags
    {
      size_t size = ros_message.flags.size();
      cdr << static_cast<uint32_t>(size);
      for (size_t i = 0; i < size; i++) {
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_with_endpoint(
          ros_message.flags[i],
          cdr, endpoint_info, serialization_context);
      }
    }
    // Member: two_way_travel_times
    {
      cdr << ros_message.two_way_travel_times;
    }
    // Member: tx_delays
    {
      cdr << ros_message.tx_delays;
    }
    // Member: intensities
    {
      cdr << ros_message.intensities;
    }
    // Member: tx_angles
    {
      cdr << ros_message.tx_angles;
    }
    // Member: rx_angles
    {
      cdr << ros_message.rx_angles;
    }
  } catch (const std::exception & e) {
    RCUTILS_LOG_ERROR_NAMED(
      "marine_acoustic_msgs.typesupport_fastrtps_cpp",
      "cdr_serialize_with_endpoint failed: %s", e.what());
    return false;
  }
  return true;
}

// Endpoint-aware deserialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  marine_acoustic_msgs::msg::SonarDetections & ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize_with_endpoint(
    cdr,
    ros_message.header,
    endpoint_info,
    serialization_context);

  // Member: ping_info
  marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize_with_endpoint(
    cdr,
    ros_message.ping_info,
    endpoint_info,
    serialization_context);

  // Member: flags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.flags.resize(size);
    for (size_t i = 0; i < size; i++) {
      marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize_with_endpoint(
        cdr,
        ros_message.flags[i],
        endpoint_info,
        serialization_context);
    }
  }

  // Member: two_way_travel_times
  {
    cdr >> ros_message.two_way_travel_times;
  }

  // Member: tx_delays
  {
    cdr >> ros_message.tx_delays;
  }

  // Member: intensities
  {
    cdr >> ros_message.intensities;
  }

  // Member: tx_angles
  {
    cdr >> ros_message.tx_angles;
  }

  // Member: rx_angles
  {
    cdr >> ros_message.rx_angles;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
get_serialized_size(
  const marine_acoustic_msgs::msg::SonarDetections & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: ping_info
  current_alignment +=
    marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ping_info, current_alignment);

  // Member: flags
  {
    size_t array_size = ros_message.flags.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.flags[index], current_alignment);
    }
  }

  // Member: two_way_travel_times
  {
    size_t array_size = ros_message.two_way_travel_times.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.two_way_travel_times[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tx_delays
  {
    size_t array_size = ros_message.tx_delays.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tx_delays[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: intensities
  {
    size_t array_size = ros_message.intensities.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.intensities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tx_angles
  {
    size_t array_size = ros_message.tx_angles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tx_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rx_angles
  {
    size_t array_size = ros_message.rx_angles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rx_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
max_serialized_size_SonarDetections(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: ping_info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PingInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionFlag(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: two_way_travel_times
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tx_delays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: intensities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: tx_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: rx_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs::msg::SonarDetections;
    is_plain =
      (
      offsetof(DataType, rx_angles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
cdr_serialize_key(
  const marine_acoustic_msgs::msg::SonarDetections & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: ping_info
  marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.ping_info,
    cdr);

  // Member: flags
  {
    size_t size = ros_message.flags.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.flags[i],
        cdr);
    }
  }

  // Member: two_way_travel_times
  {
    cdr << ros_message.two_way_travel_times;
  }

  // Member: tx_delays
  {
    cdr << ros_message.tx_delays;
  }

  // Member: intensities
  {
    cdr << ros_message.intensities;
  }

  // Member: tx_angles
  {
    cdr << ros_message.tx_angles;
  }

  // Member: rx_angles
  {
    cdr << ros_message.rx_angles;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
get_serialized_size_key(
  const marine_acoustic_msgs::msg::SonarDetections & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: ping_info
  current_alignment +=
    marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.ping_info, current_alignment);

  // Member: flags
  {
    size_t array_size = ros_message.flags.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.flags[index], current_alignment);
    }
  }

  // Member: two_way_travel_times
  {
    size_t array_size = ros_message.two_way_travel_times.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.two_way_travel_times[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tx_delays
  {
    size_t array_size = ros_message.tx_delays.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tx_delays[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: intensities
  {
    size_t array_size = ros_message.intensities.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.intensities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: tx_angles
  {
    size_t array_size = ros_message.tx_angles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tx_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: rx_angles
  {
    size_t array_size = ros_message.rx_angles.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rx_angles[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
max_serialized_size_key_SonarDetections(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ping_info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_PingInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_DetectionFlag(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: two_way_travel_times
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tx_delays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: intensities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tx_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_angles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = marine_acoustic_msgs::msg::SonarDetections;
    is_plain =
      (
      offsetof(DataType, rx_angles) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _SonarDetections__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const marine_acoustic_msgs::msg::SonarDetections *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SonarDetections__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<marine_acoustic_msgs::msg::SonarDetections *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SonarDetections__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const marine_acoustic_msgs::msg::SonarDetections *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SonarDetections__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SonarDetections(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

// Endpoint-aware serialization wrapper
static bool _SonarDetections__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<const marine_acoustic_msgs::msg::SonarDetections *>(
    untyped_ros_message);
  return cdr_serialize_with_endpoint(*typed_message, cdr, endpoint_info, serialization_context);
}

// Endpoint-aware deserialization wrapper
static bool _SonarDetections__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<marine_acoustic_msgs::msg::SonarDetections *>(
    untyped_ros_message);
  return cdr_deserialize_with_endpoint(cdr, *typed_message, endpoint_info, serialization_context);
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_marine_acoustic_msgs
has_buffer_fields_SonarDetections()
{
  return has_buffer_fields_marine_acoustic_msgs__msg__SonarDetections();
}

static message_type_support_callbacks_t _SonarDetections__callbacks = {
  "marine_acoustic_msgs::msg",
  "SonarDetections",
  _SonarDetections__cdr_serialize,
  _SonarDetections__cdr_deserialize,
  _SonarDetections__get_serialized_size,
  _SonarDetections__max_serialized_size,
  nullptr,
  has_buffer_fields_SonarDetections(),
  _SonarDetections__cdr_serialize_with_endpoint,
  _SonarDetections__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _SonarDetections__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SonarDetections__callbacks,
  get_message_typesupport_handle_function,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_hash,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description,
  &marine_acoustic_msgs__msg__SonarDetections__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace marine_acoustic_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_marine_acoustic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<marine_acoustic_msgs::msg::SonarDetections>()
{
  return &marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::_SonarDetections__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, marine_acoustic_msgs, msg, SonarDetections)() {
  return &marine_acoustic_msgs::msg::typesupport_fastrtps_cpp::_SonarDetections__handle;
}

#ifdef __cplusplus
}
#endif
