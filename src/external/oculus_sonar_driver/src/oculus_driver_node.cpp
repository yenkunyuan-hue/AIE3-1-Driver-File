// Copyright 2020-2022 UW-APL
// Authors: Aaron Marburg, Laura Lindzey
// ROS2 port

#include <oculus_sonar_driver/spdlog2ros2.hpp>

#include "liboculus/Logger.h"
#include "oculus_sonar_driver/oculus_driver_node.hpp"
#include "oculus_sonar_driver/spdlog_ros2_sink.hpp"
#include <rcl_interfaces/msg/set_parameters_result.hpp>

namespace oculus_sonar_driver {

OculusDriver::OculusDriver(const rclcpp::NodeOptions &options)
    : rclcpp::Node("oculus_driver", options), io_srv_(),
      data_rx_(io_srv_.context()), status_rx_(io_srv_.context()) {

  // Configure spdlog in liboculus
  auto logger =
      Spdlog2Ros2Logger_mt("oculus", get_logger().get_child("liboculus"));
  liboculus::Logger::set_logger(logger);

  param_listener_ = std::make_shared<oculus_sonar_driver::ParamListener>(
      get_node_parameters_interface());
  auto params = param_listener_->get_params();

  setupPublishers();

  // Set up data_rx_ callbacks for SimplePingResultV1 and V2
  data_rx_.setCallback<liboculus::SimplePingResultV1>(
      std::bind(&OculusDriver::pingCallback<liboculus::SimplePingResultV1>,
                this, std::placeholders::_1));
  data_rx_.setCallback<liboculus::SimplePingResultV2>(
      std::bind(&OculusDriver::pingCallback<liboculus::SimplePingResultV2>,
                this, std::placeholders::_1));

  // Set up on-connect callback to send current config
  data_rx_.setOnConnectCallback(
      [this]() { data_rx_.sendSimpleFireMessage(sonar_config_); });

  ip_address_ = params.ip_address;

  // Set up raw data publisher if/when available
  // data_rx_.setRawPublisher(raw_data_pub_);

  // Handle auto IP detection or direct connect
  RCLCPP_INFO_STREAM(this->get_logger(), "ip_address " << ip_address_);
  if (ip_address_ == "auto") {
    RCLCPP_INFO(this->get_logger(), "Attempting to auto-detect sonar");
    status_rx_.setCallback(
        [this](const liboculus::SonarStatus &status, bool is_valid) {
          if (!is_valid || data_rx_.isConnected())
            return;
          RCLCPP_WARN(this->get_logger(), "Auto-detected IP: %s",
                      status.ipAddr().to_string().c_str());
          data_rx_.connect(status.ipAddr());
        });
  } else {
    RCLCPP_INFO(this->get_logger(), "Opening sonar at %s", ip_address_.c_str());
    data_rx_.connect(ip_address_);
  }

  param_listener_->setUserCallback(
      std::bind(&OculusDriver::configCallback, this, std::placeholders::_1));

  io_srv_.start();
}

OculusDriver::~OculusDriver() {
  io_srv_.stop();
  io_srv_.join();
}

void OculusDriver::setupPublishers() {
  imaging_sonar_pub_ =
      this->create_publisher<marine_acoustic_msgs::msg::ProjectedSonarImage>(
          "sonar_image", rclcpp::SensorDataQoS());
}

void OculusDriver::configCallback(const oculus_sonar_driver::Params &params) {
  sonar_config_.setRange(params.range);
  sonar_config_.setGainPercent(params.gain);
  sonar_config_.setGamma(params.gamma);

  // Map ping_rate to liboculus enums
  switch (params.ping_rate) {
  case 0:
    sonar_config_.setPingRate(pingRateNormal);
    break;
  case 1:
    sonar_config_.setPingRate(pingRateHigh);
    break;
  case 2:
    sonar_config_.setPingRate(pingRateHighest);
    break;
  case 3:
    sonar_config_.setPingRate(pingRateLow);
    break;
  case 4:
    sonar_config_.setPingRate(pingRateLowest);
    break;
  case 5:
    sonar_config_.setPingRate(pingRateStandby);
    break;
  default:
    RCLCPP_WARN(this->get_logger(), "Unknown ping rate %ld", params.ping_rate);
  }

  // Map freq_mode to liboculus enums
  switch (params.freq_mode) {
  case 1:
    sonar_config_.setFreqMode(liboculus::OCULUS_LOW_FREQ);
    break;
  case 2:
    sonar_config_.setFreqMode(liboculus::OCULUS_HIGH_FREQ);
    break;
  default:
    RCLCPP_WARN(this->get_logger(), "Unknown frequency mode %ld",
                params.freq_mode);
  }

  sonar_config_.sendRangeAsMeters(params.send_range_as_meters)
      .setSendGain(params.send_gain)
      .setSimpleReturn(params.send_simple_return)
      .setGainAssistance(params.gain_assistance);

  if (params.salinity_ppt >= 0.0) {
    sonar_config_.setSalinity(params.salinity_ppt).setSpeedOfSound(0.0);
  } else {
    sonar_config_.setSalinity(-1).setSpeedOfSound(params.speed_of_sound_ms);
  }

  // num_beams: 0=256, 1=512
  if (params.num_beams == 0) {
    sonar_config_.use256Beams();
  } else {
    sonar_config_.use512Beams();
  }

  // data_size: 1=8bit, 2=16bit, 4=32bit
  switch (params.data_size) {
  case 1:
    sonar_config_.setDataSize(dataSize8Bit);
    break;
  case 2:
    sonar_config_.setDataSize(dataSize16Bit);
    break;
  case 4:
    sonar_config_.setDataSize(dataSize32Bit);
    break;
  default:
    RCLCPP_WARN(this->get_logger(), "Unknown data size %ld", params.data_size);
  }

  // Update the sonar with new params
  if (data_rx_.isConnected()) {
    data_rx_.sendSimpleFireMessage(sonar_config_);
  }
}

// Explicit template instantiation if needed
// template void
// oculus_sonar_driver::OculusDriver::pingCallback<YourPingType>(const
// YourPingType &);

} // namespace oculus_sonar_driver

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(oculus_sonar_driver::OculusDriver)
