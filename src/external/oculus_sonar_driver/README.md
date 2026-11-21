# oculus_sonar_driver

> [!WARNING]
>
> PLEASE NOTE: This is our current main working branch, which targets ROS2.  For the previous ROS1 driver, see the  `ros1` branch, which was formerly the `main` barnch


ROS composable node that uses [liboculus](https://github.com/apl-ocean-engineering/liboculus) to interface with a [Blueprint Subsea Oculus imaging sonar](https://www.blueprintsubsea.com/oculus/index.php).  Currently testing with ROS2 `kilted` and `rolling`

At present we have only tested with the [Oculus M1200d](https://www.blueprintsubsea.com/pages/product.php?PN=BP01042) and M3000d sonars.

## Contents

> [!WARNING] Documentation below is still for ROS1, will be updated soon.

This package defines the "oculus_sonar_driver::OculusDriver" node that interfaces with the sonar
over ethernet and publishes [`acoustic_msgs::ProjectedSonarImage`](https://github.com/apl-ocean-engineering/hydrographic_msgs/blob/main/acoustic_msgs/msg/ProjectedSonarImage.msg) and
[`apl_msgs::RawData`](https://gitlab.com/apl-ocean-engineering/apl_msgs) messages.

The package also builds a conventional node `oculus_sonar_driver` which is a trivial wrapper around the composable node


Note we are still porting the `sonar_image_proc` package for sonar data visualization.

## Installation

  1. Use [vcstool](http://wiki.ros.org/vcstool) to install dependencies:
        1. Clone this repo to `<colcon_ws>/src`
        2. `vcs import --recursive -i < oculus_sonar_driver/oculus_sonar_driver.repos`
  2. Install dependencies with rosdep:

```
cd <colcon_ws>
rosdep install -i --from-paths src
```

  1. Run `colcon build`
  2. Run `source installsetup.bash`

## Usage
`ros2 launch oculus_sonar_driver oculus_driver.launch.xml.launch` will start the sonar driver.


----
# A note about sonar resolution

(This is inferred from experimental data, it's not from Blueprint)

The sonar appears to have a fixed maximum number of range bins, approx 720.  It also has fixed quantized range resolutions:  ~2.8mm, ~5.6mm, etc.  So the number of range bins N present in data at a given range R in meters is:

```
N = R / (2^k * 2.8mm)  minimizing k s.t. N <= 720
```

This means, for example:

| Range (m) | Bins | Resolution |
|-----------|------|------------|
| 2.0 | 709 | 2.8mm |
| 2.02 | 720 | 2.8mm |
| 3 | 532 | 5.6mm |
| 4 | 709 | 5.6mm |
| 4.065 | 720 | 5.6mm |
| 5 | 443 | 11.2mm |
| 6 | 532 | 11.2mm |

etc.   This effect seems to be invariant of 256 v 512 beams, and 8/16/32 bit data.  Haven't tested in the lower frequency mode


----
# Related Packages

* [marine_acoustic_msgs](https://github.com/apl-ocean-engineering/marine_msgs/tree/main/marine_acoustic_msgs) defines the ROS [ProjectedSonarImage](https://github.com/apl-ocean-engineering/marine_msgs/blob/main/marine_acoustic_msgs/msg/ProjectedSonarImage.msg) message type published by this node.
* [liboculus](https://github.com/apl-ocean-engineering/liboculus) is the underlying (non-ROS) library which parses handles the Oculus network protocol.  It also includes a Boost::Asio-based network client.


Note we are still working to port the following to ROS2:


* [sonar_image_proc](https://github.com/apl-ocean-engineering/sonar_image_proc) contains code to postprocess sonar data, including drawing the sonar data to an OpenCV Mat (contains both ROS and non-ROS code).
* [rqt_sonar_image_view](https://github.com/apl-ocean-engineering/rqt_sonar_image_view) is an Rqt plugin for displaying sonar imagery (uses [sonar_image_proc](https://github.com/apl-ocean-engineering/sonar_image_proc))

# License

This repository is covered by the [BSD 3-Clause License](LICENSE).
