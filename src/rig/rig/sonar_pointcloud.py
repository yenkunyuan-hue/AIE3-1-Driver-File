#! /usr/bin/env python3
"""
ROS 2 port of sonar_image_proc/scripts/sonar_pointcloud.py.

The port intentionally keeps the upstream processing model close to the
original ROS 1 script:
- subscribe to marine_acoustic_msgs/ProjectedSonarImage and or acoustic_msgs/ProjectedSonarImage
- cache geometry based on sonar metadata
- log scale and normalize image intensities
- optionally threshold low intensity returns
- optionally publish sensor_msgs/PointCloud2 with x y z intensity (float32)
- optionally colorize with matplotlib inferno and publish x y z r g b a
"""

from __future__ import annotations

import time

from matplotlib import cm
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField
from rclpy.qos import qos_profile_sensor_data  

logger = rclpy.logging.get_logger('sonar_check')
from rig.sonar_msg_metadata import SonarImageMetadata


try:
    from marine_acoustic_msgs.msg import ProjectedSonarImage as MarineProjectedSonarImage
except ImportError:
    MarineProjectedSonarImage = None
try:
    from acoustic_msgs.msg import ProjectedSonarImage as AcousticProjectedSonarImage
except ImportError:
    AcousticProjectedSonarImage = None
logger.info('sonar node is found')


def make_geometry(sonar_msg_metadata: SonarImageMetadata, elevations: np.ndarray, logger=None) -> np.ndarray:
    """
    Vectorized geometry generation.
    Regenerates when there are changing parameters from the sonar.
    """
    if logger is not None:
        logger.debug('Making geometry')
    begin_time = time.time()

    idxs = np.arange(0, sonar_msg_metadata.num_angles * sonar_msg_metadata.num_ranges)
    idxs = idxs.reshape(sonar_msg_metadata.num_ranges, sonar_msg_metadata.num_angles).flatten(order='F')

    ces = np.cos(elevations)
    ses = np.sin(elevations)
    cas = np.cos(sonar_msg_metadata.azimuths)
    sas = np.sin(sonar_msg_metadata.azimuths)

    new_shape = (
        len(elevations),
        sonar_msg_metadata.num_ranges * sonar_msg_metadata.num_angles,
        3,
    )
    points = np.zeros(shape=new_shape, dtype=np.float32)

    x_temp = np.tile(
        sonar_msg_metadata.ranges[np.newaxis, :] * ses[:, np.newaxis],
        reps=sonar_msg_metadata.num_angles,
    ).flatten()
    y_temp = (
        sonar_msg_metadata.ranges[np.newaxis, np.newaxis, :]
        * ces[:, np.newaxis, np.newaxis]
        * sas[np.newaxis, :, np.newaxis]
    ).flatten()
    z_temp = (
        sonar_msg_metadata.ranges[np.newaxis, np.newaxis, :]
        * ces[:, np.newaxis, np.newaxis]
        * cas[np.newaxis, :, np.newaxis]
    ).flatten()

    points[:, idxs, :] = np.stack([x_temp, y_temp, z_temp], axis=1).reshape(new_shape)

    if logger is not None:
        total_time = time.time() - begin_time
        logger.debug(f'Creating geometry took {1000.0 * total_time:0.2f} ms')
    return points


def make_color_lookup() -> np.ndarray:
    """Generate a lookup table from matplotlib inferno colormapping."""
    color_lookup = np.zeros(shape=(256, 4), dtype=np.float32)
    for aa in range(256):
        r, g, b, _ = cm.inferno(aa)
        alpha = aa / 256.0
        color_lookup[aa, :] = [r, g, b, alpha]
    return color_lookup


class SonarPointcloud(Node):
    """ROS 2 port of the upstream SonarPointcloud ROS 1 node."""

    def __init__(self) -> None:
        super().__init__('sonar_cloud')

        self.declare_parameter('input_topic', 'sonar_image')
        self.declare_parameter('output_topic', 'sonar_cloud')
        self.declare_parameter('frame_id', '')
        self.declare_parameter('publish_all_points', False)
        self.declare_parameter('use_intensity', True)
        self.declare_parameter('cmin', 0.74)
        self.declare_parameter('threshold', 0.0)
        self.declare_parameter('elev_steps', 2)
        self.declare_parameter('min_elev_deg', -10.0)
        self.declare_parameter('max_elev_deg', 10.0)

        input_topic = self.get_parameter('input_topic').get_parameter_value().string_value
        output_topic = self.get_parameter('output_topic').get_parameter_value().string_value
        self.frame_id = self.get_parameter('frame_id').get_parameter_value().string_value
        self.publish_all_points = bool(self.get_parameter('publish_all_points').value)
        self.use_intensity = bool(self.get_parameter('use_intensity').value)
        self.cmin = float(self.get_parameter('cmin').value)
        self.threshold = float(self.get_parameter('threshold').value)

        elev_steps = self.get_parameter('elev_steps').value
        if isinstance(elev_steps, (float, str)):
            elev_steps = int(elev_steps)
        elev_steps = int(elev_steps)

        min_elev_deg = float(self.get_parameter('min_elev_deg').value)
        max_elev_deg = float(self.get_parameter('max_elev_deg').value)
        if max_elev_deg < min_elev_deg:
            raise ValueError('max_elev_deg must be >= min_elev_deg')

        min_elev = np.radians(min_elev_deg)
        max_elev = np.radians(max_elev_deg)
        self.elevations = np.linspace(min_elev, max_elev, elev_steps, dtype=np.float32)

        self.geometry = None
        self.sonar_msg_metadata = None
        self.color_lookup = None
        self.output_points = None

        self.pub = self.create_publisher(PointCloud2, output_topic, 10)

        self.declare_parameter('message_type', 'marine_acoustic_msgs')
        self.message_type = str(self.get_parameter('message_type').value).strip()

        if self.message_type == 'marine_acoustic_msgs':
            if MarineProjectedSonarImage is None:
                raise RuntimeError(
                    'message_type is marine_acoustic_msgs but marine_acoustic_msgs is not installed.'
                )
            self.input_subscription = self.create_subscription(
                MarineProjectedSonarImage,
                input_topic,
                self.sonar_image_callback,
                qos_profile_sensor_data,
            )
            self.get_logger().info(
                f'Enabled marine_acoustic_msgs/ProjectedSonarImage subscription on {input_topic}'
            )

        elif self.message_type == 'acoustic_msgs':
            if AcousticProjectedSonarImage is None:
                raise RuntimeError(
                    'message_type is acoustic_msgs but acoustic_msgs is not installed.'
                )
            self.input_subscription = self.create_subscription(
                AcousticProjectedSonarImage,
                input_topic,
                self.sonar_image_callback,
                10,
            )
            self.get_logger().info(
                f'Enabled acoustic_msgs/ProjectedSonarImage subscription on {input_topic}'
            )

        else:
            raise ValueError(
                "message_type must be either 'marine_acoustic_msgs' or 'acoustic_msgs'"
            )

        self.get_logger().info(
            f'Publishing PointCloud2 on {output_topic}'
        )

    def normalize_intensity_array(self, image) -> np.ndarray:
        """
        Process an intensity array into a parseable format for pointcloud generation.
        Can handle 8 bit or 32 bit input data and log-scale the result.
        """
        dtype_uint8 = getattr(image, 'DTYPE_UINT8', None)
        dtype_uint32 = getattr(image, 'DTYPE_UINT32', None)

        if dtype_uint8 is not None and image.dtype == dtype_uint8:
            data_type = np.uint8
        elif dtype_uint32 is not None and image.dtype == dtype_uint32:
            data_type = np.uint32
        else:
            raise RuntimeError('Only 8 bit and 32 bit data is supported')

        intensities = np.frombuffer(image.data, dtype=data_type)
        new_intensities = intensities.astype(np.float32)
        vv = np.log(np.maximum(1.0, new_intensities)) / np.log(np.iinfo(data_type).max)
        return vv.astype(np.float32)

    def sonar_image_callback(self, sonar_image_msg) -> None:
        begin_time = time.time()
        stamp_sec = float(sonar_image_msg.header.stamp.sec) + float(sonar_image_msg.header.stamp.nanosec) * 1e-9
        self.get_logger().debug(
            f'Received new image at {stamp_sec:.6f}'
        )

        header = sonar_image_msg.header
        if self.frame_id:
            header.frame_id = self.frame_id

        if self.use_intensity:
            fields = [
                PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
                PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
                PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
                PointField(name='intensity', offset=12, datatype=PointField.FLOAT32, count=1),
            ]
        else:
            fields = [
                PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
                PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
                PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
                PointField(name='r', offset=12, datatype=PointField.FLOAT32, count=1),
                PointField(name='g', offset=16, datatype=PointField.FLOAT32, count=1),
                PointField(name='b', offset=20, datatype=PointField.FLOAT32, count=1),
                PointField(name='a', offset=24, datatype=PointField.FLOAT32, count=1),
            ]

        new_metadata = SonarImageMetadata(sonar_image_msg)
        if self.sonar_msg_metadata is None or self.sonar_msg_metadata != new_metadata:
            self.get_logger().debug(
                f'Metadata updated. Old: {self.sonar_msg_metadata}. New: {new_metadata}'
            )
            self.sonar_msg_metadata = new_metadata
            self.geometry = make_geometry(self.sonar_msg_metadata, self.elevations, self.get_logger())

        if self.color_lookup is None:
            self.color_lookup = make_color_lookup()

        t0 = time.time()
        normalized_intensities = self.normalize_intensity_array(sonar_image_msg.image)

        if self.publish_all_points:
            selected_intensities = normalized_intensities
            geometry = self.geometry
        else:
            pos_intensity_idx = np.where(normalized_intensities > self.threshold)
            selected_intensities = normalized_intensities[pos_intensity_idx]
            geometry = self.geometry[:, pos_intensity_idx[0]]

            num_original = len(normalized_intensities)
            num_selected = len(selected_intensities)
            frac = (num_selected / num_original) if num_original > 0 else 0.0
            self.get_logger().debug(
                f'Filtering results: (Pts>Thresh, Total): ({num_selected}, {num_original}). Frac: {frac:.3f}'
            )

        npts = len(selected_intensities)

        if self.use_intensity:
            self.output_points = np.zeros((len(self.elevations) * npts, 4), dtype=np.float32)
            elev_points = np.empty((npts, 4), dtype=np.float32)
            elev_points[:, 3] = selected_intensities.astype(np.float32)

            for i in range(len(self.elevations)):
                elev_points[:, 0:3] = geometry[i, :, :]
                step = i * npts
                next_step = step + npts
                self.output_points[step:next_step, :] = elev_points

            point_step = 4 * 4
        else:
            v_max = 1.0
            colors = (selected_intensities - self.cmin) / (v_max - self.cmin)
            c_clipped = np.clip(colors, a_min=0.0, a_max=1.0)
            c_uint8 = (np.iinfo(np.uint8).max * c_clipped).astype(np.uint8)

            self.output_points = np.zeros((len(self.elevations) * npts, 7), dtype=np.float32)
            c_expanded = np.repeat(c_uint8[..., np.newaxis], 4, axis=1)
            elev_points = np.empty((npts, 7), dtype=np.float32)
            elev_points[:, 3:] = self.color_lookup[c_expanded[:, 0]]

            for i in range(len(self.elevations)):
                elev_points[:, 0:3] = geometry[i, :, :]
                step = i * npts
                next_step = step + npts
                self.output_points[step:next_step, :] = elev_points

            point_step = 7 * 4

        t1 = time.time()
        n_pub = len(self.output_points)
        cloud_msg = PointCloud2(
            header=header,
            height=1,
            width=n_pub,
            is_dense=True,
            is_bigendian=False,
            fields=fields,
            point_step=point_step,
            row_step=point_step * n_pub,
            data=self.output_points.tobytes(),
        )

        dt1 = time.time() - t1
        dt0 = t1 - t0
        total_time = time.time() - begin_time
        self.pub.publish(cloud_msg)

        self.get_logger().debug(
            f'Published pointcloud: npts = {npts}, Find Pts = {dt0:0.5f} sec, '
            f'Convert to Cloud = {dt1:0.5f} sec. Total Time = {total_time:0.3f} sec'
        )


def main(args=None) -> None:
    rclpy.init(args=args)
    node = SonarPointcloud()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
