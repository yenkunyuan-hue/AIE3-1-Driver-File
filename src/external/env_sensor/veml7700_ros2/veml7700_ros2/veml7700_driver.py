from __future__ import annotations

import time
from dataclasses import dataclass
from typing import List, Tuple

from smbus2 import SMBus


@dataclass(frozen=True)
class VEML7700Config:
    bus: int = 1
    address: int = 0x10
    gain: str = "1/8"
    integration_time_ms: int = 100
    persistence: int = 1
    interrupt_enable: bool = False
    shutdown: bool = False


@dataclass(frozen=True)
class VEML7700Reading:
    raw_als: int
    raw_white: int
    lux: float
    gain: str
    integration_time_ms: int
    lux_resolution: float
    saturated: bool
    autorange_changed: bool


class VEML7700:
    """Minimal VEML7700 I2C driver with optional auto ranging.

    The sensor is configured by gain and ALS integration time. Lux is always
    calculated from the raw ALS count using the active gain and integration
    settings, so readings remain in lux even when auto ranging changes the
    sensor configuration.
    """

    REG_ALS_CONF = 0x00
    REG_ALS_WH = 0x01
    REG_ALS_WL = 0x02
    REG_POWER_SAVE = 0x03
    REG_ALS = 0x04
    REG_WHITE = 0x05
    REG_INTERRUPT = 0x06

    GAIN_BITS = {
        "1": 0b00,
        "2": 0b01,
        "1/8": 0b10,
        "1/4": 0b11,
    }

    IT_BITS = {
        25: 0b1100,
        50: 0b1000,
        100: 0b0000,
        200: 0b0001,
        400: 0b0010,
        800: 0b0011,
    }

    # Resolution at gain 1/8 and integration 100 ms is 0.4608 lx/count.
    # Scale from that reference according to gain and integration time.
    GAIN_FACTOR = {
        "2": 1.0 / 16.0,
        "1": 1.0 / 8.0,
        "1/4": 0.5,
        "1/8": 1.0,
    }

    # Ordered from most sensitive to least sensitive. Auto ranging moves along
    # this table while retaining lux by applying the matching conversion factor.
    AUTO_RANGE_TABLE: List[Tuple[str, int]] = [
        ("2", 800),
        ("2", 400),
        ("2", 200),
        ("2", 100),
        ("1", 100),
        ("1/4", 100),
        ("1/8", 100),
        ("1/8", 50),
        ("1/8", 25),
    ]

    def __init__(self, config: VEML7700Config):
        self.config = config
        self.bus = SMBus(config.bus)
        self.configure(config)

    def close(self) -> None:
        self.bus.close()

    def _write_word(self, register: int, value: int) -> None:
        self.bus.write_word_data(self.config.address, register, value & 0xFFFF)

    def _read_word(self, register: int) -> int:
        return self.bus.read_word_data(self.config.address, register) & 0xFFFF

    def configure(self, config: VEML7700Config, settle: bool = True) -> None:
        self._validate_config(config)
        self.config = config

        persistence_bits = {1: 0b00, 2: 0b01, 4: 0b10, 8: 0b11}[config.persistence]
        conf = 0
        conf |= self.GAIN_BITS[config.gain] << 11
        conf |= self.IT_BITS[config.integration_time_ms] << 6
        conf |= persistence_bits << 4
        conf |= int(config.interrupt_enable) << 1
        conf |= int(config.shutdown)
        self._write_word(self.REG_ALS_CONF, conf)
        if settle:
            self.wait_for_integration()

    def update_measurement_config(
        self,
        gain: str | None = None,
        integration_time_ms: int | None = None,
        settle: bool = True,
    ) -> None:
        self.configure(
            VEML7700Config(
                bus=self.config.bus,
                address=self.config.address,
                gain=self.config.gain if gain is None else gain,
                integration_time_ms=(
                    self.config.integration_time_ms
                    if integration_time_ms is None
                    else integration_time_ms
                ),
                persistence=self.config.persistence,
                interrupt_enable=self.config.interrupt_enable,
                shutdown=self.config.shutdown,
            ),
            settle=settle,
        )

    def wait_for_integration(self) -> None:
        time.sleep(self.config.integration_time_ms / 1000.0 + 0.01)

    @classmethod
    def _validate_config(cls, config: VEML7700Config) -> None:
        if config.gain not in cls.GAIN_BITS:
            raise ValueError(f"Unsupported gain {config.gain}. Use one of {sorted(cls.GAIN_BITS)}")
        if config.integration_time_ms not in cls.IT_BITS:
            raise ValueError("Unsupported integration time. Use 25, 50, 100, 200, 400, or 800 ms")
        if config.persistence not in (1, 2, 4, 8):
            raise ValueError("Unsupported persistence. Use 1, 2, 4, or 8")

    @property
    def lux_resolution(self) -> float:
        integration_factor = 100.0 / float(self.config.integration_time_ms)
        return 0.4608 * self.GAIN_FACTOR[self.config.gain] * integration_factor

    def read_raw_als(self) -> int:
        return self._read_word(self.REG_ALS)

    def read_raw_white(self) -> int:
        return self._read_word(self.REG_WHITE)

    @staticmethod
    def apply_high_lux_correction(lux: float) -> float:
        """Apply the VEML7700 high light nonlinearity correction.

        The correction is normally only relevant at high lux values. It is kept
        separate so callers can disable it if they want purely linear raw count
        scaling.
        """
        if lux <= 1000.0:
            return lux
        return (
            (6.0135e-13 * lux ** 4)
            - (9.3924e-9 * lux ** 3)
            + (8.1488e-5 * lux ** 2)
            + (1.0023 * lux)
        )

    def raw_to_lux(self, raw_als: int, high_lux_correction: bool = True) -> float:
        lux = float(raw_als) * self.lux_resolution
        if high_lux_correction:
            lux = self.apply_high_lux_correction(lux)
        return lux

    def read_lux(self, high_lux_correction: bool = True) -> float:
        raw = self.read_raw_als()
        return self.raw_to_lux(raw, high_lux_correction=high_lux_correction)

    def read(self, high_lux_correction: bool = True) -> VEML7700Reading:
        raw_als = self.read_raw_als()
        raw_white = self.read_raw_white()
        return VEML7700Reading(
            raw_als=raw_als,
            raw_white=raw_white,
            lux=self.raw_to_lux(raw_als, high_lux_correction=high_lux_correction),
            gain=self.config.gain,
            integration_time_ms=self.config.integration_time_ms,
            lux_resolution=self.lux_resolution,
            saturated=raw_als >= 0xFFFF,
            autorange_changed=False,
        )

    def _autorange_index(self) -> int:
        state = (self.config.gain, self.config.integration_time_ms)
        if state not in self.AUTO_RANGE_TABLE:
            # Snap unsupported but valid manual combinations to the closest
            # sensitivity used by the auto range table.
            current_sensitivity = 1.0 / self.lux_resolution
            distances = []
            current_config = self.config
            for idx, (gain, it_ms) in enumerate(self.AUTO_RANGE_TABLE):
                self.config = VEML7700Config(
                    bus=current_config.bus,
                    address=current_config.address,
                    gain=gain,
                    integration_time_ms=it_ms,
                    persistence=current_config.persistence,
                    interrupt_enable=current_config.interrupt_enable,
                    shutdown=current_config.shutdown,
                )
                distances.append(abs((1.0 / self.lux_resolution) - current_sensitivity))
            self.config = current_config
            return min(range(len(distances)), key=distances.__getitem__)
        return self.AUTO_RANGE_TABLE.index(state)

    def _move_autorange(self, direction: int) -> bool:
        """Move auto range.

        direction = -1 increases sensitivity.
        direction = +1 decreases sensitivity.
        """
        idx = self._autorange_index()
        new_idx = max(0, min(len(self.AUTO_RANGE_TABLE) - 1, idx + direction))
        if new_idx == idx:
            return False
        gain, it_ms = self.AUTO_RANGE_TABLE[new_idx]
        self.update_measurement_config(gain=gain, integration_time_ms=it_ms, settle=True)
        return True

    def read_autorange(
        self,
        low_threshold_counts: int = 1000,
        high_threshold_counts: int = 55000,
        max_adjustments: int = 4,
        high_lux_correction: bool = True,
    ) -> VEML7700Reading:
        """Read ALS with automatic gain and integration adjustment.

        The method reads with the current sensor configuration, checks whether
        the ADC count is too low or too close to saturation, changes gain or
        integration time when useful, waits for the new integration period, and
        rereads. The returned lux value is calculated using the final active
        configuration.
        """
        changed = False
        reading = self.read(high_lux_correction=high_lux_correction)

        for _ in range(max(0, max_adjustments)):
            if reading.raw_als >= high_threshold_counts:
                if not self._move_autorange(direction=+1):
                    break
                changed = True
                reading = self.read(high_lux_correction=high_lux_correction)
                continue

            if reading.raw_als <= low_threshold_counts and reading.raw_als != 0:
                if not self._move_autorange(direction=-1):
                    break
                changed = True
                reading = self.read(high_lux_correction=high_lux_correction)
                continue

            break

        return VEML7700Reading(
            raw_als=reading.raw_als,
            raw_white=reading.raw_white,
            lux=reading.lux,
            gain=reading.gain,
            integration_time_ms=reading.integration_time_ms,
            lux_resolution=reading.lux_resolution,
            saturated=reading.raw_als >= high_threshold_counts,
            autorange_changed=changed,
        )
