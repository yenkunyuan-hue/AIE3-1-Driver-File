from __future__ import annotations

import csv
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, List, Sequence

import yaml


DEFAULT_INPUT_CHANNELS = [
    'F1_415', 'F2_445', 'F3_480', 'F4_515',
    'F5_555', 'F6_590', 'F7_630', 'F8_680',
    'CLEAR', 'NIR',
]

DEFAULT_WAVELENGTHS_NM = [415.0, 445.0, 480.0, 515.0, 555.0, 590.0, 630.0, 680.0, 0.0, 0.0]
DEFAULT_FWHM_NM = [26.0, 30.0, 36.0, 39.0, 39.0, 40.0, 50.0, 52.0, 0.0, 0.0]


@dataclass(frozen=True)
class SpectralCalibrationResult:
    channel_names: List[str]
    wavelengths_nm: List[float]
    fwhm_nm: List[float]
    values: List[float]
    unit: str


@dataclass(frozen=True)
class MatrixCalibration:
    input_channels: List[str]
    output_channels: List[str]
    wavelengths_nm: List[float]
    fwhm_nm: List[float]
    matrix: List[List[float]]
    bias: List[float]
    unit: str = 'calibrated_unit'

    @staticmethod
    def from_file(path: str | Path) -> 'MatrixCalibration':
        matrix_path = Path(path).expanduser()
        suffix = matrix_path.suffix.lower()
        if suffix in {'.csv', '.txt'}:
            return MatrixCalibration.from_csv(matrix_path)
        if suffix in {'.yaml', '.yml'}:
            return MatrixCalibration.from_yaml(matrix_path)
        raise ValueError(f'Unsupported calibration matrix file type: {matrix_path}')

    @staticmethod
    def from_csv(path: str | Path) -> 'MatrixCalibration':
        """Load a semicolon separated AS7341 correction matrix CSV.

        Expected format:

        channel_name;wavelength_nm;fwhm_nm;bias;F1_415;F2_445;...;NIR
        S380;380;1;0;...

        This keeps the ams OSRAM and Verodin style of distributing correction
        matrices as CSV files, while still using the same runtime calibration
        pipeline as the YAML loader.
        """
        csv_path = Path(path).expanduser()
        if not csv_path.exists():
            raise FileNotFoundError(f'Calibration matrix file does not exist: {csv_path}')

        with csv_path.open('r', newline='') as f:
            sample = f.read(4096)
            f.seek(0)
            delimiter = ';' if sample.count(';') >= sample.count(',') else ','
            reader = csv.DictReader(f, delimiter=delimiter)
            if not reader.fieldnames:
                raise ValueError(f'Calibration CSV has no header: {csv_path}')

            meta_columns = {'channel_name', 'wavelength_nm', 'fwhm_nm', 'bias'}
            input_channels = [h for h in reader.fieldnames if h not in meta_columns and h]
            if not input_channels:
                input_channels = list(DEFAULT_INPUT_CHANNELS)

            output_channels: List[str] = []
            wavelengths_nm: List[float] = []
            fwhm_nm: List[float] = []
            matrix: List[List[float]] = []
            bias: List[float] = []

            for idx, row in enumerate(reader):
                name = str(row.get('channel_name') or f'out_{idx}')
                output_channels.append(name)
                wavelengths_nm.append(float(row.get('wavelength_nm') or 0.0))
                fwhm_nm.append(float(row.get('fwhm_nm') or 0.0))
                bias.append(float(row.get('bias') or 0.0))
                matrix.append([float(row.get(ch) or 0.0) for ch in input_channels])

        if not output_channels:
            raise ValueError(f'Calibration CSV contains no rows: {csv_path}')

        unit = 'reconstructed_relative_spectrum' if len(output_channels) > 10 else 'calibrated_unit'
        return MatrixCalibration(
            input_channels=input_channels,
            output_channels=output_channels,
            wavelengths_nm=wavelengths_nm,
            fwhm_nm=fwhm_nm,
            matrix=matrix,
            bias=bias,
            unit=unit,
        )

    @staticmethod
    def from_yaml(path: str | Path) -> 'MatrixCalibration':
        """Load a matrix calibration from YAML.

        YAML schema:

        unit: reconstructed_relative_spectrum
        input_channels: [F1_415, F2_445, F3_480, F4_515, F5_555, F6_590, F7_630, F8_680, CLEAR, NIR]
        rows:
          - channel_name: S380
            wavelength_nm: 380.0
            fwhm_nm: 1.0
            bias: 0.0
            coefficients:
              F1_415: 0.19414
              F2_445: -0.03387
              ...

        Alternatively, coefficients may be a list in input_channels order.
        Each output is computed as y_i = bias_i + sum_j coefficients[i][j] * x_j.
        """
        yaml_path = Path(path).expanduser()
        if not yaml_path.exists():
            raise FileNotFoundError(f'Calibration matrix file does not exist: {yaml_path}')

        with yaml_path.open('r') as f:
            data = yaml.safe_load(f)

        if not isinstance(data, dict):
            raise ValueError(f'Calibration YAML must contain a mapping: {yaml_path}')

        unit = str(data.get('unit', 'calibrated_unit'))
        input_channels = [str(v) for v in data.get('input_channels', DEFAULT_INPUT_CHANNELS)]
        rows = data.get('rows')
        if not isinstance(rows, list) or not rows:
            raise ValueError(f'Calibration YAML must contain a non-empty rows list: {yaml_path}')

        output_channels: List[str] = []
        wavelengths_nm: List[float] = []
        fwhm_nm: List[float] = []
        matrix: List[List[float]] = []
        bias: List[float] = []

        for idx, row in enumerate(rows):
            if not isinstance(row, dict):
                raise ValueError(f'Calibration row {idx} must be a mapping')
            name = str(row.get('channel_name', f'out_{idx}'))
            output_channels.append(name)
            wavelengths_nm.append(float(row.get('wavelength_nm', 0.0)))
            fwhm_nm.append(float(row.get('fwhm_nm', 0.0)))
            bias.append(float(row.get('bias', 0.0)))

            coeffs = row.get('coefficients')
            if isinstance(coeffs, dict):
                matrix.append([float(coeffs.get(ch, 0.0)) for ch in input_channels])
            elif isinstance(coeffs, list):
                if len(coeffs) != len(input_channels):
                    raise ValueError(
                        f'Calibration row {idx} has {len(coeffs)} coefficients, expected {len(input_channels)}'
                    )
                matrix.append([float(v) for v in coeffs])
            else:
                raise ValueError(f'Calibration row {idx} must contain coefficients as mapping or list')

        return MatrixCalibration(
            input_channels=input_channels,
            output_channels=output_channels,
            wavelengths_nm=wavelengths_nm,
            fwhm_nm=fwhm_nm,
            matrix=matrix,
            bias=bias,
            unit=unit,
        )

    def apply(self, input_values: Dict[str, float]) -> SpectralCalibrationResult:
        x = [float(input_values.get(ch, 0.0)) for ch in self.input_channels]
        out: List[float] = []
        for row, b in zip(self.matrix, self.bias):
            out.append(float(b) + sum(float(a) * float(v) for a, v in zip(row, x)))
        return SpectralCalibrationResult(
            channel_names=list(self.output_channels),
            wavelengths_nm=list(self.wavelengths_nm),
            fwhm_nm=list(self.fwhm_nm),
            values=out,
            unit=self.unit,
        )


class AS7341Calibrator:
    """Exposure normalization plus optional CSV or YAML matrix calibration."""

    def __init__(
        self,
        mode: str = 'exposure_normalized',
        matrix_file: str = '',
        dark_offsets: Sequence[float] | None = None,
        calibration_scale: float = 1.0,
    ) -> None:
        self.mode = str(mode).strip().lower()
        self.dark_offsets = list(dark_offsets or [0.0] * len(DEFAULT_INPUT_CHANNELS))
        if len(self.dark_offsets) != len(DEFAULT_INPUT_CHANNELS):
            raise ValueError(f'dark_offsets must have {len(DEFAULT_INPUT_CHANNELS)} values')
        self.calibration_scale = float(calibration_scale)
        self.matrix: MatrixCalibration | None = None
        if self.mode == 'matrix':
            if not matrix_file:
                raise ValueError('calibration_matrix_file must be set when calibration_mode is matrix')
            self.matrix = MatrixCalibration.from_file(matrix_file)
        elif self.mode not in {'raw', 'exposure_normalized'}:
            raise ValueError("calibration_mode must be 'raw', 'exposure_normalized', or 'matrix'")

    def exposure_normalized_values(self, raw_values: Sequence[int], gain: int, integration_time_ms: float) -> Dict[str, float]:
        exposure = max(float(gain) * float(integration_time_ms), 1e-9)
        corrected: Dict[str, float] = {}
        for name, raw, dark in zip(DEFAULT_INPUT_CHANNELS, raw_values, self.dark_offsets):
            corrected[name] = max(0.0, float(raw) - float(dark)) / exposure
        return corrected

    def apply(self, raw_values: Sequence[int], gain: int, integration_time_ms: float) -> SpectralCalibrationResult:
        if self.mode == 'raw':
            return SpectralCalibrationResult(
                channel_names=list(DEFAULT_INPUT_CHANNELS),
                wavelengths_nm=list(DEFAULT_WAVELENGTHS_NM),
                fwhm_nm=list(DEFAULT_FWHM_NM),
                values=[float(v) for v in raw_values],
                unit='count',
            )

        normalized = self.exposure_normalized_values(raw_values, gain, integration_time_ms)
        if self.mode == 'exposure_normalized':
            return SpectralCalibrationResult(
                channel_names=list(DEFAULT_INPUT_CHANNELS),
                wavelengths_nm=list(DEFAULT_WAVELENGTHS_NM),
                fwhm_nm=list(DEFAULT_FWHM_NM),
                values=[self.calibration_scale * normalized[name] for name in DEFAULT_INPUT_CHANNELS],
                unit='count_per_gain_ms',
            )

        assert self.matrix is not None
        result = self.matrix.apply(normalized)
        return SpectralCalibrationResult(
            channel_names=result.channel_names,
            wavelengths_nm=result.wavelengths_nm,
            fwhm_nm=result.fwhm_nm,
            values=[self.calibration_scale * v for v in result.values],
            unit=result.unit,
        )
