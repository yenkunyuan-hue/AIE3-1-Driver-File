# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/Dvl.idl
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
    import numpy.typing  # noqa: E402, I100, I201, I300
    import std_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'velocity_covar'
# Member 'range'
# Member 'range_covar'
# Member 'beam_quality'
# Member 'beam_velocity'
# Member 'beam_velocity_covar'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dvl(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Dvl'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class DvlConstants(typing.TypedDict):
        DVL_MODE_BOTTOM: typing.Literal[1]
        DVL_MODE_WATER: typing.Literal[2]
        DVL_TYPE_PISTON: typing.Literal[0]
        DVL_TYPE_PHASED_ARRAY: typing.Literal[1]

    __constants: DvlConstants = {
        'DVL_MODE_BOTTOM': 1,
        'DVL_MODE_WATER': 2,
        'DVL_TYPE_PISTON': 0,
        'DVL_TYPE_PHASED_ARRAY': 1,
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
                'marine_acoustic_msgs.msg.Dvl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dvl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dvl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dvl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dvl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dvl

            from geometry_msgs.msg import Vector3
            if Vector3._TYPE_SUPPORT is None:
                Vector3.__import_type_support__()

            from std_msgs.msg import Header
            if Header._TYPE_SUPPORT is None:
                Header.__import_type_support__()

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DVL_MODE_BOTTOM': metacls.__constants['DVL_MODE_BOTTOM'],
            'DVL_MODE_WATER': metacls.__constants['DVL_MODE_WATER'],
            'DVL_TYPE_PISTON': metacls.__constants['DVL_TYPE_PISTON'],
            'DVL_TYPE_PHASED_ARRAY': metacls.__constants['DVL_TYPE_PHASED_ARRAY'],
        }

    @property
    def DVL_MODE_BOTTOM(self) -> typing.Literal[1]:
        """Message constant 'DVL_MODE_BOTTOM'."""
        return Metaclass_Dvl.__constants['DVL_MODE_BOTTOM']

    @property
    def DVL_MODE_WATER(self) -> typing.Literal[2]:
        """Message constant 'DVL_MODE_WATER'."""
        return Metaclass_Dvl.__constants['DVL_MODE_WATER']

    @property
    def DVL_TYPE_PISTON(self) -> typing.Literal[0]:
        """Message constant 'DVL_TYPE_PISTON'."""
        return Metaclass_Dvl.__constants['DVL_TYPE_PISTON']

    @property
    def DVL_TYPE_PHASED_ARRAY(self) -> typing.Literal[1]:
        """Message constant 'DVL_TYPE_PHASED_ARRAY'."""
        return Metaclass_Dvl.__constants['DVL_TYPE_PHASED_ARRAY']


class Dvl(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Dvl):
    """
    Message class 'Dvl'.

    Constants:
      DVL_MODE_BOTTOM
      DVL_MODE_WATER
      DVL_TYPE_PISTON
      DVL_TYPE_PHASED_ARRAY
    """

    __slots__ = [
        '_header',
        '_velocity_mode',
        '_dvl_type',
        '_velocity',
        '_velocity_covar',
        '_altitude',
        '_course_gnd',
        '_speed_gnd',
        '_num_good_beams',
        '_sound_speed',
        '_beam_ranges_valid',
        '_beam_velocities_valid',
        '_beam_unit_vec',
        '_range',
        '_range_covar',
        '_beam_quality',
        '_beam_velocity',
        '_beam_velocity_covar',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'header': 'std_msgs/Header',
        'velocity_mode': 'uint8',
        'dvl_type': 'uint8',
        'velocity': 'geometry_msgs/Vector3',
        'velocity_covar': 'double[9]',
        'altitude': 'double',
        'course_gnd': 'double',
        'speed_gnd': 'double',
        'num_good_beams': 'uint8',
        'sound_speed': 'float',
        'beam_ranges_valid': 'boolean',
        'beam_velocities_valid': 'boolean',
        'beam_unit_vec': 'geometry_msgs/Vector3[4]',
        'range': 'double[4]',
        'range_covar': 'float[4]',
        'beam_quality': 'float[4]',
        'beam_velocity': 'float[4]',
        'beam_velocity_covar': 'float[4]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
    )

    def __init__(self, *,
                 header: typing.Optional[std_msgs.msg.Header] = None,  # noqa: E501
                 velocity_mode: typing.Optional[int] = None,  # noqa: E501
                 dvl_type: typing.Optional[int] = None,  # noqa: E501
                 velocity: typing.Optional[geometry_msgs.msg.Vector3] = None,  # noqa: E501
                 velocity_covar: typing.Optional[typing.Union[numpy.typing.NDArray[numpy.float64], collections.abc.Sequence[float]]] = None,  # noqa: E501
                 altitude: typing.Optional[float] = None,  # noqa: E501
                 course_gnd: typing.Optional[float] = None,  # noqa: E501
                 speed_gnd: typing.Optional[float] = None,  # noqa: E501
                 num_good_beams: typing.Optional[int] = None,  # noqa: E501
                 sound_speed: typing.Optional[float] = None,  # noqa: E501
                 beam_ranges_valid: typing.Optional[bool] = None,  # noqa: E501
                 beam_velocities_valid: typing.Optional[bool] = None,  # noqa: E501
                 beam_unit_vec: typing.Optional[collections.abc.Sequence[geometry_msgs.msg.Vector3]] = None,  # noqa: E501
                 range: typing.Optional[typing.Union[numpy.typing.NDArray[numpy.float64], collections.abc.Sequence[float]]] = None,  # noqa: E501, A002
                 range_covar: typing.Optional[typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]] = None,  # noqa: E501
                 beam_quality: typing.Optional[typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]] = None,  # noqa: E501
                 beam_velocity: typing.Optional[typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]] = None,  # noqa: E501
                 beam_velocity_covar: typing.Optional[typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from std_msgs.msg import Header
        self.header = header if header is not None else Header()
        self.velocity_mode = velocity_mode if velocity_mode is not None else int()
        self.dvl_type = dvl_type if dvl_type is not None else int()
        from geometry_msgs.msg import Vector3
        self.velocity = velocity if velocity is not None else Vector3()
        if velocity_covar is None:
            self.velocity_covar = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.velocity_covar = velocity_covar
        self.altitude = altitude if altitude is not None else float()
        self.course_gnd = course_gnd if course_gnd is not None else float()
        self.speed_gnd = speed_gnd if speed_gnd is not None else float()
        self.num_good_beams = num_good_beams if num_good_beams is not None else int()
        self.sound_speed = sound_speed if sound_speed is not None else float()
        self.beam_ranges_valid = beam_ranges_valid if beam_ranges_valid is not None else bool()
        self.beam_velocities_valid = beam_velocities_valid if beam_velocities_valid is not None else bool()
        from geometry_msgs.msg import Vector3
        self.beam_unit_vec = beam_unit_vec if beam_unit_vec is not None else [Vector3() for x in range(4)]
        if range is None:
            self.range = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.range = range
        if range_covar is None:
            self.range_covar = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.range_covar = range_covar
        if beam_quality is None:
            self.beam_quality = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.beam_quality = beam_quality
        if beam_velocity is None:
            self.beam_velocity = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.beam_velocity = beam_velocity
        if beam_velocity_covar is None:
            self.beam_velocity_covar = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.beam_velocity_covar = beam_velocity_covar

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
        if not isinstance(other, Dvl):
            return False
        if self.header != other.header:
            return False
        if self.velocity_mode != other.velocity_mode:
            return False
        if self.dvl_type != other.dvl_type:
            return False
        if self.velocity != other.velocity:
            return False
        if any(self.velocity_covar != other.velocity_covar):
            return False
        if self.altitude != other.altitude:
            return False
        if self.course_gnd != other.course_gnd:
            return False
        if self.speed_gnd != other.speed_gnd:
            return False
        if self.num_good_beams != other.num_good_beams:
            return False
        if self.sound_speed != other.sound_speed:
            return False
        if self.beam_ranges_valid != other.beam_ranges_valid:
            return False
        if self.beam_velocities_valid != other.beam_velocities_valid:
            return False
        if self.beam_unit_vec != other.beam_unit_vec:
            return False
        if any(self.range != other.range):
            return False
        if any(self.range_covar != other.range_covar):
            return False
        if any(self.beam_quality != other.beam_quality):
            return False
        if any(self.beam_velocity != other.beam_velocity):
            return False
        if any(self.beam_velocity_covar != other.beam_velocity_covar):
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
    def velocity_mode(self) -> int:
        """Message field 'velocity_mode'."""
        return self._velocity_mode

    @velocity_mode.setter
    def velocity_mode(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'velocity_mode' field must be of type 'int'"
                assert value >= 0 and value < 256, \
                    "The 'velocity_mode' field must be an unsigned integer in [0, 255]"

        self._velocity_mode = value

    @builtins.property
    def dvl_type(self) -> int:
        """Message field 'dvl_type'."""
        return self._dvl_type

    @dvl_type.setter
    def dvl_type(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'dvl_type' field must be of type 'int'"
                assert value >= 0 and value < 256, \
                    "The 'dvl_type' field must be an unsigned integer in [0, 255]"

        self._dvl_type = value

    @builtins.property
    def velocity(self) -> geometry_msgs.msg.Vector3:
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value: geometry_msgs.msg.Vector3) -> None:
        from geometry_msgs.msg import Vector3

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Vector3), \
                    "The 'velocity' field must be a sub message of type 'Vector3'"

        self._velocity = value

    @builtins.property
    def velocity_covar(self) -> typing.Annotated[typing.Any, numpy.typing.NDArray[numpy.float64]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'velocity_covar'."""
        return self._velocity_covar

    @velocity_covar.setter
    def velocity_covar(self, value: typing.Union[numpy.typing.NDArray[numpy.float64], collections.abc.Sequence[float]]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'velocity_covar' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 9, \
                    "The 'velocity_covar' numpy.ndarray() must have a size of 9"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) == 9 and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                    "The 'velocity_covar' field must be sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"

        if isinstance(value, numpy.ndarray):
            self._velocity_covar = value
            return
        self._velocity_covar = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def altitude(self) -> float:
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'altitude' field must be of type 'float'"
                assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                    "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"

        self._altitude = value

    @builtins.property
    def course_gnd(self) -> float:
        """Message field 'course_gnd'."""
        return self._course_gnd

    @course_gnd.setter
    def course_gnd(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'course_gnd' field must be of type 'float'"
                assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                    "The 'course_gnd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"

        self._course_gnd = value

    @builtins.property
    def speed_gnd(self) -> float:
        """Message field 'speed_gnd'."""
        return self._speed_gnd

    @speed_gnd.setter
    def speed_gnd(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'speed_gnd' field must be of type 'float'"
                assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                    "The 'speed_gnd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"

        self._speed_gnd = value

    @builtins.property
    def num_good_beams(self) -> int:
        """Message field 'num_good_beams'."""
        return self._num_good_beams

    @num_good_beams.setter
    def num_good_beams(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'num_good_beams' field must be of type 'int'"
                assert value >= 0 and value < 256, \
                    "The 'num_good_beams' field must be an unsigned integer in [0, 255]"

        self._num_good_beams = value

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
    def beam_ranges_valid(self) -> bool:
        """Message field 'beam_ranges_valid'."""
        return self._beam_ranges_valid

    @beam_ranges_valid.setter
    def beam_ranges_valid(self, value: bool) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, bool), \
                    "The 'beam_ranges_valid' field must be of type 'bool'"

        self._beam_ranges_valid = value

    @builtins.property
    def beam_velocities_valid(self) -> bool:
        """Message field 'beam_velocities_valid'."""
        return self._beam_velocities_valid

    @beam_velocities_valid.setter
    def beam_velocities_valid(self, value: bool) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, bool), \
                    "The 'beam_velocities_valid' field must be of type 'bool'"

        self._beam_velocities_valid = value

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
                     len(value) == 4 and
                     all(isinstance(v, Vector3) for v in value) and
                     True), \
                    "The 'beam_unit_vec' field must be sequence with length 4 and each value of type 'Vector3'"

        if isinstance(value, list):
            self._beam_unit_vec = value
            return
        self._beam_unit_vec = list(value)

    @builtins.property  # noqa: A003
    def range(self) -> typing.Annotated[typing.Any, numpy.typing.NDArray[numpy.float64]]:  # noqa: A003   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value: typing.Union[numpy.typing.NDArray[numpy.float64], collections.abc.Sequence[float]]) -> None:  # noqa: A003
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'range' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 4, \
                    "The 'range' numpy.ndarray() must have a size of 4"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) == 4 and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                    "The 'range' field must be sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"

        if isinstance(value, numpy.ndarray):
            self._range = value
            return
        self._range = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def range_covar(self) -> typing.Annotated[typing.Any, numpy.typing.NDArray[numpy.float32]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'range_covar'."""
        return self._range_covar

    @range_covar.setter
    def range_covar(self, value: typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'range_covar' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 4, \
                    "The 'range_covar' numpy.ndarray() must have a size of 4"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) == 4 and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'range_covar' field must be sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, numpy.ndarray):
            self._range_covar = value
            return
        self._range_covar = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def beam_quality(self) -> typing.Annotated[typing.Any, numpy.typing.NDArray[numpy.float32]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'beam_quality'."""
        return self._beam_quality

    @beam_quality.setter
    def beam_quality(self, value: typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'beam_quality' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 4, \
                    "The 'beam_quality' numpy.ndarray() must have a size of 4"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) == 4 and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'beam_quality' field must be sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, numpy.ndarray):
            self._beam_quality = value
            return
        self._beam_quality = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def beam_velocity(self) -> typing.Annotated[typing.Any, numpy.typing.NDArray[numpy.float32]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'beam_velocity'."""
        return self._beam_velocity

    @beam_velocity.setter
    def beam_velocity(self, value: typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'beam_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 4, \
                    "The 'beam_velocity' numpy.ndarray() must have a size of 4"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) == 4 and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'beam_velocity' field must be sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, numpy.ndarray):
            self._beam_velocity = value
            return
        self._beam_velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def beam_velocity_covar(self) -> typing.Annotated[typing.Any, numpy.typing.NDArray[numpy.float32]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'beam_velocity_covar'."""
        return self._beam_velocity_covar

    @beam_velocity_covar.setter
    def beam_velocity_covar(self, value: typing.Union[numpy.typing.NDArray[numpy.float32], collections.abc.Sequence[float]]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)

        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'beam_velocity_covar' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 4, \
                    "The 'beam_velocity_covar' numpy.ndarray() must have a size of 4"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     len(value) == 4 and
                     all(isinstance(v, float) for v in value) and
                     all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                    "The 'beam_velocity_covar' field must be sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"

        if isinstance(value, numpy.ndarray):
            self._beam_velocity_covar = value
            return
        self._beam_velocity_covar = numpy.array(value, dtype=numpy.float32)
