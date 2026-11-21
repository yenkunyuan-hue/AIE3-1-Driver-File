# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/SonarRanges.idl
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
    import geometry_msgs.msg  # noqa: E402, I100, I201, I300
    import marine_acoustic_msgs.msg  # noqa: E402, I100, I201, I300
    import std_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

# Member 'transmit_delays'
# Member 'intensities'
# Member 'ranges'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SonarRanges(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'SonarRanges'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class SonarRangesConstants(typing.TypedDict):
        pass

    __constants: SonarRangesConstants = {
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
                'marine_acoustic_msgs.msg.SonarRanges')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sonar_ranges
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sonar_ranges
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sonar_ranges
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sonar_ranges
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sonar_ranges

            from geometry_msgs.msg import Vector3
            if Vector3._TYPE_SUPPORT is None:
                Vector3.__import_type_support__()

            from marine_acoustic_msgs.msg import DetectionFlag
            if DetectionFlag._TYPE_SUPPORT is None:
                DetectionFlag.__import_type_support__()

            from marine_acoustic_msgs.msg import PingInfo
            if PingInfo._TYPE_SUPPORT is None:
                PingInfo.__import_type_support__()

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


class SonarRanges(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_SonarRanges):
    """Message class 'SonarRanges'."""

    __slots__ = [
        '_header',
        '_ping_info',
        '_flags',
        '_transmit_delays',
        '_intensities',
        '_beam_unit_vec',
        '_ranges',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'header': 'std_msgs/Header',
        'ping_info': 'marine_acoustic_msgs/PingInfo',
        'flags': 'sequence<marine_acoustic_msgs/DetectionFlag>',
        'transmit_delays': 'sequence<float>',
        'intensities': 'sequence<float>',
        'beam_unit_vec': 'sequence<geometry_msgs/Vector3>',
        'ranges': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['marine_acoustic_msgs', 'msg'], 'PingInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marine_acoustic_msgs', 'msg'], 'DetectionFlag')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, *,
                 header: typing.Optional[std_msgs.msg.Header] = None,  # noqa: E501
                 ping_info: typing.Optional[marine_acoustic_msgs.msg.PingInfo] = None,  # noqa: E501
                 flags: typing.Optional[collections.abc.Sequence[marine_acoustic_msgs.msg.DetectionFlag]] = None,  # noqa: E501
                 transmit_delays: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 intensities: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 beam_unit_vec: typing.Optional[collections.abc.Sequence[geometry_msgs.msg.Vector3]] = None,  # noqa: E501
                 ranges: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from std_msgs.msg import Header
        self.header = header if header is not None else Header()
        from marine_acoustic_msgs.msg import PingInfo
        self.ping_info = ping_info if ping_info is not None else PingInfo()
        self.flags = flags if flags is not None else []
        self.transmit_delays = transmit_delays if transmit_delays is not None else array.array('f', [])
        self.intensities = intensities if intensities is not None else array.array('f', [])
        self.beam_unit_vec = beam_unit_vec if beam_unit_vec is not None else []
        self.ranges = ranges if ranges is not None else array.array('f', [])

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
        if not isinstance(other, SonarRanges):
            return False
        if self.header != other.header:
            return False
        if self.ping_info != other.ping_info:
            return False
        if self.flags != other.flags:
            return False
        if self.transmit_delays != other.transmit_delays:
            return False
        if self.intensities != other.intensities:
            return False
        if self.beam_unit_vec != other.beam_unit_vec:
            return False
        if self.ranges != other.ranges:
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
    def ping_info(self) -> marine_acoustic_msgs.msg.PingInfo:
        """Message field 'ping_info'."""
        return self._ping_info

    @ping_info.setter
    def ping_info(self, value: marine_acoustic_msgs.msg.PingInfo) -> None:
        from marine_acoustic_msgs.msg import PingInfo

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, PingInfo), \
                    "The 'ping_info' field must be a sub message of type 'PingInfo'"

        self._ping_info = value

    @builtins.property
    def flags(self) -> typing.Annotated[typing.Any, list[marine_acoustic_msgs.msg.DetectionFlag]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value: collections.abc.Sequence[marine_acoustic_msgs.msg.DetectionFlag]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from marine_acoustic_msgs.msg import DetectionFlag

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, DetectionFlag) for v in value) and
                     True), \
                    "The 'flags' field must be sequence and each value of type 'DetectionFlag'"

        if isinstance(value, list):
            self._flags = value
            return
        self._flags = list(value)

    @builtins.property
    def transmit_delays(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'transmit_delays'."""
        return self._transmit_delays

    @transmit_delays.setter
    def transmit_delays(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'transmit_delays' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'transmit_delays' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._transmit_delays = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._transmit_delays = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def intensities(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'intensities'."""
        return self._intensities

    @intensities.setter
    def intensities(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'intensities' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'intensities' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._intensities = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._intensities = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def beam_unit_vec(self) -> typing.Annotated[typing.Any, list[geometry_msgs.msg.Vector3]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'beam_unit_vec'."""
        return self._beam_unit_vec

    @beam_unit_vec.setter
    def beam_unit_vec(self, value: collections.abc.Sequence[geometry_msgs.msg.Vector3]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from geometry_msgs.msg import Vector3

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, Vector3) for v in value) and
                     True), \
                    "The 'beam_unit_vec' field must be sequence and each value of type 'Vector3'"

        if isinstance(value, list):
            self._beam_unit_vec = value
            return
        self._beam_unit_vec = list(value)

    @builtins.property
    def ranges(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'ranges'."""
        return self._ranges

    @ranges.setter
    def ranges(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'ranges' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'ranges' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._ranges = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._ranges = array.array('f', value)  # type: ignore[assignment]
