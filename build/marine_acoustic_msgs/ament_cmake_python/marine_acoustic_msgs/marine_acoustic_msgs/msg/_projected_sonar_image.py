# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/ProjectedSonarImage.idl
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

# Member 'ranges'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProjectedSonarImage(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'ProjectedSonarImage'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class ProjectedSonarImageConstants(typing.TypedDict):
        pass

    __constants: ProjectedSonarImageConstants = {
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
                'marine_acoustic_msgs.msg.ProjectedSonarImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__projected_sonar_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__projected_sonar_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__projected_sonar_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__projected_sonar_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__projected_sonar_image

            from geometry_msgs.msg import Vector3
            if Vector3._TYPE_SUPPORT is None:
                Vector3.__import_type_support__()

            from marine_acoustic_msgs.msg import PingInfo
            if PingInfo._TYPE_SUPPORT is None:
                PingInfo.__import_type_support__()

            from marine_acoustic_msgs.msg import SonarImageData
            if SonarImageData._TYPE_SUPPORT is None:
                SonarImageData.__import_type_support__()

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


class ProjectedSonarImage(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_ProjectedSonarImage):
    """Message class 'ProjectedSonarImage'."""

    __slots__ = [
        '_header',
        '_ping_info',
        '_beam_directions',
        '_ranges',
        '_image',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'header': 'std_msgs/Header',
        'ping_info': 'marine_acoustic_msgs/PingInfo',
        'beam_directions': 'sequence<geometry_msgs/Vector3>',
        'ranges': 'sequence<float>',
        'image': 'marine_acoustic_msgs/SonarImageData',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['marine_acoustic_msgs', 'msg'], 'PingInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['marine_acoustic_msgs', 'msg'], 'SonarImageData'),  # noqa: E501
    )

    def __init__(self, *,
                 header: typing.Optional[std_msgs.msg.Header] = None,  # noqa: E501
                 ping_info: typing.Optional[marine_acoustic_msgs.msg.PingInfo] = None,  # noqa: E501
                 beam_directions: typing.Optional[collections.abc.Sequence[geometry_msgs.msg.Vector3]] = None,  # noqa: E501
                 ranges: typing.Optional[collections.abc.Sequence[float]] = None,  # noqa: E501
                 image: typing.Optional[marine_acoustic_msgs.msg.SonarImageData] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from std_msgs.msg import Header
        self.header = header if header is not None else Header()
        from marine_acoustic_msgs.msg import PingInfo
        self.ping_info = ping_info if ping_info is not None else PingInfo()
        self.beam_directions = beam_directions if beam_directions is not None else []
        self.ranges = ranges if ranges is not None else array.array('f', [])
        from marine_acoustic_msgs.msg import SonarImageData
        self.image = image if image is not None else SonarImageData()

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
        if not isinstance(other, ProjectedSonarImage):
            return False
        if self.header != other.header:
            return False
        if self.ping_info != other.ping_info:
            return False
        if self.beam_directions != other.beam_directions:
            return False
        if self.ranges != other.ranges:
            return False
        if self.image != other.image:
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
    def beam_directions(self) -> typing.Annotated[typing.Any, list[geometry_msgs.msg.Vector3]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'beam_directions'."""
        return self._beam_directions

    @beam_directions.setter
    def beam_directions(self, value: collections.abc.Sequence[geometry_msgs.msg.Vector3]) -> None:
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
                    "The 'beam_directions' field must be sequence and each value of type 'Vector3'"

        if isinstance(value, list):
            self._beam_directions = value
            return
        self._beam_directions = list(value)

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

    @builtins.property
    def image(self) -> marine_acoustic_msgs.msg.SonarImageData:
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value: marine_acoustic_msgs.msg.SonarImageData) -> None:
        from marine_acoustic_msgs.msg import SonarImageData

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, SonarImageData), \
                    "The 'image' field must be a sub message of type 'SonarImageData'"

        self._image = value
