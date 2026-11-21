#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__DetectionFlag() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__DetectionFlag__init(msg: *mut DetectionFlag) -> bool;
    fn marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectionFlag>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectionFlag>);
    fn marine_acoustic_msgs__msg__DetectionFlag__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectionFlag>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectionFlag>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__DetectionFlag
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Beam is OK

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__DetectionFlag__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__DetectionFlag__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectionFlag {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__DetectionFlag__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__DetectionFlag__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__DetectionFlag__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectionFlag {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectionFlag where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/DetectionFlag";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__DetectionFlag() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__Dvl() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__Dvl__init(msg: *mut Dvl) -> bool;
    fn marine_acoustic_msgs__msg__Dvl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Dvl>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__Dvl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Dvl>);
    fn marine_acoustic_msgs__msg__Dvl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Dvl>, out_seq: *mut rosidl_runtime_rs::Sequence<Dvl>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__Dvl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message for single ground-track ping from a DVL.
///
/// This message is modeled after WHOI's Dvl.msg from the ds_sensor_msgs
/// repository, which was released under a BSD license.
/// Modifications were made by UW-APL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Dvl {
    /// The standard ROS header.
    /// Timestamp is neither transmit nor receive time -- it is the time that
    /// the velocity should be considered valid at.
    /// Frame convention:
    /// * z-axis in direction DVL is pointing
    /// * x-axis aligned with vehicle forward
    pub header: std_msgs::msg::rmw::Header,

    /// Velocity mode (see above)
    pub velocity_mode: u8,

    /// Type of DVL array employed (see above).  Necessary when
    /// deciding how to apply sound velocity corrections
    pub dvl_type: u8,

    /// Velocities
    pub velocity: geometry_msgs::msg::rmw::Vector3,

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
    pub beam_unit_vec: [geometry_msgs::msg::rmw::Vector3; 4],

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__Dvl__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__Dvl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Dvl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__Dvl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__Dvl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__Dvl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Dvl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Dvl where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/Dvl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__Dvl() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__PingInfo() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__PingInfo__init(msg: *mut PingInfo) -> bool;
    fn marine_acoustic_msgs__msg__PingInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PingInfo>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__PingInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PingInfo>);
    fn marine_acoustic_msgs__msg__PingInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PingInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<PingInfo>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__PingInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Center frequency of sonar in Hz
/// Set to 0 if unavailable

#[repr(C)]
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
    pub tx_beamwidths: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rx_beamwidths: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for PingInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__PingInfo__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__PingInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PingInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__PingInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__PingInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__PingInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PingInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PingInfo where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/PingInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__PingInfo() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__ProjectedSonarImage() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__ProjectedSonarImage__init(msg: *mut ProjectedSonarImage) -> bool;
    fn marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProjectedSonarImage>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProjectedSonarImage>);
    fn marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProjectedSonarImage>, out_seq: *mut rosidl_runtime_rs::Sequence<ProjectedSonarImage>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__ProjectedSonarImage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

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

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProjectedSonarImage {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::super::msg::rmw::PingInfo,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beam_directions: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Vector3>,

    /// Center of each range bin in meters. Note this these may not be equally
    /// spaced, and do not necessarily start at zero range.
    pub ranges: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image: super::super::msg::rmw::SonarImageData,

}



impl Default for ProjectedSonarImage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__ProjectedSonarImage__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__ProjectedSonarImage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProjectedSonarImage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__ProjectedSonarImage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProjectedSonarImage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProjectedSonarImage where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/ProjectedSonarImage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__ProjectedSonarImage() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__RawSonarImage() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__RawSonarImage__init(msg: *mut RawSonarImage) -> bool;
    fn marine_acoustic_msgs__msg__RawSonarImage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RawSonarImage>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__RawSonarImage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RawSonarImage>);
    fn marine_acoustic_msgs__msg__RawSonarImage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RawSonarImage>, out_seq: *mut rosidl_runtime_rs::Sequence<RawSonarImage>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__RawSonarImage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawSonarImage {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::super::msg::rmw::PingInfo,

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
    pub tx_delays: rosidl_runtime_rs::Sequence<f32>,

    /// Steering angle applied to tx beam
    /// reported in radians
    pub tx_angles: rosidl_runtime_rs::Sequence<f32>,

    /// Steering angle applied to rx beam
    /// reported in radians
    pub rx_angles: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image: super::super::msg::rmw::SonarImageData,

}



impl Default for RawSonarImage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__RawSonarImage__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__RawSonarImage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RawSonarImage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__RawSonarImage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__RawSonarImage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__RawSonarImage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RawSonarImage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RawSonarImage where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/RawSonarImage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__RawSonarImage() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__SonarDetections() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__SonarDetections__init(msg: *mut SonarDetections) -> bool;
    fn marine_acoustic_msgs__msg__SonarDetections__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SonarDetections>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__SonarDetections__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SonarDetections>);
    fn marine_acoustic_msgs__msg__SonarDetections__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SonarDetections>, out_seq: *mut rosidl_runtime_rs::Sequence<SonarDetections>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__SonarDetections
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Single ping from a multibeam sonar.
///
/// This message is modeled after WHOI's MultibeamRaw.msg, from the
/// ds_multibeam_msgs package (released under a BSD license).
/// Modifications were made by UW-APL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SonarDetections {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::super::msg::rmw::PingInfo,

    /// Constants declaring whether each beam is good or bad.
    /// This is implemented as an 8-bit masked value; it is possible for more
    /// than one thing to flag beams as bad. To check if a beam is good, simply
    /// check if it is zero.
    pub flags: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DetectionFlag>,

    /// Truly raw multibeam data uses travel times rather than ranges.
    /// reported in seconds
    pub two_way_travel_times: rosidl_runtime_rs::Sequence<f32>,

    /// Multi-sector multibeams can transmit different sectors at different times
    /// The Reson doesn't but we include a TX delay for each beam anyway.
    ///
    /// Overall, therefore, our overall time is:
    ///
    /// header.stamp: TX cycle starts
    /// Each beam's TX time: header.stamp + txDelay[i]
    /// Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]
    /// reported in seconds
    pub tx_delays: rosidl_runtime_rs::Sequence<f32>,

    /// Sonar-reported intensity.  Usually uncalibrated and crude
    pub intensities: rosidl_runtime_rs::Sequence<f32>,

    /// Sonar-reported along-track steering angle (applied to tx beam)
    /// + forward, - aft for a downlooking sonar
    /// reported in radians
    pub tx_angles: rosidl_runtime_rs::Sequence<f32>,

    /// Sonar-reported across-track steering angle (applied to rx beam)
    /// + to starboard, - to port for a downlooking sonar
    /// reported in radians
    pub rx_angles: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SonarDetections {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__SonarDetections__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__SonarDetections__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SonarDetections {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarDetections__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarDetections__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarDetections__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SonarDetections {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SonarDetections where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/SonarDetections";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__SonarDetections() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__SonarImageData() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__SonarImageData__init(msg: *mut SonarImageData) -> bool;
    fn marine_acoustic_msgs__msg__SonarImageData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SonarImageData>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__SonarImageData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SonarImageData>);
    fn marine_acoustic_msgs__msg__SonarImageData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SonarImageData>, out_seq: *mut rosidl_runtime_rs::Sequence<SonarImageData>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__SonarImageData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub data: rosidl_runtime_rs::Sequence<u8>,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__SonarImageData__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__SonarImageData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SonarImageData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarImageData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarImageData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarImageData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SonarImageData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SonarImageData where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/SonarImageData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__SonarImageData() }
  }
}


#[link(name = "marine_acoustic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__SonarRanges() -> *const std::ffi::c_void;
}

#[link(name = "marine_acoustic_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_acoustic_msgs__msg__SonarRanges__init(msg: *mut SonarRanges) -> bool;
    fn marine_acoustic_msgs__msg__SonarRanges__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SonarRanges>, size: usize) -> bool;
    fn marine_acoustic_msgs__msg__SonarRanges__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SonarRanges>);
    fn marine_acoustic_msgs__msg__SonarRanges__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SonarRanges>, out_seq: *mut rosidl_runtime_rs::Sequence<SonarRanges>) -> bool;
}

// Corresponds to marine_acoustic_msgs__msg__SonarRanges
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Single ping from a profiling sonar.
///
/// This message is modeled after WHOI's MultibeamRaw.msg, from the
/// ds_multibeam_msgs package (released under a BSD license).
/// Modifications were made by UW-APL.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SonarRanges {
    /// The header time should be the time the ping was transmitted, not
    /// the time the message was received.
    /// Note that these two could potentially be several seconds apart,
    /// especially in deep water.
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ping_info: super::super::msg::rmw::PingInfo,

    /// Constants declaring whether each beam is good or bad.
    /// This is implemented as an 8-bit masked value; it is possible for more
    /// than one thing to flag beams as bad. To check if a beam is good, simply
    /// check if it is zero.
    pub flags: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DetectionFlag>,

    /// Multi-sector multibeams can transmit different sectors at different times
    /// The Reson doesn't but we include a TX delay for each beam anyway.
    ///
    /// Overall, therefore, our overall time is:
    ///
    /// header.stamp: TX cycle starts
    /// Each beam's TX time: header.stamp + txDelay[i]
    /// Each beam's RX time: header.stamp + txDelay[i] + twowayTravelTime[i]
    pub transmit_delays: rosidl_runtime_rs::Sequence<f32>,

    /// Sonar-reported intensity.  Usually uncalibrated and crude
    pub intensities: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beam_unit_vec: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Vector3>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ranges: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for SonarRanges {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_acoustic_msgs__msg__SonarRanges__init(&mut msg as *mut _) {
        panic!("Call to marine_acoustic_msgs__msg__SonarRanges__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SonarRanges {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarRanges__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarRanges__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_acoustic_msgs__msg__SonarRanges__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SonarRanges {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SonarRanges where Self: Sized {
  const TYPE_NAME: &'static str = "marine_acoustic_msgs/msg/SonarRanges";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_acoustic_msgs__msg__SonarRanges() }
  }
}


