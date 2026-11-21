# Chip specific AS7341 reading.
# Raw ADC counts from the eight visible bands plus clear and NIR.

std_msgs/Header header

uint16 f1_415nm
uint16 f2_445nm
uint16 f3_480nm
uint16 f4_515nm
uint16 f5_555nm
uint16 f6_590nm
uint16 f7_630nm
uint16 f8_680nm
uint16 clear
uint16 nir

# Flicker estimate in Hz when available. Zero means unavailable or not detected.
uint16 flicker_hz

# Acquisition settings used for the reading.
float32 integration_time_ms
uint16 gain
uint16 atime
uint16 astep
