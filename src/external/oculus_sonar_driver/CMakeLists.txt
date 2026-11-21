cmake_minimum_required(VERSION 3.14.4)
project(oculus_sonar_driver)

# Use C++17
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
endif()

# Find ROS2 packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(marine_acoustic_msgs REQUIRED)
find_package(liboculus REQUIRED)
find_package(Boost OPTIONAL_COMPONENTS system)
find_package(rclcpp_components REQUIRED)
find_package(generate_parameter_library REQUIRED)

generate_parameter_library(
  ${PROJECT_NAME}_parameters        # cmake target name for the parameter library
  src/oculus_driver_parameters.yaml # path to input yaml file
)

# Build the ROS2 node executable only
add_library(${PROJECT_NAME}_component SHARED src/oculus_driver_node.cpp)

target_link_libraries(
    ${PROJECT_NAME}_component
    PUBLIC
        ${PROJECT_NAME}_parameters
        ${marine_acoustic_msgs_TARGETS}
        ${sensor_msgs_TARGETS}
        ${std_msgs_TARGETS}
        liboculus::oculus
        rclcpp::rclcpp
        rclcpp_components::component
        sensor_msgs::sensor_msgs_library
)

# Build the ROS2 node executable only
target_include_directories(
    ${PROJECT_NAME}_component
    PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
        "$<INSTALL_INTERFACE:include/>"
)

rclcpp_components_register_node(
    ${PROJECT_NAME}_component
    PLUGIN "oculus_sonar_driver::OculusDriver"
    EXECUTABLE oculus_sonar_driver
)

ament_export_targets(export_${PROJECT_NAME})
install(
    TARGETS ${PROJECT_NAME}_component
    EXPORT export_${PROJECT_NAME}
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

install(TARGETS ${PROJECT_NAME}_parameters EXPORT ${PROJECT_NAME}Targets)
ament_export_targets(${PROJECT_NAME}Targets HAS_LIBRARY_TARGET)

# Install launch and config files
install(DIRECTORY launch config DESTINATION share/${PROJECT_NAME}/)

# Export package
ament_package()
