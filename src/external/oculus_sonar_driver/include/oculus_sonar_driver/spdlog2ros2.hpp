//
// Copyright (c) 2026 University of Washington.
//
// Licensed under the MIT license. See LICENSE file in the project root for
// details.
//
// The original of this file is in the ROS2 package "spdlog2ros2":
//      https://gitlab.com/apl-ocean-engineering/spdlog2ros2
//

#pragma once

#include <mutex>
#include <rclcpp/rclcpp.hpp>

#include "spdlog/details/null_mutex.h"
#include "spdlog/pattern_formatter.h"
#include "spdlog/sinks/base_sink.h"
#include "spdlog/spdlog.h"

namespace spdlog2ros2 {

std::shared_ptr<spdlog::logger> enable(rclcpp::Logger logger);

template <typename Mutex>
class ROS2SpdlogSink : public spdlog::sinks::base_sink<Mutex> {
public:
  ROS2SpdlogSink(rclcpp::Logger logger) : logger_(logger) { ; }

protected:
  rclcpp::Logger logger_;

  void sink_it_(const spdlog::details::log_msg &msg) override {
    // log_msg is a struct containing the log entry info like level, timestamp,
    // thread id etc. msg.payload (before v1.3.0: msg.raw) contains pre
    // formatted log

    // If needed (very likely but not mandatory), the sink formats the message
    // before sending it to its final destination:
    spdlog::memory_buf_t formatted;
    spdlog::sinks::base_sink<Mutex>::formatter_->format(msg, formatted);

    auto const fmtmsg = fmt::to_string(formatted);

    if ((msg.level == spdlog::level::trace) ||
        (msg.level == spdlog::level::debug)) {
      RCLCPP_DEBUG(logger_, fmtmsg.c_str());
    } else if ((msg.level == spdlog::level::info)) {
      RCLCPP_INFO(logger_, fmtmsg.c_str());
    } else if ((msg.level == spdlog::level::warn)) {
      RCLCPP_WARN(logger_, fmtmsg.c_str());
    } else if ((msg.level == spdlog::level::err)) {
      RCLCPP_ERROR(logger_, fmtmsg.c_str());
    } else if ((msg.level == spdlog::level::critical)) {
      RCLCPP_FATAL(logger_, fmtmsg.c_str());
    } else {
      RCLCPP_WARN(logger_, fmtmsg.c_str());
    }
  }

  void flush_() override { std::cout << std::flush; }
};

} // namespace spdlog2ros2

using Spdlog2Ros2Sink_mt = spdlog2ros2::ROS2SpdlogSink<std::mutex>;
using Spdlog2Ros2Sink_st =
    spdlog2ros2::ROS2SpdlogSink<spdlog::details::null_mutex>;

// logger factory methods
template <typename Factory = spdlog::synchronous_factory>
std::shared_ptr<spdlog::logger> Spdlog2Ros2Logger_st(std::string logger_name,
                                                     rclcpp::Logger logger) {
  auto l = Factory::template create<Spdlog2Ros2Sink_st>(logger_name, logger);

  // Update formatter to _not_ send EOL
  l->set_formatter(std::make_unique<spdlog::pattern_formatter>(
      "%v", spdlog::pattern_time_type::local, std::string("")));
  return l;
}

template <typename Factory = spdlog::synchronous_factory>
std::shared_ptr<spdlog::logger> Spdlog2Ros2Logger_mt(std::string logger_name,
                                                     rclcpp::Logger logger) {
  auto l = Factory::template create<Spdlog2Ros2Sink_mt>(logger_name, logger);

  // Update formatter to _not_ send EOL
  l->set_formatter(std::make_unique<spdlog::pattern_formatter>(
      "%v", spdlog::pattern_time_type::local, std::string("")));
  return l;
}
