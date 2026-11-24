# Generic point spectral sensor reading.
# Arrays are aligned by index.

std_msgs/Header header

string[] channel_name
float32[] wavelength_nm
float32[] fwhm_nm
float32[] value
uint16[] raw
string unit
