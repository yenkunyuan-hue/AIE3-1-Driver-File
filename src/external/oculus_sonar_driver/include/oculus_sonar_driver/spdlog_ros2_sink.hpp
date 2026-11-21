#pragma once

#include <mutex>
#include <rclcpp/rclcpp.hpp>

#include "spdlog/details/null_mutex.h"
#include "spdlog/sinks/base_sink.h"
#include "spdlog/spdlog.h"

namespace ROS2Spdlog {

std::shared_ptr<spdlog::logger> enable(rclcpp::Logger logger);

}

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

    // \todo This double conversion (-> to_string -> to const char *) feels
    // inefficient trace = SPDLOG_LEVEL_TRACE, debug = SPDLOG_LEVEL_DEBUG, info
    // = SPDLOG_LEVEL_INFO, warn = SPDLOG_LEVEL_WARN, err = SPDLOG_LEVEL_ERROR,
    // critical = SPDLOG_LEVEL_CRITICAL,

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

using ROS2SpdlogSink_mt = ROS2SpdlogSink<std::mutex>;
using ROS2SpdlogSink_st = ROS2SpdlogSink<spdlog::details::null_mutex>;

// logger factory methods
template <typename Factory = spdlog::synchronous_factory>
std::shared_ptr<spdlog::logger> ROS2SpdlogLogger_st(std::string logger_name,
                                                    rclcpp::Logger logger) {
  auto l = Factory::template create<ROS2SpdlogSink_st>(logger_name, logger);
  l->set_formatter(std::make_unique<spdlog::pattern_formatter>(
      "%v", spdlog::pattern_time_type::local, std::string("")));
  return l;
}

template <typename Factory = spdlog::synchronous_factory>
std::shared_ptr<spdlog::logger> ROS2SpdlogLogger_mt(std::string logger_name,
                                                    rclcpp::Logger logger) {
  auto l = Factory::template create<ROS2SpdlogSink_mt>(logger_name, logger);
  l->set_formatter(std::make_unique<spdlog::pattern_formatter>(
      "%v", spdlog::pattern_time_type::local, std::string("")));
  return l;
}
