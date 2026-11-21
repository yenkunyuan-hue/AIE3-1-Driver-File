#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to marine_environment_msgs__msg__Conductivity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Conductivity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// mS/cm
    pub conductivity: f32,

    /// PSU
    pub salinity: f32,

}



impl Default for Conductivity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Conductivity::default())
  }
}

impl rosidl_runtime_rs::Message for Conductivity {
  type RmwMsg = super::msg::rmw::Conductivity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        conductivity: msg.conductivity,
        salinity: msg.salinity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      conductivity: msg.conductivity,
      salinity: msg.salinity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      conductivity: msg.conductivity,
      salinity: msg.salinity,
    }
  }
}


// Corresponds to marine_environment_msgs__msg__Density

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Density {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// kg/m^3
    pub density: f32,

}



impl Default for Density {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Density::default())
  }
}

impl rosidl_runtime_rs::Message for Density {
  type RmwMsg = super::msg::rmw::Density;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        density: msg.density,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      density: msg.density,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      density: msg.density,
    }
  }
}


// Corresponds to marine_environment_msgs__msg__SoundSpeed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SoundSpeed {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// m/s
    pub sound_speed: f32,

}



impl Default for SoundSpeed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SoundSpeed::default())
  }
}

impl rosidl_runtime_rs::Message for SoundSpeed {
  type RmwMsg = super::msg::rmw::SoundSpeed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sound_speed: msg.sound_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sound_speed: msg.sound_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sound_speed: msg.sound_speed,
    }
  }
}


// Corresponds to marine_environment_msgs__msg__SpectralReading
/// Generic point spectral sensor reading.
/// Arrays are aligned by index.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpectralReading {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub channel_name: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wavelength_nm: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fwhm_nm: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub intensity: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub unit: std::string::String,

}



impl Default for SpectralReading {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SpectralReading::default())
  }
}

impl rosidl_runtime_rs::Message for SpectralReading {
  type RmwMsg = super::msg::rmw::SpectralReading;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        channel_name: msg.channel_name
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        wavelength_nm: msg.wavelength_nm.as_slice().into(),
        fwhm_nm: msg.fwhm_nm.as_slice().into(),
        intensity: msg.intensity.as_slice().into(),
        raw: msg.raw.as_slice().into(),
        unit: msg.unit.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        channel_name: msg.channel_name
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        wavelength_nm: msg.wavelength_nm.as_slice().into(),
        fwhm_nm: msg.fwhm_nm.as_slice().into(),
        intensity: msg.intensity.as_slice().into(),
        raw: msg.raw.as_slice().into(),
        unit: msg.unit.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      channel_name: msg.channel_name
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      wavelength_nm: msg.wavelength_nm.into(),
      fwhm_nm: msg.fwhm_nm.into(),
      intensity: msg.intensity.into(),
      raw: msg.raw.into(),
      unit: msg.unit.to_string(),
    }
  }
}


// Corresponds to marine_environment_msgs__msg__Turbidity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Turbidity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ntu: f32,

}



impl Default for Turbidity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Turbidity::default())
  }
}

impl rosidl_runtime_rs::Message for Turbidity {
  type RmwMsg = super::msg::rmw::Turbidity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        ntu: msg.ntu,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      ntu: msg.ntu,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      ntu: msg.ntu,
    }
  }
}


