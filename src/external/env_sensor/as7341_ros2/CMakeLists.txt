cmake_minimum_required(VERSION 3.8)
project(as7341_ros2)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(marine_environment_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/AS7341Reading.msg"
  DEPENDENCIES std_msgs
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
