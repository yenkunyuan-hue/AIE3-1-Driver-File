# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_environment_msgs:msg/SpectralReading.idl
# generated code does not contain a copyright notice

from __future__ import annotations

import collections.abc
import os
import typing

import rosidl_pycommon.interface_base_classes

if typing.TYPE_CHECKING:
    from ctypes import Structure

    class PyCapsule(Structure):
        pass  # don't need to define the full structure


# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
ros_python_check_fields = os.getenv('ROS_PYTHON_CHECK_FIELDS', default='')


if typing.TYPE_CHECKING:
    import std_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

# Member 'wavelength_nm'
# Member 'fwhm_nm'
# Member 'intensity'
# Member 'raw'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpectralReading(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'SpectralReading'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class SpectralReadingConstants(typing.TypedDict):
        pass

    __constants: SpectralReadingConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('marine_environment_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marine_environment_msgs.msg.SpectralReading')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spectral_reading
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spectral_reading
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spectral_reading
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spectral_reading
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spectral_reading

            from std_msgs.msg import Header
            if Header._TYPE_SUPPORT is None:
                Header.__import_type_support__()

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpectralReading(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_SpectralReading):
    """Message class 'SpectralReading'."""

    __slots__ = [
        '_header',
        '_channel_name',
        '_wavelength_nm',
        '_fwhm_nm',
        '_intensity',
        '_raw',
        '_unit',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'header': 'std_msgs/Header',
        'channel_name': 'sequence<string>',
        'wavelength_nm': 'sequence<float>',
        'fwhm_nm': 'sequence<float>',
        'intensity': 'sequence<float>',
        'raw': 'sequence<uint16>',
        'unit': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, *,
                 header: typing.Optional[std_msgs.msg.Header] = None,  # noqa: E501
                 channel_name: typing.Optional[collections.abc.Sequence[str]] = None,  # noqa: E501
                 wavelength_nm: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 fwhm_nm: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 intensity: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 raw: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 unit: typing.Optional[str] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from std_msgs.msg import Header
        self.header = header if header is not None else Header()
        self.channel_name = channel_name if channel_name is not None else []
        self.wavelength_nm = wavelength_nm if wavelength_nm is not None else array.array('f', [])
        self.fwhm_nm = fwhm_nm if fwhm_nm is not None else array.array('f', [])
        self.intensity = intensity if intensity is not None else array.array('f', [])
        self.raw = raw if raw is not None else array.array('H', [])
        self.unit = unit if unit is not None else str()

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, SpectralReading):
            return False
        if self.header != other.header:
            return False
        if self.channel_name != other.channel_name:
            return False
        if self.wavelength_nm != other.wavelength_nm:
            return False
        if self.fwhm_nm != other.fwhm_nm:
            return False
        if self.intensity != other.intensity:
            return False
        if self.raw != other.raw:
            return False
        if self.unit != other.unit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self) -> std_msgs.msg.Header:
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value: std_msgs.msg.Header) -> None:
        from std_msgs.msg import Header

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Header), \
                    "The 'header' field must be a sub message of type 'Header'"

        self._header = value

    @builtins.property
    def channel_name(self) -> typing.Annotated[typing.Any, list[str]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'channel_name'."""
        return self._channel_name

    @channel_name.setter
    def channel_name(self, value: collections.abc.Sequence[str]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, str) for v in value) and
                     True), \
                    "The 'channel_name' field must be sequence and each value of type 'str'"

        if isinstance(value, list):
            self._channel_name = value
            return
        self._channel_name = list(value)

    @builtins.property
    def wavelength_nm(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'wavelength_nm'."""
        return self._wavelength_nm

    @wavelength_nm.setter
    def wavelength_nm(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'wavelength_nm' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'wavelength_nm' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._wavelength_nm = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._wavelength_nm = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def fwhm_nm(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'fwhm_nm'."""
        return self._fwhm_nm

    @fwhm_nm.setter
    def fwhm_nm(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'fwhm_nm' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'fwhm_nm' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._fwhm_nm = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._fwhm_nm = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def intensity(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'intensity'."""
        return self._intensity

    @intensity.setter
    def intensity(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'intensity' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'intensity' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._intensity = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._intensity = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def raw(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'raw'."""
        return self._raw

    @raw.setter
    def raw(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'H', \
                    "The 'raw' array.array() must have the type code of 'H'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= 0 and val < 65536 for val in value)), \
                    "The 'raw' field must be sequence and each value of type 'int' and each unsigned integer in [0, 65535]"

        if isinstance(value, array.array):
            self._raw = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._raw = array.array('H', value)  # type: ignore[assignment]

    @builtins.property
    def unit(self) -> str:
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value: str) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, str), \
                    "The 'unit' field must be of type 'str'"

        self._unit = value
