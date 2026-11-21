#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to marine_acoustic_msgs__msg__DetectionFlag
/// Beam is OK

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectionFlag {
    /// These arrays should have the same dimensions, and should match
    /// the number of beams for this sonar.
    ///
    /// Some fields are optional.  Those should have 0 length.
    /// Flag values for every beam
    pub flag: u8,

}

impl DetectionFlag {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DETECT_OK: u8 = 0;

    /// Beam is flagged as bad by the sonar.  Think hard before second-guessing
    pub const DETECT_BAD_SONAR: u8 = 1;

    /// Beam is flagged as bad by some automated filter applied during processing.
    pub const DETECT_BAD_FILTER: u8 = 2;

    /// Beam is flagged as bad by the user. This is probably not happening in
    /// realtime, but is included here so the same message can be used throughout
    /// a post-processing pipeline.
    pub const DETECT_BAD_USER: u8 = 4;

}


impl Default for DetectionFlag {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectionFlag::default())
  }
}

impl rosidl_runtime_rs::Message for DetectionFlag {
  type RmwMsg = super::msg::rmw::DetectionFlag;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        flag: msg.flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      flag: msg.flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      flag: msg.flag,
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__Dvl
/// Message for single ground-track ping from a DVL.
///
/// This message is modeled after WHOI's Dvl.msg from the ds_sensor_msgs
/// repository, which was released under a BSD license.
/// Modifications were made by UW-APL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Dvl {
    /// The standard ROS header.
    /// Timestamp is neither transmit nor receive time -- it is the time that
    /// the velocity should be considered valid at.
    /// Frame convention:
    /// * z-axis in direction DVL is pointing
    /// * x-axis aligned with vehicle forward
    pub header: std_msgs::msg::Header,

    /// Velocity mode (see above)
    pub velocity_mode: u8,

    /// Type of DVL array employed (see above).  Necessary when
    /// deciding how to apply sound velocity corrections
    pub dvl_type: u8,

    /// Velocities
    pub velocity: geometry_msgs::msg::Vector3,

    /// row-major, xyz axes.  Set to "-1" if not known.
    pub velocity_covar: [f64; 9],

    /// Average altitude of all good beam returns.
    /// For 30-deg sensor, altitude = (sqrt(3) / 2) * sum(range) / num_good_beams
    pub altitude: f64,

    /// Calculated from xy velocities: course_gnd = atan2(velocity.y, velocity.x)
    pub course_gnd: f64,

    /// Calculated from xy velocities: speed_gnd = sqrt(velocity.x^2 + velocity.y^2)
    pub speed_gnd: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_good_beams: u8,

    /// Speed of sound (m/s) used by the DVL
    pub sound_speed: f32,

    /// Beam data
    /// Some DVLs/DVL configurations only report the derived velocities.
    pub beam_ranges_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beam_velocities_valid: bool,

    /// Geometry of each of the 4 beams
    pub beam_unit_vec: [geometry_msgs::msg::Vector3; 4],

    /// beam_unit_vec[i] * range[i] is the point where the beam hits the seafloor.
    /// For a 30-deg sensor, multiply by sqrt(3)/2 to get altitude.
    pub range: [f64; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub range_covar: [f32; 4],

    /// Beam quality flag.
    /// The meaning of this flag is DVL-specific (at least for now).
    pub beam_quality: [f32; 4],

    /// Raw velocities for each beam.
    /// Will be beam 1,2,3,4 velocity in beam coordinates
    pub beam_velocity: [f32; 4],

    /// Covariance, as always, should be -1 if unknown
    pub beam_velocity_covar: [f32; 4],

}

impl Dvl {
    /// ENUM: Velocity mode
    pub const DVL_MODE_BOTTOM: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DVL_MODE_WATER: u8 = 2;

    /// ENUM: DVL Type; used in sound velocity corrections
    /// Standard (Janus) array with one piston transducer for each beam.
    /// If you have 4-5 individual disks on your DVL, use this one.
    /// Examples include Sonardyne Syrinx, Nortek DVLs, and RDI Workhorse
    pub const DVL_TYPE_PISTON: u8 = 0;

    /// Phased-array DVL.  If you have one giant disk with complicated stuff
    /// on it, probably this one.
    /// Examples include newer RDI DVLs such as pathfinder, pioneer, and tasman.
    pub const DVL_TYPE_PHASED_ARRAY: u8 = 1;

}


impl Default for Dvl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Dvl::default())
  }
}

impl rosidl_runtime_rs::Message for Dvl {
  type RmwMsg = super::msg::rmw::Dvl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        velocity_mode: msg.velocity_mode,
        dvl_type: msg.dvl_type,
        velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        velocity_covar: msg.velocity_covar,
        altitude: msg.altitude,
        course_gnd: msg.course_gnd,
        speed_gnd: msg.speed_gnd,
        num_good_beams: msg.num_good_beams,
        sound_speed: msg.sound_speed,
        beam_ranges_valid: msg.beam_ranges_valid,
        beam_velocities_valid: msg.beam_velocities_valid,
        beam_unit_vec: msg.beam_unit_vec
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        range: msg.range,
        range_covar: msg.range_covar,
        beam_quality: msg.beam_quality,
        beam_velocity: msg.beam_velocity,
        beam_velocity_covar: msg.beam_velocity_covar,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      velocity_mode: msg.velocity_mode,
      dvl_type: msg.dvl_type,
        velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
        velocity_covar: msg.velocity_covar,
      altitude: msg.altitude,
      course_gnd: msg.course_gnd,
      speed_gnd: msg.speed_gnd,
      num_good_beams: msg.num_good_beams,
      sound_speed: msg.sound_speed,
      beam_ranges_valid: msg.beam_ranges_valid,
      beam_velocities_valid: msg.beam_velocities_valid,
        beam_unit_vec: msg.beam_unit_vec
          .iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        range: msg.range,
        range_covar: msg.range_covar,
        beam_quality: msg.beam_quality,
        beam_velocity: msg.beam_velocity,
        beam_velocity_covar: msg.beam_velocity_covar,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      velocity_mode: msg.velocity_mode,
      dvl_type: msg.dvl_type,
      velocity: geometry_msgs::msg::Vector3::from_rmw_message(msg.velocity),
      velocity_covar: msg.velocity_covar,
      altitude: msg.altitude,
      course_gnd: msg.course_gnd,
      speed_gnd: msg.speed_gnd,
      num_good_beams: msg.num_good_beams,
      sound_speed: msg.sound_speed,
      beam_ranges_valid: msg.beam_ranges_valid,
      beam_velocities_valid: msg.beam_velocities_valid,
      beam_unit_vec: msg.beam_unit_vec
        .map(geometry_msgs::msg::Vector3::from_rmw_message),
      range: msg.range,
      range_covar: msg.range_covar,
      beam_quality: msg.beam_quality,
      beam_velocity: msg.beam_velocity,
      beam_velocity_covar: msg.beam_velocity_covar,
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__PingInfo
/// Center frequency of sonar in Hz
/// Set to 0 if unavailable

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PingInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub frequency: f32,

    /// Speed of sound (m/s) used to calculate ranges;
    /// Set to 0 if unavailable
    pub sound_speed: f32,

    /// Sonar reported -3db beamwidths
    /// May be empty if not reported
    /// reported in radians
    pub tx_beamwidths: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_beamwidths: Vec<f32>,

}



impl Default for PingInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PingInfo::default())
  }
}

impl rosidl_runtime_rs::Message for PingInfo {
  type RmwMsg = super::msg::rmw::PingInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        frequency: msg.frequency,
        sound_speed: msg.sound_speed,
        tx_beamwidths: msg.tx_beamwidths.as_slice().into(),
        rx_beamwidths: msg.rx_beamwidths.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      frequency: msg.frequency,
      sound_speed: msg.sound_speed,
        tx_beamwidths: msg.tx_beamwidths.as_slice().into(),
        rx_beamwidths: msg.rx_beamwidths.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      frequency: msg.frequency,
      sound_speed: msg.sound_speed,
      tx_beamwidths: msg.tx_beamwidths.into(),
      rx_beamwidths: msg.rx_beamwidths.into(),
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__ProjectedSonarImage
/// Single scan from an imaging sonar
///
/// The Z-axis is centered in the plane of the fan ("forward"), with X up,
/// in order to be consistent with the NED for traditional multibeam profilers.
///
/// For sonars with a 1D array, the beams lie on the Y-Z plane, and
/// and each beam has an azimuth (rotation about X) value.  Zero azimuth
/// is in the direction of the Z-axis, typically "straight out" from the sonar.
/// Elevation is the orthogonal direction (rotation about Y),
/// often termed the "vertical aperture"

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProjectedSonarImage {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::msg::PingInfo,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beam_directions: Vec<geometry_msgs::msg::Vector3>,

    /// Center of each range bin in meters. Note this these may not be equally
    /// spaced, and do not necessarily start at zero range.
    pub ranges: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image: super::msg::SonarImageData,

}



impl Default for ProjectedSonarImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ProjectedSonarImage::default())
  }
}

impl rosidl_runtime_rs::Message for ProjectedSonarImage {
  type RmwMsg = super::msg::rmw::ProjectedSonarImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Owned(msg.ping_info)).into_owned(),
        beam_directions: msg.beam_directions
          .into_iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        ranges: msg.ranges.as_slice().into(),
        image: super::msg::SonarImageData::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ping_info)).into_owned(),
        beam_directions: msg.beam_directions
          .iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        ranges: msg.ranges.as_slice().into(),
        image: super::msg::SonarImageData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ping_info: super::msg::PingInfo::from_rmw_message(msg.ping_info),
      beam_directions: msg.beam_directions
          .into_iter()
          .map(geometry_msgs::msg::Vector3::from_rmw_message)
          .collect(),
      ranges: msg.ranges.into(),
      image: super::msg::SonarImageData::from_rmw_message(msg.image),
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__RawSonarImage

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawSonarImage {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::msg::PingInfo,

    /// hz
    pub sample_rate: f32,

    /// the number of samples in each beam
    pub samples_per_beam: u32,

    /// Many sonars have some kind of upper gate for water column data
    /// this represents the sample number of the first non empty sample
    /// for beam n
    pub sample0: u32,

    /// Multi-sector multibeams can transmit different sectors at different times
    /// The Reson doesn't but we include a TX delay for each beam anyway.
    ///
    /// Overall, therefore, our overall time is:
    ///
    /// header.stamp: TX cycle starts
    /// Each beam's TX time: header.stamp + transmit_delay[i]
    /// Each beam's RX time: header.stamp + transmit_delay[i] + sample_rate*image_row
    pub tx_delays: Vec<f32>,

    /// Steering angle applied to tx beam
    /// reported in radians
    pub tx_angles: Vec<f32>,

    /// Steering angle applied to rx beam
    /// reported in radians
    pub rx_angles: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image: super::msg::SonarImageData,

}



impl Default for RawSonarImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RawSonarImage::default())
  }
}

impl rosidl_runtime_rs::Message for RawSonarImage {
  type RmwMsg = super::msg::rmw::RawSonarImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Owned(msg.ping_info)).into_owned(),
        sample_rate: msg.sample_rate,
        samples_per_beam: msg.samples_per_beam,
        sample0: msg.sample0,
        tx_delays: msg.tx_delays.as_slice().into(),
        tx_angles: msg.tx_angles.as_slice().into(),
        rx_angles: msg.rx_angles.as_slice().into(),
        image: super::msg::SonarImageData::into_rmw_message(std::borrow::Cow::Owned(msg.image)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ping_info)).into_owned(),
      sample_rate: msg.sample_rate,
      samples_per_beam: msg.samples_per_beam,
      sample0: msg.sample0,
        tx_delays: msg.tx_delays.as_slice().into(),
        tx_angles: msg.tx_angles.as_slice().into(),
        rx_angles: msg.rx_angles.as_slice().into(),
        image: super::msg::SonarImageData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ping_info: super::msg::PingInfo::from_rmw_message(msg.ping_info),
      sample_rate: msg.sample_rate,
      samples_per_beam: msg.samples_per_beam,
      sample0: msg.sample0,
      tx_delays: msg.tx_delays.into(),
      tx_angles: msg.tx_angles.into(),
      rx_angles: msg.rx_angles.into(),
      image: super::msg::SonarImageData::from_rmw_message(msg.image),
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__SonarDetections
/// Single ping from a multibeam sonar.
///
/// This message is modeled after WHOI's MultibeamRaw.msg, from the
/// ds_multibeam_msgs package (released under a BSD license).
/// Modifications were made by UW-APL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SonarDetections {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::msg::PingInfo,

    /// Constants declaring whether each beam is good or bad.
    /// This is implemented as an 8-bit masked value; it is possible for more
    /// than one thing to flag beams as bad. To check if a beam is good, simply
    /// check if it is zero.
    pub flags: Vec<super::msg::DetectionFlag>,

    /// Truly raw multibeam data uses travel times rather than ranges.
    /// reported in seconds
    pub two_way_travel_times: Vec<f32>,

    /// Multi-sector multibeams can transmit different sectors at different times
    /// The Reson doesn't but we include a TX delay for each beam anyway.
    ///
    /// Overall, therefore, our overall time is:
    ///
    /// header.stamp: TX cycle starts
    /// Each beam's TX time: header.stamp + txDelay[i]
    /// Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]
    /// reported in seconds
    pub tx_delays: Vec<f32>,

    /// Sonar-reported intensity.  Usually uncalibrated and crude
    pub intensities: Vec<f32>,

    /// Sonar-reported along-track steering angle (applied to tx beam)
    /// + forward, - aft for a downlooking sonar
    /// reported in radians
    pub tx_angles: Vec<f32>,

    /// Sonar-reported across-track steering angle (applied to rx beam)
    /// + to starboard, - to port for a downlooking sonar
    /// reported in radians
    pub rx_angles: Vec<f32>,

}



impl Default for SonarDetections {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SonarDetections::default())
  }
}

impl rosidl_runtime_rs::Message for SonarDetections {
  type RmwMsg = super::msg::rmw::SonarDetections;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Owned(msg.ping_info)).into_owned(),
        flags: msg.flags
          .into_iter()
          .map(|elem| super::msg::DetectionFlag::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        two_way_travel_times: msg.two_way_travel_times.as_slice().into(),
        tx_delays: msg.tx_delays.as_slice().into(),
        intensities: msg.intensities.as_slice().into(),
        tx_angles: msg.tx_angles.as_slice().into(),
        rx_angles: msg.rx_angles.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ping_info)).into_owned(),
        flags: msg.flags
          .iter()
          .map(|elem| super::msg::DetectionFlag::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        two_way_travel_times: msg.two_way_travel_times.as_slice().into(),
        tx_delays: msg.tx_delays.as_slice().into(),
        intensities: msg.intensities.as_slice().into(),
        tx_angles: msg.tx_angles.as_slice().into(),
        rx_angles: msg.rx_angles.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ping_info: super::msg::PingInfo::from_rmw_message(msg.ping_info),
      flags: msg.flags
          .into_iter()
          .map(super::msg::DetectionFlag::from_rmw_message)
          .collect(),
      two_way_travel_times: msg.two_way_travel_times.into(),
      tx_delays: msg.tx_delays.into(),
      intensities: msg.intensities.into(),
      tx_angles: msg.tx_angles.into(),
      rx_angles: msg.rx_angles.into(),
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__SonarImageData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SonarImageData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_bigendian: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dtype: u32,

    /// the number of beams associated with the image
    pub beam_count: u32,

    /// The actually pixel data in row-major (beam_index major) format
    pub data: Vec<u8>,

}

impl SonarImageData {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_UINT8: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_INT8: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_UINT16: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_INT16: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_UINT32: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_INT32: u32 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_UINT64: u32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_INT64: u32 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_FLOAT32: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DTYPE_FLOAT64: u32 = 9;

}


impl Default for SonarImageData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SonarImageData::default())
  }
}

impl rosidl_runtime_rs::Message for SonarImageData {
  type RmwMsg = super::msg::rmw::SonarImageData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_bigendian: msg.is_bigendian,
        dtype: msg.dtype,
        beam_count: msg.beam_count,
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_bigendian: msg.is_bigendian,
      dtype: msg.dtype,
      beam_count: msg.beam_count,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_bigendian: msg.is_bigendian,
      dtype: msg.dtype,
      beam_count: msg.beam_count,
      data: msg.data.into(),
    }
  }
}


// Corresponds to marine_acoustic_msgs__msg__SonarRanges
/// Single ping from a profiling sonar.
///
/// This message is modeled after WHOI's MultibeamRaw.msg, from the
/// ds_multibeam_msgs package (released under a BSD license).
/// Modifications were made by UW-APL.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SonarRanges {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::msg::PingInfo,

    /// Constants declaring whether each beam is good or bad.
    /// This is implemented as an 8-bit masked value; it is possible for more
    /// than one thing to flag beams as bad. To check if a beam is good, simply
    /// check if it is zero.
    pub flags: Vec<super::msg::DetectionFlag>,

    /// Multi-sector multibeams can transmit different sectors at different times
    /// The Reson doesn't but we include a TX delay for each beam anyway.
    ///
    /// Overall, therefore, our overall time is:
    ///
    /// header.stamp: TX cycle starts
    /// Each beam's TX time: header.stamp + txDelay[i]
    /// Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]
    pub transmit_delays: Vec<f32>,

    /// Sonar-reported intensity.  Usually uncalibrated and crude
    pub intensities: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beam_unit_vec: Vec<geometry_msgs::msg::Vector3>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ranges: Vec<f32>,

}



impl Default for SonarRanges {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SonarRanges::default())
  }
}

impl rosidl_runtime_rs::Message for SonarRanges {
  type RmwMsg = super::msg::rmw::SonarRanges;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Owned(msg.ping_info)).into_owned(),
        flags: msg.flags
          .into_iter()
          .map(|elem| super::msg::DetectionFlag::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        transmit_delays: msg.transmit_delays.as_slice().into(),
        intensities: msg.intensities.as_slice().into(),
        beam_unit_vec: msg.beam_unit_vec
          .into_iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        ranges: msg.ranges.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        ping_info: super::msg::PingInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ping_info)).into_owned(),
        flags: msg.flags
          .iter()
          .map(|elem| super::msg::DetectionFlag::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        transmit_delays: msg.transmit_delays.as_slice().into(),
        intensities: msg.intensities.as_slice().into(),
        beam_unit_vec: msg.beam_unit_vec
          .iter()
          .map(|elem| geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        ranges: msg.ranges.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ping_info: super::msg::PingInfo::from_rmw_message(msg.ping_info),
      flags: msg.flags
          .into_iter()
          .map(super::msg::DetectionFlag::from_rmw_message)
          .collect(),
      transmit_delays: msg.transmit_delays.into(),
      intensities: msg.intensities.into(),
      beam_unit_vec: msg.beam_unit_vec
          .into_iter()
          .map(geometry_msgs::msg::Vector3::from_rmw_message)
          .collect(),
      ranges: msg.ranges.into(),
    }
  }
}


