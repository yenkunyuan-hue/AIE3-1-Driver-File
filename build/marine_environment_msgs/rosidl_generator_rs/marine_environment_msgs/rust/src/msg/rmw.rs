#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "marine_environment_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__Conductivity() -> *const std::ffi::c_void;
}

#[link(name = "marine_environment_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_environment_msgs__msg__Conductivity__init(msg: *mut Conductivity) -> bool;
    fn marine_environment_msgs__msg__Conductivity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Conductivity>, size: usize) -> bool;
    fn marine_environment_msgs__msg__Conductivity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Conductivity>);
    fn marine_environment_msgs__msg__Conductivity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Conductivity>, out_seq: *mut rosidl_runtime_rs::Sequence<Conductivity>) -> bool;
}

// Corresponds to marine_environment_msgs__msg__Conductivity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Conductivity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// mS/cm
    pub conductivity: f32,

    /// PSU
    pub salinity: f32,

}



impl Default for Conductivity {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_environment_msgs__msg__Conductivity__init(&mut msg as *mut _) {
        panic!("Call to marine_environment_msgs__msg__Conductivity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Conductivity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Conductivity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Conductivity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Conductivity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Conductivity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Conductivity where Self: Sized {
  const TYPE_NAME: &'static str = "marine_environment_msgs/msg/Conductivity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__Conductivity() }
  }
}


#[link(name = "marine_environment_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__Density() -> *const std::ffi::c_void;
}

#[link(name = "marine_environment_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_environment_msgs__msg__Density__init(msg: *mut Density) -> bool;
    fn marine_environment_msgs__msg__Density__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Density>, size: usize) -> bool;
    fn marine_environment_msgs__msg__Density__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Density>);
    fn marine_environment_msgs__msg__Density__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Density>, out_seq: *mut rosidl_runtime_rs::Sequence<Density>) -> bool;
}

// Corresponds to marine_environment_msgs__msg__Density
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Density {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// kg/m^3
    pub density: f32,

}



impl Default for Density {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_environment_msgs__msg__Density__init(&mut msg as *mut _) {
        panic!("Call to marine_environment_msgs__msg__Density__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Density {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Density__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Density__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Density__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Density {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Density where Self: Sized {
  const TYPE_NAME: &'static str = "marine_environment_msgs/msg/Density";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__Density() }
  }
}


#[link(name = "marine_environment_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__SoundSpeed() -> *const std::ffi::c_void;
}

#[link(name = "marine_environment_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_environment_msgs__msg__SoundSpeed__init(msg: *mut SoundSpeed) -> bool;
    fn marine_environment_msgs__msg__SoundSpeed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SoundSpeed>, size: usize) -> bool;
    fn marine_environment_msgs__msg__SoundSpeed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SoundSpeed>);
    fn marine_environment_msgs__msg__SoundSpeed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SoundSpeed>, out_seq: *mut rosidl_runtime_rs::Sequence<SoundSpeed>) -> bool;
}

// Corresponds to marine_environment_msgs__msg__SoundSpeed
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SoundSpeed {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// m/s
    pub sound_speed: f32,

}



impl Default for SoundSpeed {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_environment_msgs__msg__SoundSpeed__init(&mut msg as *mut _) {
        panic!("Call to marine_environment_msgs__msg__SoundSpeed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SoundSpeed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__SoundSpeed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__SoundSpeed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__SoundSpeed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SoundSpeed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SoundSpeed where Self: Sized {
  const TYPE_NAME: &'static str = "marine_environment_msgs/msg/SoundSpeed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__SoundSpeed() }
  }
}


#[link(name = "marine_environment_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__SpectralReading() -> *const std::ffi::c_void;
}

#[link(name = "marine_environment_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_environment_msgs__msg__SpectralReading__init(msg: *mut SpectralReading) -> bool;
    fn marine_environment_msgs__msg__SpectralReading__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpectralReading>, size: usize) -> bool;
    fn marine_environment_msgs__msg__SpectralReading__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpectralReading>);
    fn marine_environment_msgs__msg__SpectralReading__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpectralReading>, out_seq: *mut rosidl_runtime_rs::Sequence<SpectralReading>) -> bool;
}

// Corresponds to marine_environment_msgs__msg__SpectralReading
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Generic point spectral sensor reading.
/// Arrays are aligned by index.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpectralReading {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub channel_name: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wavelength_nm: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fwhm_nm: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub intensity: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: rosidl_runtime_rs::String,

}



impl Default for SpectralReading {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_environment_msgs__msg__SpectralReading__init(&mut msg as *mut _) {
        panic!("Call to marine_environment_msgs__msg__SpectralReading__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpectralReading {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__SpectralReading__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__SpectralReading__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__SpectralReading__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpectralReading {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpectralReading where Self: Sized {
  const TYPE_NAME: &'static str = "marine_environment_msgs/msg/SpectralReading";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__SpectralReading() }
  }
}


#[link(name = "marine_environment_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__Turbidity() -> *const std::ffi::c_void;
}

#[link(name = "marine_environment_msgs__rosidl_generator_c")]
extern "C" {
    fn marine_environment_msgs__msg__Turbidity__init(msg: *mut Turbidity) -> bool;
    fn marine_environment_msgs__msg__Turbidity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Turbidity>, size: usize) -> bool;
    fn marine_environment_msgs__msg__Turbidity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Turbidity>);
    fn marine_environment_msgs__msg__Turbidity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Turbidity>, out_seq: *mut rosidl_runtime_rs::Sequence<Turbidity>) -> bool;
}

// Corresponds to marine_environment_msgs__msg__Turbidity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Turbidity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ntu: f32,

}



impl Default for Turbidity {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !marine_environment_msgs__msg__Turbidity__init(&mut msg as *mut _) {
        panic!("Call to marine_environment_msgs__msg__Turbidity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Turbidity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Turbidity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Turbidity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { marine_environment_msgs__msg__Turbidity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Turbidity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Turbidity where Self: Sized {
  const TYPE_NAME: &'static str = "marine_environment_msgs/msg/Turbidity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__marine_environment_msgs__msg__Turbidity() }
  }
}


