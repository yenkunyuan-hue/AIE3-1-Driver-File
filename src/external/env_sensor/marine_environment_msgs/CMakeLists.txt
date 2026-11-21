cmake_minimum_required(VERSION 3.8)
project(marine_environment_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Conductivity.msg"
  "msg/Density.msg"
  "msg/SoundSpeed.msg"
  "msg/SpectralReading.msg"
  "msg/Turbidity.msg"
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
