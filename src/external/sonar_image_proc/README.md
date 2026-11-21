# sonar_image_proc

This package is a ROS 2 Python implementation of sonar image processing point cloud script.

## Scope of this port

This package ports the point cloud publisher with minimal behavioral changes:

- subscribes to `marine_acoustic_msgs/msg/ProjectedSonarImage`
- republishes data as `sensor_msgs/msg/PointCloud2`
- caches geometry when sonar metadata changes
- log scales and normalizes sonar intensity data
- publishes float32 intensity by default
- optionally applies Inferno color mapping with alpha
- supports filtering by intensity threshold
- supports multi plane elevation projection
- supports output frame override

## Parameters

- `input_topic` default `sonar_image`
- `output_topic` default `sonar_cloud`
- `frame_id` default empty string, keeps incoming frame unless overridden
- `publish_all_points` default `false`
- `use_intensity` default `true`, publishes `x y z intensity` as float32
- `cmin` default `0.74`, only used when `use_intensity` is `false`
- `threshold` default `0.0`
- `elev_steps` default `2`
- `min_elev_deg` default `-10.0`
- `max_elev_deg` default `10.0`

## Build

```bash
cd ~/ros2_ws/src
cp -r sonar_image_proc .
cd ~/ros2_ws
colcon build --packages-select sonar_image_proc
source install/setup.bash
```

## Run

```bash
ros2 run sonar_image_proc sonar_pointcloud
```

or

```bash
ros2 launch sonar_image_proc sonar_pointcloud.launch.xml
```

By default the published `PointCloud2` fields are `x`, `y`, `z`, and `intensity` as `float32`. Set `use_intensity:=false` to switch to the Inferno colored `x y z r g b a` output.

## Notes on message expectations

This node assumes the incoming message type matches the upstream script expectations:

- `ProjectedSonarImage.ranges` contains the radial bin distances
- `ProjectedSonarImage.beam_directions` contains the beam vectors
- `ProjectedSonarImage.ping_info.tx_beamwidths` is available for elevation span metadata
- `ProjectedSonarImage.image` uses `SonarImageData.DTYPE_UINT8` or `SonarImageData.DTYPE_UINT32`

## Main ROS 1 to ROS 2 changes

- `rospy` replaced with `rclpy`
- subscriber and publisher creation moved to ROS 2 APIs
- launch file converted to ROS 2 XML launch
- package converted from catkin to `ament_python`
- logging and timestamp handling updated for ROS 2

## Upstream references

- Repository overview and interfaces: `README.md` in `apl-ocean-engineering/sonar_image_proc`
- Original catkin package metadata: `package.xml`, `CMakeLists.txt`, and `setup.py` in the same repository
- Original helper metadata class and FOV script: `python/sonar_image_proc/sonar_msg_metadata.py` and `scripts/sonar_fov.py`


## Message compatibility

This package accepts either `marine_acoustic_msgs/ProjectedSonarImage` or `acoustic_msgs/ProjectedSonarImage` on the configured input topic.
The node creates subscriptions for whichever message package is available at runtime.

### Message type selection

The node supports both message packages, but ROS 2 cannot subscribe to the same topic name with two different message types at the same time.

Use the `message_type` parameter to select one input type:

- `marine_acoustic_msgs` default
- `acoustic_msgs`

If the XML launch file does not set `message_type`, the node defaults to `marine_acoustic_msgs`.

Example override:

```xml
<param name="message_type" value="acoustic_msgs"/>
```
