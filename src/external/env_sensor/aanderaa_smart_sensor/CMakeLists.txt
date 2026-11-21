cmake_minimum_required(VERSION 3.8)
project(aanderaa_smart_sensor)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Conductivity.msg"
  "msg/Density.msg"
  "msg/SoundSpeed.msg"
  "msg/Turbidity.msg"
  DEPENDENCIES std_msgs
)

install(PROGRAMS
  scripts/smart_sensor_serial.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
