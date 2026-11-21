# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/SonarImageData.idl
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

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SonarImageData(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'SonarImageData'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class SonarImageDataConstants(typing.TypedDict):
        DTYPE_UINT8: typing.Literal[0]
        DTYPE_INT8: typing.Literal[1]
        DTYPE_UINT16: typing.Literal[2]
        DTYPE_INT16: typing.Literal[3]
        DTYPE_UINT32: typing.Literal[4]
        DTYPE_INT32: typing.Literal[5]
        DTYPE_UINT64: typing.Literal[6]
        DTYPE_INT64: typing.Literal[7]
        DTYPE_FLOAT32: typing.Literal[8]
        DTYPE_FLOAT64: typing.Literal[9]

    __constants: SonarImageDataConstants = {
        'DTYPE_UINT8': 0,
        'DTYPE_INT8': 1,
        'DTYPE_UINT16': 2,
        'DTYPE_INT16': 3,
        'DTYPE_UINT32': 4,
        'DTYPE_INT32': 5,
        'DTYPE_UINT64': 6,
        'DTYPE_INT64': 7,
        'DTYPE_FLOAT32': 8,
        'DTYPE_FLOAT64': 9,
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
                'marine_acoustic_msgs.msg.SonarImageData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sonar_image_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sonar_image_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sonar_image_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sonar_image_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sonar_image_data

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DTYPE_UINT8': metacls.__constants['DTYPE_UINT8'],
            'DTYPE_INT8': metacls.__constants['DTYPE_INT8'],
            'DTYPE_UINT16': metacls.__constants['DTYPE_UINT16'],
            'DTYPE_INT16': metacls.__constants['DTYPE_INT16'],
            'DTYPE_UINT32': metacls.__constants['DTYPE_UINT32'],
            'DTYPE_INT32': metacls.__constants['DTYPE_INT32'],
            'DTYPE_UINT64': metacls.__constants['DTYPE_UINT64'],
            'DTYPE_INT64': metacls.__constants['DTYPE_INT64'],
            'DTYPE_FLOAT32': metacls.__constants['DTYPE_FLOAT32'],
            'DTYPE_FLOAT64': metacls.__constants['DTYPE_FLOAT64'],
        }

    @property
    def DTYPE_UINT8(self) -> typing.Literal[0]:
        """Message constant 'DTYPE_UINT8'."""
        return Metaclass_SonarImageData.__constants['DTYPE_UINT8']

    @property
    def DTYPE_INT8(self) -> typing.Literal[1]:
        """Message constant 'DTYPE_INT8'."""
        return Metaclass_SonarImageData.__constants['DTYPE_INT8']

    @property
    def DTYPE_UINT16(self) -> typing.Literal[2]:
        """Message constant 'DTYPE_UINT16'."""
        return Metaclass_SonarImageData.__constants['DTYPE_UINT16']

    @property
    def DTYPE_INT16(self) -> typing.Literal[3]:
        """Message constant 'DTYPE_INT16'."""
        return Metaclass_SonarImageData.__constants['DTYPE_INT16']

    @property
    def DTYPE_UINT32(self) -> typing.Literal[4]:
        """Message constant 'DTYPE_UINT32'."""
        return Metaclass_SonarImageData.__constants['DTYPE_UINT32']

    @property
    def DTYPE_INT32(self) -> typing.Literal[5]:
        """Message constant 'DTYPE_INT32'."""
        return Metaclass_SonarImageData.__constants['DTYPE_INT32']

    @property
    def DTYPE_UINT64(self) -> typing.Literal[6]:
        """Message constant 'DTYPE_UINT64'."""
        return Metaclass_SonarImageData.__constants['DTYPE_UINT64']

    @property
    def DTYPE_INT64(self) -> typing.Literal[7]:
        """Message constant 'DTYPE_INT64'."""
        return Metaclass_SonarImageData.__constants['DTYPE_INT64']

    @property
    def DTYPE_FLOAT32(self) -> typing.Literal[8]:
        """Message constant 'DTYPE_FLOAT32'."""
        return Metaclass_SonarImageData.__constants['DTYPE_FLOAT32']

    @property
    def DTYPE_FLOAT64(self) -> typing.Literal[9]:
        """Message constant 'DTYPE_FLOAT64'."""
        return Metaclass_SonarImageData.__constants['DTYPE_FLOAT64']


class SonarImageData(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_SonarImageData):
    """
    Message class 'SonarImageData'.

    Constants:
      DTYPE_UINT8
      DTYPE_INT8
      DTYPE_UINT16
      DTYPE_INT16
      DTYPE_UINT32
      DTYPE_INT32
      DTYPE_UINT64
      DTYPE_INT64
      DTYPE_FLOAT32
      DTYPE_FLOAT64
    """

    __slots__ = [
        '_is_bigendian',
        '_dtype',
        '_beam_count',
        '_data',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'is_bigendian': 'boolean',
        'dtype': 'uint32',
        'beam_count': 'uint32',
        'data': 'sequence<uint8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, *,
                 is_bigendian: typing.Optional[bool] = None,  # noqa: E501
                 dtype: typing.Optional[int] = None,  # noqa: E501
                 beam_count: typing.Optional[int] = None,  # noqa: E501
                 data: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.is_bigendian = is_bigendian if is_bigendian is not None else bool()
        self.dtype = dtype if dtype is not None else int()
        self.beam_count = beam_count if beam_count is not None else int()
        self.data = data if data is not None else array.array('B', [])

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
        if not isinstance(other, SonarImageData):
            return False
        if self.is_bigendian != other.is_bigendian:
            return False
        if self.dtype != other.dtype:
            return False
        if self.beam_count != other.beam_count:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_bigendian(self) -> bool:
        """Message field 'is_bigendian'."""
        return self._is_bigendian

    @is_bigendian.setter
    def is_bigendian(self, value: bool) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, bool), \
                    "The 'is_bigendian' field must be of type 'bool'"

        self._is_bigendian = value

    @builtins.property
    def dtype(self) -> int:
        """Message field 'dtype'."""
        return self._dtype

    @dtype.setter
    def dtype(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'dtype' field must be of type 'int'"
                assert value >= 0 and value < 4294967296, \
                    "The 'dtype' field must be an unsigned integer in [0, 4294967295]"

        self._dtype = value

    @builtins.property
    def beam_count(self) -> int:
        """Message field 'beam_count'."""
        return self._beam_count

    @beam_count.setter
    def beam_count(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'beam_count' field must be of type 'int'"
                assert value >= 0 and value < 4294967296, \
                    "The 'beam_count' field must be an unsigned integer in [0, 4294967295]"

        self._beam_count = value

    @builtins.property
    def data(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from rosidl_buffer import Buffer as _RosidlBuffer
        if isinstance(value, _RosidlBuffer):
            self._data = value  # type: ignore[assignment]
            return

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'data' array.array() must have the type code of 'B'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= 0 and val < 256 for val in value)), \
                    "The 'data' field must be sequence and each value of type 'int' and each unsigned integer in [0, 255]"

        if isinstance(value, array.array):
            self._data = value  # type: ignore[assignment]
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._data = array.array('B', value)  # type: ignore[assignment]
