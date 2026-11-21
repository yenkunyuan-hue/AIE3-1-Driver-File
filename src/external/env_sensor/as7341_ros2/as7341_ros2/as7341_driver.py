from __future__ import annotations

import time
from dataclasses import dataclass, replace
from typing import Dict, Iterable, List, Optional, Sequence, Tuple

from smbus2 import SMBus


@dataclass(frozen=True)
class AS7341Config:
    bus: int = 1
    address: int = 0x39
    atime: int = 29
    astep: int = 599
    gain: int = 4


@dataclass(frozen=True)
class AS7341Sample:
    f1_415nm: int
    f2_445nm: int
    f3_480nm: int
    f4_515nm: int
    f5_555nm: int
    f6_590nm: int
    f7_630nm: int
    f8_680nm: int
    clear: int
    nir: int
    flicker_hz: int
    integration_time_ms: float
    gain: int
    atime: int
    astep: int

    @property
    def visible_values(self) -> List[int]:
        return [
            self.f1_415nm,
            self.f2_445nm,
            self.f3_480nm,
            self.f4_515nm,
            self.f5_555nm,
            self.f6_590nm,
            self.f7_630nm,
            self.f8_680nm,
        ]

    @property
    def all_values(self) -> List[int]:
        return self.visible_values + [self.clear, self.nir]


class AS7341:
    """AS7341 Linux I2C driver for ROS 2.

    The readout sequence follows the public DFRobot and Adafruit AS7341
    libraries:

    1. Clear the CFG0 bank bit so normal registers and SMUX RAM are addressed.
    2. Disable spectral measurement.
    3. Write CFG6 = 0x10, which selects SMUX write command.
    4. Write the 20 byte SMUX RAM configuration.
    5. Set ENABLE.SMUXEN and wait until the device clears it.
    6. Enable spectral measurement and wait for STATUS2.AVALID.

    Two integrations are needed because the AS7341 has six ADC channels but ten
    useful optical outputs:

    * Integration 1: F1, F2, F3, F4, Clear, NIR
    * Integration 2: F5, F6, F7, F8, Clear, NIR
    """

    REG_ENABLE = 0x80
    REG_ATIME = 0x81
    REG_ID = 0x92
    REG_STATUS2 = 0xA3
    REG_CFG0 = 0xA9
    REG_CFG1 = 0xAA
    REG_CFG6 = 0xAF
    REG_ASTEP_L = 0xCA
    REG_ASTEP_H = 0xCB
    REG_CH0_DATA_L = 0x95

    ENABLE_PON = 0x01
    ENABLE_SP_EN = 0x02
    ENABLE_SMUXEN = 0x10

    STATUS2_AVALID = 0x40

    CFG0_BANK = 0x10
    CFG6_SMUX_CMD_WRITE = 0x10

    SUPPORTED_GAINS = [1, 2, 4, 8, 16, 32, 64, 128, 256, 512]

    # AS7341 CFG1 AGAIN enum. Value 0 is 0.5x, value 1 is 1x, etc.
    GAIN_TO_REG = {
        1: 1,
        2: 2,
        4: 3,
        8: 4,
        16: 5,
        32: 6,
        64: 7,
        128: 8,
        256: 9,
        512: 10,
    }

    # Public DFRobot and Adafruit SMUX configurations for F1-F4 and F5-F8.
    # Do not reorder these unless the mapping is intentionally changed.
    SMUX_F1_TO_F4 = [
        0x30, 0x01, 0x00, 0x00, 0x00,
        0x42, 0x00, 0x00, 0x50, 0x00,
        0x00, 0x00, 0x20, 0x04, 0x00,
        0x30, 0x01, 0x50, 0x00, 0x06,
    ]

    SMUX_F5_TO_F8 = [
        0x00, 0x00, 0x00, 0x40, 0x02,
        0x00, 0x10, 0x03, 0x50, 0x10,
        0x03, 0x00, 0x00, 0x00, 0x24,
        0x00, 0x00, 0x50, 0x00, 0x06,
    ]

    def __init__(self, config: AS7341Config):
        self.config = config
        self.bus = SMBus(config.bus)
        self._power_on()
        self.configure(config)

    def close(self) -> None:
        self.bus.close()

    def _read_byte(self, register: int) -> int:
        return self.bus.read_byte_data(self.config.address, register) & 0xFF

    def _write_byte(self, register: int, value: int) -> None:
        self.bus.write_byte_data(self.config.address, register, value & 0xFF)

    def _read_word_le(self, register: int) -> int:
        lo = self._read_byte(register)
        hi = self._read_byte(register + 1)
        return (hi << 8) | lo

    def _write_word_le(self, register: int, value: int) -> None:
        self._write_byte(register, value & 0xFF)
        self._write_byte(register + 1, (value >> 8) & 0xFF)

    def _set_register_bank_low(self, low_bank: bool) -> None:
        """Set AS7341 CFG0.BANK.

        low_bank=False gives access to the normal 0x80+ register map. This is
        also what the DFRobot example forces before SMUX loading.
        """
        value = self._read_byte(self.REG_CFG0)
        if low_bank:
            value |= self.CFG0_BANK
        else:
            value &= ~self.CFG0_BANK
        self._write_byte(self.REG_CFG0, value)

    def _power_on(self) -> None:
        self._set_register_bank_low(False)
        self._write_byte(self.REG_ENABLE, self.ENABLE_PON)
        time.sleep(0.01)

    def configure(self, config: AS7341Config) -> None:
        if not 0 <= int(config.atime) <= 255:
            raise ValueError('atime must be in [0, 255]')
        if not 0 <= int(config.astep) <= 65534:
            raise ValueError('astep must be in [0, 65534]')
        if int(config.gain) not in self.GAIN_TO_REG:
            raise ValueError(f'Unsupported gain {config.gain}. Use one of {self.SUPPORTED_GAINS}')

        self.config = replace(
            config,
            atime=int(config.atime),
            astep=int(config.astep),
            gain=int(config.gain),
        )
        self._set_register_bank_low(False)
        self._enable_spectral_measurement(False)
        self._write_byte(self.REG_ATIME, self.config.atime)
        self._write_word_le(self.REG_ASTEP_L, self.config.astep)
        self._write_byte(self.REG_CFG1, self.GAIN_TO_REG[self.config.gain])
        self._settle_after_config_change()

    def reconfigure(self, *, atime: Optional[int] = None, astep: Optional[int] = None, gain: Optional[int] = None) -> None:
        self.configure(replace(
            self.config,
            atime=self.config.atime if atime is None else int(atime),
            astep=self.config.astep if astep is None else int(astep),
            gain=self.config.gain if gain is None else int(gain),
        ))

    @property
    def integration_time_ms(self) -> float:
        return self.integration_time_ms_from_registers(self.config.atime, self.config.astep)

    @staticmethod
    def integration_time_ms_from_registers(atime: int, astep: int) -> float:
        return (int(atime) + 1) * (int(astep) + 1) * 2.78e-3

    @staticmethod
    def registers_from_integration_time_ms(integration_time_ms: float, preferred_atime: int = 29) -> Tuple[int, int]:
        t_ms = max(0.1, float(integration_time_ms))
        atime = min(max(int(preferred_atime), 0), 255)
        astep = int(round(t_ms / ((atime + 1) * 2.78e-3) - 1.0))
        astep = min(max(astep, 0), 65534)
        return atime, astep

    def _settle_after_config_change(self) -> None:
        time.sleep(min(max(self.integration_time_ms / 1000.0, 0.005), 0.25))

    def read_id(self) -> int:
        self._set_register_bank_low(False)
        return self._read_byte(self.REG_ID)

    def _enable_spectral_measurement(self, enable: bool) -> None:
        self._set_register_bank_low(False)
        current = self._read_byte(self.REG_ENABLE)
        if enable:
            current |= self.ENABLE_SP_EN
        else:
            current &= ~self.ENABLE_SP_EN
        self._write_byte(self.REG_ENABLE, current)

    def _run_smux(self, smux: Sequence[int]) -> None:
        if len(smux) != 20:
            raise ValueError(f'SMUX configuration must contain 20 bytes, got {len(smux)}')

        self._set_register_bank_low(False)
        self._enable_spectral_measurement(False)

        # DFRobot and Adafruit both use CFG6 = 0x10 for SMUX write command.
        self._write_byte(self.REG_CFG6, self.CFG6_SMUX_CMD_WRITE)

        for offset, value in enumerate(smux):
            self._write_byte(offset, value)

        current = self._read_byte(self.REG_ENABLE)
        self._write_byte(self.REG_ENABLE, current | self.ENABLE_SMUXEN)

        timeout = time.monotonic() + 1.0
        while self._read_byte(self.REG_ENABLE) & self.ENABLE_SMUXEN:
            if time.monotonic() > timeout:
                raise TimeoutError('AS7341 SMUX setup timed out')
            time.sleep(0.005)

    def _read_spectral_once(self) -> List[int]:
        self._enable_spectral_measurement(True)

        timeout = time.monotonic() + max(1.0, self.integration_time_ms / 1000.0 + 0.5)
        while not (self._read_byte(self.REG_STATUS2) & self.STATUS2_AVALID):
            if time.monotonic() > timeout:
                self._enable_spectral_measurement(False)
                raise TimeoutError('AS7341 spectral measurement timed out')
            time.sleep(0.005)

        values = [self._read_word_le(self.REG_CH0_DATA_L + 2 * i) for i in range(6)]
        self._enable_spectral_measurement(False)
        return values

    def read_flicker_hz(self) -> int:
        return 0

    def read_all_channels(self) -> AS7341Sample:
        self._run_smux(self.SMUX_F1_TO_F4)
        first = self._read_spectral_once()

        self._run_smux(self.SMUX_F5_TO_F8)
        second = self._read_spectral_once()

        clear = int(round((first[4] + second[4]) / 2.0))
        nir = int(round((first[5] + second[5]) / 2.0))

        return AS7341Sample(
            f1_415nm=first[0],
            f2_445nm=first[1],
            f3_480nm=first[2],
            f4_515nm=first[3],
            f5_555nm=second[0],
            f6_590nm=second[1],
            f7_630nm=second[2],
            f8_680nm=second[3],
            clear=clear,
            nir=nir,
            flicker_hz=self.read_flicker_hz(),
            integration_time_ms=self.integration_time_ms,
            gain=self.config.gain,
            atime=self.config.atime,
            astep=self.config.astep,
        )

    def autorange_once(
        self,
        sample: AS7341Sample,
        states: Sequence[AS7341Config],
        low_threshold_raw: int,
        high_threshold_raw: int,
        use_visible_only: bool = True,
    ) -> bool:
        if not states:
            return False

        values = sample.visible_values if use_visible_only else sample.all_values
        max_raw = max(values) if values else 0
        current_index = self._nearest_state_index(states, self.config)
        next_index = current_index

        if max_raw > int(high_threshold_raw) and current_index > 0:
            next_index = current_index - 1
        elif max_raw < int(low_threshold_raw) and current_index < len(states) - 1:
            next_index = current_index + 1

        if next_index == current_index:
            return False

        target = states[next_index]
        self.reconfigure(atime=target.atime, astep=target.astep, gain=target.gain)
        return True

    @staticmethod
    def build_autorange_states(
        bus: int,
        address: int,
        integration_times_ms: Iterable[float],
        gains: Iterable[int],
        preferred_atime: int = 29,
    ) -> List[AS7341Config]:
        states: List[AS7341Config] = []
        seen = set()
        for integration_ms in integration_times_ms:
            atime, astep = AS7341.registers_from_integration_time_ms(float(integration_ms), preferred_atime)
            for gain in gains:
                gain_i = int(gain)
                if gain_i not in AS7341.GAIN_TO_REG:
                    continue
                key = (atime, astep, gain_i)
                if key in seen:
                    continue
                seen.add(key)
                states.append(AS7341Config(bus=int(bus), address=int(address), atime=atime, astep=astep, gain=gain_i))

        states.sort(key=lambda c: (c.gain * AS7341.integration_time_ms_from_registers(c.atime, c.astep), c.gain))
        return states

    @staticmethod
    def _nearest_state_index(states: Sequence[AS7341Config], config: AS7341Config) -> int:
        # Exact match first. This is important because multiple gain/integration
        # combinations can have almost identical exposure.
        for i, state in enumerate(states):
            if (
                int(state.gain) == int(config.gain)
                and int(state.atime) == int(config.atime)
                and int(state.astep) == int(config.astep)
            ):
                return i

        target_exposure = config.gain * AS7341.integration_time_ms_from_registers(config.atime, config.astep)
        best_index = 0
        best_distance = float('inf')
        for i, state in enumerate(states):
            exposure = state.gain * AS7341.integration_time_ms_from_registers(state.atime, state.astep)
            distance = abs(exposure - target_exposure)
            if distance < best_distance:
                best_index = i
                best_distance = distance
        return best_index

    @staticmethod
    def sample_as_dict(sample: AS7341Sample) -> Dict[str, int]:
        return {
            'F1_415': sample.f1_415nm,
            'F2_445': sample.f2_445nm,
            'F3_480': sample.f3_480nm,
            'F4_515': sample.f4_515nm,
            'F5_555': sample.f5_555nm,
            'F6_590': sample.f6_590nm,
            'F7_630': sample.f7_630nm,
            'F8_680': sample.f8_680nm,
            'CLEAR': sample.clear,
            'NIR': sample.nir,
        }
