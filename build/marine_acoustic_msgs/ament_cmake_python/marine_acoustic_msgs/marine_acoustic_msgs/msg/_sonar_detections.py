# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/SonarDetections.idl
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
    import marine_acoustic_msgs.msg  # noqa: E402, I100, I201, I300
    import std_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

# Member 'two_way_travel_times'
# Member 'tx_delays'
# Member 'intensities'
# Member 'tx_angles'
# Member 'rx_angles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SonarDetections(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'SonarDetections'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class SonarDetectionsConstants(typing.TypedDict):
        pass

    __constants: SonarDetectionsConstants = {
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
                'marine_acoustic_msgs.msg.SonarDetections')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sonar_detections
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sonar_detections
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sonar_detections
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sonar_detections
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sonar_detections

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


class SonarDetections(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_SonarDetections):
    """Message class 'SonarDetections'."""

    __slots__ = [
        '_header',
        '_ping_info',
        '_flags',
        '_two_way_travel_times',
        '_tx_delays',
        '_intensities',
        '_tx_angles',
        '_rx_angles',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'header': 'std_msgs/Header',
        'ping_info': 'marine_acoustic_msgs/PingInfo',
        'flags': 'sequence<marine_acoustic_msgs/DetectionFlag>',
        'two_way_travel_times': 'sequence<float>',
        'tx_delays': 'sequence<float>',
        'intensities': 'sequence<float>',
        'tx_angles': 'sequence<float>',
        'rx_angles': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['marine_acoustic_msgs', 'msg'], 'PingInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['marine_acoustic_msgs', 'msg'], 'DetectionFlag')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, *,
                 header: typing.Optional[std_msgs.msg.Header] = None,  # noqa: E501
                 ping_info: typing.Optional[marine_acoustic_msgs.msg.PingInfo] = None,  # noqa: E501
                 flags: typing.Optional[collections.abc.Sequence[marine_acoustic_msgs.msg.DetectionFlag]] = None,  # noqa: E501
                 two_way_travel_times: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 tx_delays: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 intensities: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 tx_angles: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 rx_angles: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
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
        self.two_way_travel_times = two_way_travel_times if two_way_travel_times is not None else array.array('f', [])
        self.tx_delays = tx_delays if tx_delays is not None else array.array('f', [])
        self.intensities = intensities if intensities is not None else array.array('f', [])
        self.tx_angles = tx_angles if tx_angles is not None else array.array('f', [])
        self.rx_angles = rx_angles if rx_angles is not None else array.array('f', [])

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
        if not isinstance(other, SonarDetections):
            return False
        if self.header != other.header:
            return False
        if self.ping_info != other.ping_info:
            return False
        if self.flags != other.flags:
            return False
        if self.two_way_travel_times != other.two_way_travel_times:
            return False
        if self.tx_delays != other.tx_delays:
            return False
        if self.intensities != other.intensities:
            return False
        if self.tx_angles != other.tx_angles:
            return False
        if self.rx_angles != other.rx_angles:
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
    def two_way_travel_times(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'two_way_travel_times'."""
        return self._two_way_travel_times

    @two_way_travel_times.setter
    def two_way_travel_times(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'two_way_travel_times' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'two_way_travel_times' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._two_way_travel_times = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._two_way_travel_times = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def tx_delays(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'tx_delays'."""
        return self._tx_delays

    @tx_delays.setter
    def tx_delays(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'tx_delays' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'tx_delays' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._tx_delays = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._tx_delays = array.array('f', value)  # type: ignore[assignment]

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
    def tx_angles(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'tx_angles'."""
        return self._tx_angles

    @tx_angles.setter
    def tx_angles(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'tx_angles' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'tx_angles' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._tx_angles = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._tx_angles = array.array('f', value)  # type: ignore[assignment]

    @builtins.property
    def rx_angles(self) -> typing.Annotated[typing.Any, array.array[float]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'rx_angles'."""
        return self._rx_angles

    @rx_angles.setter
    def rx_angles(self, value: collections.abc.Sequence[float]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'rx_angles' array.array() must have the type code of 'f'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'rx_angles' field must be sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, array.array):
            self._rx_angles = value
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._rx_angles = array.array('f', value)  # type: ignore[assignment]
