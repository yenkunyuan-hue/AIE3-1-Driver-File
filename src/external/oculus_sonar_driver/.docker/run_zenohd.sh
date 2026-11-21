#!/usr/bin/bash

# Check for an open connection on tcp port 7447
# (The default port for ROS Zenohd server)
#
# If found, just sleep forever
# If not found, run Zenohd
#
echo "Checking for existing zenohd"
if (echo >/dev/tcp/localhost/7447) &> /dev/null; then
    echo "Discovered existing Zenohd, sleeping ...."
    sleep infinity
else
    echo "Running ROS2 zenohd"
    ros2 run rmw_zenoh_cpp rmw_zenohd
fi
