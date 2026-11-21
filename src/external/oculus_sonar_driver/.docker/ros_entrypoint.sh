#!/usr/bin/env bash

set -e

# #eval $( fixuid )

ROS_SETUP="/opt/ros/$ROS_DISTRO/setup.bash"
if [ -f $ROS_SETUP ]; then
    echo "Sourcing $ROS_SETUP"
    source $ROS_SETUP
else
    echo "Unable to find $ROS_SETUP"
fi

# if [ -f $USER_WORKSPACE/install/setup.bash ]; then
#     echo "Sourcing user setup at: $USER_WORKSPACE/install/setup.bash"
#     source $USER_WORKSPACE/install/setup.bash
# fi

eval "$@"
