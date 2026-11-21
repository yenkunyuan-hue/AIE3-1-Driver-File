#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "aanderaa_smart_sensor__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__Conductivity() -> *const std::ffi::c_void;
}

#[link(name = "aanderaa_smart_sensor__rosidl_generator_c")]
extern "C" {
    fn aanderaa_smart_sensor__msg__Conductivity__init(msg: *mut Conductivity) -> bool;
    fn aanderaa_smart_sensor__msg__Conductivity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Conductivity>, size: usize) -> bool;
    fn aanderaa_smart_sensor__msg__Conductivity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Conductivity>);
    fn aanderaa_smart_sensor__msg__Conductivity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Conductivity>, out_seq: *mut rosidl_runtime_rs::Sequence<Conductivity>) -> bool;
}

// Corresponds to aanderaa_smart_sensor__msg__Conductivity
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
      if !aanderaa_smart_sensor__msg__Conductivity__init(&mut msg as *mut _) {
        panic!("Call to aanderaa_smart_sensor__msg__Conductivity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Conductivity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Conductivity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Conductivity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Conductivity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Conductivity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Conductivity where Self: Sized {
  const TYPE_NAME: &'static str = "aanderaa_smart_sensor/msg/Conductivity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__Conductivity() }
  }
}


#[link(name = "aanderaa_smart_sensor__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__Density() -> *const std::ffi::c_void;
}

#[link(name = "aanderaa_smart_sensor__rosidl_generator_c")]
extern "C" {
    fn aanderaa_smart_sensor__msg__Density__init(msg: *mut Density) -> bool;
    fn aanderaa_smart_sensor__msg__Density__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Density>, size: usize) -> bool;
    fn aanderaa_smart_sensor__msg__Density__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Density>);
    fn aanderaa_smart_sensor__msg__Density__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Density>, out_seq: *mut rosidl_runtime_rs::Sequence<Density>) -> bool;
}

// Corresponds to aanderaa_smart_sensor__msg__Density
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
      if !aanderaa_smart_sensor__msg__Density__init(&mut msg as *mut _) {
        panic!("Call to aanderaa_smart_sensor__msg__Density__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Density {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Density__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Density__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Density__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Density {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Density where Self: Sized {
  const TYPE_NAME: &'static str = "aanderaa_smart_sensor/msg/Density";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__Density() }
  }
}


#[link(name = "aanderaa_smart_sensor__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__SoundSpeed() -> *const std::ffi::c_void;
}

#[link(name = "aanderaa_smart_sensor__rosidl_generator_c")]
extern "C" {
    fn aanderaa_smart_sensor__msg__SoundSpeed__init(msg: *mut SoundSpeed) -> bool;
    fn aanderaa_smart_sensor__msg__SoundSpeed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SoundSpeed>, size: usize) -> bool;
    fn aanderaa_smart_sensor__msg__SoundSpeed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SoundSpeed>);
    fn aanderaa_smart_sensor__msg__SoundSpeed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SoundSpeed>, out_seq: *mut rosidl_runtime_rs::Sequence<SoundSpeed>) -> bool;
}

// Corresponds to aanderaa_smart_sensor__msg__SoundSpeed
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
      if !aanderaa_smart_sensor__msg__SoundSpeed__init(&mut msg as *mut _) {
        panic!("Call to aanderaa_smart_sensor__msg__SoundSpeed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SoundSpeed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__SoundSpeed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__SoundSpeed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__SoundSpeed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SoundSpeed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SoundSpeed where Self: Sized {
  const TYPE_NAME: &'static str = "aanderaa_smart_sensor/msg/SoundSpeed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__SoundSpeed() }
  }
}


#[link(name = "aanderaa_smart_sensor__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__Turbidity() -> *const std::ffi::c_void;
}

#[link(name = "aanderaa_smart_sensor__rosidl_generator_c")]
extern "C" {
    fn aanderaa_smart_sensor__msg__Turbidity__init(msg: *mut Turbidity) -> bool;
    fn aanderaa_smart_sensor__msg__Turbidity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Turbidity>, size: usize) -> bool;
    fn aanderaa_smart_sensor__msg__Turbidity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Turbidity>);
    fn aanderaa_smart_sensor__msg__Turbidity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Turbidity>, out_seq: *mut rosidl_runtime_rs::Sequence<Turbidity>) -> bool;
}

// Corresponds to aanderaa_smart_sensor__msg__Turbidity
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
      if !aanderaa_smart_sensor__msg__Turbidity__init(&mut msg as *mut _) {
        panic!("Call to aanderaa_smart_sensor__msg__Turbidity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Turbidity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Turbidity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Turbidity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { aanderaa_smart_sensor__msg__Turbidity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Turbidity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Turbidity where Self: Sized {
  const TYPE_NAME: &'static str = "aanderaa_smart_sensor/msg/Turbidity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__aanderaa_smart_sensor__msg__Turbidity() }
  }
}


