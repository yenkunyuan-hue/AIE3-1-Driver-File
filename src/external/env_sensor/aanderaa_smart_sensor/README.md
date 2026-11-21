# aanderaa_smart_sensor

ROS 2 Humble serial driver for Aanderaa Smart Sensor turbidity and conductivity sensors.

This package is a ROS 2 Humble conversion of the older ROS 1 serial driver. It uses `rclpy`, `ament_cmake`, and ROS 2 interface generation.

## Supported records

The node expects tab separated `MEASUREMENT` records.

| Sensor id | Sensor | Published topics |
| --- | --- | --- |
| `4296` | Aanderaa turbidity sensor | `raw_string`, `turbidity`, `temperature` |
| `5819` | Aanderaa conductivity sensor | `raw_string`, `conductivity`, `temperature`, `density`, `sound_speed` |

## Custom messages

The package defines these custom messages:

| Message | Fields | Unit convention |
| --- | --- | --- |
| `aanderaa_smart_sensor/msg/Turbidity` | `std_msgs/Header header`, `float32 ntu` | NTU |
| `aanderaa_smart_sensor/msg/Conductivity` | `std_msgs/Header header`, `float32 conductivity`, `float32 salinity` | mS/cm and PSU |
| `aanderaa_smart_sensor/msg/Density` | `std_msgs/Header header`, `float32 density` | kg/m^3 |
| `aanderaa_smart_sensor/msg/SoundSpeed` | `std_msgs/Header header`, `float32 sound_speed` | m/s |

There is no broadly used core ROS 2 scalar message for water density or environmental sound speed. The custom messages keep timestamp and frame metadata, and avoid using unsemantic `std_msgs/msg/Float32` or `std_msgs/msg/Float64` topics for long term driver output.

## Install dependencies

```bash
sudo apt update
sudo apt install ros-humble-ros-base python3-colcon-common-extensions python3-serial
```

## Build

Place the package in a ROS 2 workspace and build it with colcon.

```bash
mkdir -p ~/ros2_ws/src
cp -r aanderaa_smart_sensor ~/ros2_ws/src/
cd ~/ros2_ws
source /opt/ros/humble/setup.bash
colcon build --packages-select aanderaa_smart_sensor
source install/setup.bash
```

## Run

```bash
ros2 launch aanderaa_smart_sensor aanderaa_turbidity_sensor.launch.py serial_port:=/dev/ttyUSB0
```

Or run the executable directly:

```bash
ros2 run aanderaa_smart_sensor smart_sensor_serial.py --ros-args -p serial_port:=/dev/ttyUSB0
```

## Parameters

| Parameter | Default | Meaning |
| --- | --- | --- |
| `serial_port` | `/dev/ttyUSB0` | Serial device path |
| `baudrate` | `9600` | Serial baud rate |
| `frame_id` | `smart_sensor_link` | Frame id used in message headers |
| `xonxoff` | `true` | Enable software flow control |
| `send_reset_on_start` | `false` | Send `RESET` command when the node starts |
| `turbidity_sensor_id` | `4296` | Sensor id for turbidity reports |
| `conductivity_sensor_id` | `5819` | Sensor id for conductivity reports |
| `turbidity_value_index` | `4` | Tab field index for turbidity |
| `conductivity_value_index` | `4` | Tab field index for conductivity |
| `temperature_value_index` | `6` | Tab field index for temperature |
| `salinity_value_index` | `8` | Tab field index for salinity |
| `density_value_index` | `10` | Tab field index for density |
| `sound_speed_value_index` | `12` | Tab field index for sound speed |
| `auto_detect_named_fields` | `true` | Try label based detection when an optional fixed index is missing |

The index defaults assume a pair style Aanderaa engineering output where values continue as conductivity, temperature, salinity, density, and sound speed. If your sensor is configured with another output order, set the indices from the launch command.

Example with only conductivity and temperature enabled:

```bash
ros2 launch aanderaa_smart_sensor aanderaa_turbidity_sensor.launch.py \
  serial_port:=/dev/ttyUSB0 \
  salinity_value_index:=-1 \
  density_value_index:=-1 \
  sound_speed_value_index:=-1
```

Example with explicit indices:

```bash
ros2 launch aanderaa_smart_sensor aanderaa_turbidity_sensor.launch.py \
  serial_port:=/dev/ttyUSB0 \
  conductivity_value_index:=4 \
  temperature_value_index:=6 \
  salinity_value_index:=8 \
  density_value_index:=10 \
  sound_speed_value_index:=12
```

## Topics

| Topic | Type |
| --- | --- |
| `raw_string` | `std_msgs/msg/String` |
| `turbidity` | `aanderaa_smart_sensor/msg/Turbidity` |
| `conductivity` | `aanderaa_smart_sensor/msg/Conductivity` |
| `temperature` | `sensor_msgs/msg/Temperature` |
| `density` | `aanderaa_smart_sensor/msg/Density` |
| `sound_speed` | `aanderaa_smart_sensor/msg/SoundSpeed` |
