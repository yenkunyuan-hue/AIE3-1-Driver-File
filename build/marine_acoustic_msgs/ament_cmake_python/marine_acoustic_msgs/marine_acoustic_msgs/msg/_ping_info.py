# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/PingInfo.idl
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


# Import statements for member types

# Member 'tx_beamwidths'
# Member 'rx_beamwidths'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PingInfo(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'PingInfo'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class PingInfoConstants(typing.TypedDict):
        pass

    __constants: PingInfoConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('marine_acoustic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marine_acoustic_msgs.msg.PingInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ping_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ping_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ping_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ping_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ping_info

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PingInfo(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_PingInfo):
    """Message class 'PingInfo'."""

    __slots__ = [
        '_frequency',
        '_sound_speed',
        '_tx_beamwidths',
        '_rx_beamwidths',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'frequency': 'float',
        'sound_speed': 'float',
        'tx_beamwidths': 'sequence<float>',
        'rx_beamwidths': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, *,
                 frequency: typing.Optional[float] = None,  # noqa: E501
                 sound_speed: typing.Optional[float] = None,  # noqa: E501
                 tx_beamwidths: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 rx_beamwidths: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.frequency = frequency if frequency is not None else float()
        self.sound_speed = sound_speed if sound_speed is not None else float()
        self.tx_beamwidths = tx_beamwidths if tx_beamwidths is not None else array.array('f', [])
        self.rx_beamwidths = rx_beamwidths if rx_beamwidths is not None else array.array('f', [])

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
        if not isinstance(other, PingInfo):
            return False
        if self.frequency != other.frequency:
            return False
        if self.sound_speed != other.sound_speed:
            return False
        if self.tx_beamwidths != other.tx_beamwidths:
            return False
        if self.rx_beamwidths != other.rx_beamwidths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frequency(self) -> float:
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'frequency' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'frequency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._frequency = value

    @builtins.property
    def sound_speed(self) -> float:
        """Message field 'sound_speed'."""
        return self._sound_speed

    @sound_speed.setter
    def sound_speed(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'sound_speed' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'sound_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._sound_speed = value

    @builtins.property
    def tx_beamwidths(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'tx_beamwidths'."""
        return self._tx_beamwidths

    @tx_beamwidths.setter
    def tx_beamwidths(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'tx_beamwidths' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'tx_beamwidths' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._tx_beamwidths = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._tx_beamwidths = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def rx_beamwidths(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'rx_beamwidths'."""
        return self._rx_beamwidths

    @rx_beamwidths.setter
    def rx_beamwidths(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'rx_beamwidths' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'rx_beamwidths' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._rx_beamwidths = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._rx_beamwidths = array.array('f', value)  # type: ignore[assignment]
