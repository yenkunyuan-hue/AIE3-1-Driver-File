# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target aanderaa_smart_sensor::aanderaa_smart_sensor
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${aanderaa_smart_sensor_TARGETS}.
if(aanderaa_smart_sensor_TARGETS AND NOT TARGET aanderaa_smart_sensor::aanderaa_smart_sensor)
  add_library(aanderaa_smart_sensor::aanderaa_smart_sensor INTERFACE IMPORTED)
  set_target_properties(aanderaa_smart_sensor::aanderaa_smart_sensor PROPERTIES
    INTERFACE_LINK_LIBRARIES "${aanderaa_smart_sensor_TARGETS}")
endif()
