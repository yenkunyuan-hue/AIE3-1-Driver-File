#! /usr/bin/env python3
"""
ROS 2 port of the helper metadata class used by sonar_image_proc.
Original concept and geometry assumptions come from the upstream project.
"""

from __future__ import annotations

import typing

import numpy as np


class SonarImageMetadata:
    def __init__(self, sonar_image_msg):
        """
        Metadata for a sonar image, containing all information necessary to
        compute its geometry.

        This intentionally mirrors the upstream sonar_image_proc helper with
        minimal semantic changes and supports either
        marine_acoustic_msgs/ProjectedSonarImage or acoustic_msgs/ProjectedSonarImage
        as long as the expected fields are present.
        """
        self.num_angles = len(sonar_image_msg.beam_directions)
        self.num_ranges = len(sonar_image_msg.ranges)
        self.ranges = np.array(sonar_image_msg.ranges, dtype=np.float32)
        self.min_range = float(np.min(sonar_image_msg.ranges))
        self.max_range = float(np.max(sonar_image_msg.ranges))

        xx = np.array([direction.x for direction in sonar_image_msg.beam_directions], dtype=np.float32)
        yy = np.array([direction.y for direction in sonar_image_msg.beam_directions], dtype=np.float32)
        zz = np.array([direction.z for direction in sonar_image_msg.beam_directions], dtype=np.float32)

        self.azimuths = np.arctan2(-1.0 * yy, np.sqrt(xx**2 + zz**2))
        self.min_azimuth = float(np.min(self.azimuths))
        self.max_azimuth = float(np.max(self.azimuths))

        elev_beamwidth = float(np.median(sonar_image_msg.ping_info.tx_beamwidths))
        self.min_elevation = -0.5 * elev_beamwidth
        self.max_elevation = 0.5 * elev_beamwidth

    def __eq__(self, other: 'SonarImageMetadata') -> bool:
        if self.num_angles != other.num_angles:
            return False
        if self.num_ranges != other.num_ranges:
            return False
        return np.allclose(
            [self.min_range, self.max_range, self.min_azimuth, self.max_azimuth],
            [other.min_range, other.max_range, other.min_azimuth, other.max_azimuth],
        )

    def __str__(self) -> typing.Text:
        return (
            'SonarImageMetadata: {} beams, {} ranges, {:0.2f}=>{:0.2f} m, '
            '{:0.1f}=>{:0.1f} deg'
        ).format(
            self.num_angles,
            self.num_ranges,
            self.min_range,
            self.max_range,
            np.degrees(self.min_azimuth),
            np.degrees(self.max_azimuth),
        )
