ARG ROS_DISTRO=rolling
FROM ros:$ROS_DISTRO

# Install apt packages
RUN apt-get -q update \
    && apt-get -q -y upgrade \
    && apt-get -q install --no-install-recommends -y \
        apt-utils \
        clang \
        git \
        gosu \
        libboost-all-dev \
        python3-dev \
        python3-pip \
        python3-venv \
        ros-${ROS_DISTRO}-generate-parameter-library \
        ros-${ROS_DISTRO}-rmw-zenoh-cpp \
        software-properties-common \
    && apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/*

# The base ubuntu/ros image now includes a user "ubuntu" at UID 1000
ARG USERNAME=ubuntu
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# All sudo without password
RUN echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 "/etc/sudoers.d/$USERNAME"

ADD --chmod=755 ros_entrypoint.sh /usr/local/bin/ros_entrypoint.sh
ADD --chmod=755 run_zenohd.sh /usr/local/bin/run_zenohd.sh

# Create a venv and install
USER $USERNAME
WORKDIR /home/$USERNAME

RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash\n" >> /home/$USERNAME/.bashrc \
    && echo "export RMW_IMPLEMENTATION=rmw_zenoh_cpp\n" >> /home/$USERNAME/.bashrc


#
ENV USER_WORKSPACE=/home/$USERNAME/oculus_ws
WORKDIR $USER_WORKSPACE


ENTRYPOINT ["/usr/local/bin/ros_entrypoint.sh"]
