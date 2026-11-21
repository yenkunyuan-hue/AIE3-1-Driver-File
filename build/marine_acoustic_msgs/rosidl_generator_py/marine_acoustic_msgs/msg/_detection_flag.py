# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marine_acoustic_msgs:msg/DetectionFlag.idl
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

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionFlag(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'DetectionFlag'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class DetectionFlagConstants(typing.TypedDict):
        DETECT_OK: typing.Literal[0]
        DETECT_BAD_SONAR: typing.Literal[1]
        DETECT_BAD_FILTER: typing.Literal[2]
        DETECT_BAD_USER: typing.Literal[4]

    __constants: DetectionFlagConstants = {
        'DETECT_OK': 0,
        'DETECT_BAD_SONAR': 1,
        'DETECT_BAD_FILTER': 2,
        'DETECT_BAD_USER': 4,
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
                'marine_acoustic_msgs.msg.DetectionFlag')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_flag
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_flag
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_flag
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_flag
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_flag

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DETECT_OK': metacls.__constants['DETECT_OK'],
            'DETECT_BAD_SONAR': metacls.__constants['DETECT_BAD_SONAR'],
            'DETECT_BAD_FILTER': metacls.__constants['DETECT_BAD_FILTER'],
            'DETECT_BAD_USER': metacls.__constants['DETECT_BAD_USER'],
        }

    @property
    def DETECT_OK(self) -> typing.Literal[0]:
        """Message constant 'DETECT_OK'."""
        return Metaclass_DetectionFlag.__constants['DETECT_OK']

    @property
    def DETECT_BAD_SONAR(self) -> typing.Literal[1]:
        """Message constant 'DETECT_BAD_SONAR'."""
        return Metaclass_DetectionFlag.__constants['DETECT_BAD_SONAR']

    @property
    def DETECT_BAD_FILTER(self) -> typing.Literal[2]:
        """Message constant 'DETECT_BAD_FILTER'."""
        return Metaclass_DetectionFlag.__constants['DETECT_BAD_FILTER']

    @property
    def DETECT_BAD_USER(self) -> typing.Literal[4]:
        """Message constant 'DETECT_BAD_USER'."""
        return Metaclass_DetectionFlag.__constants['DETECT_BAD_USER']


class DetectionFlag(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_DetectionFlag):
    """
    Message class 'DetectionFlag'.

    Constants:
      DETECT_OK
      DETECT_BAD_SONAR
      DETECT_BAD_FILTER
      DETECT_BAD_USER
    """

    __slots__ = [
        '_flag',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'flag': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, *,
                 flag: typing.Optional[int] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.flag = flag if flag is not None else int()

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
        if not isinstance(other, DetectionFlag):
            return False
        if self.flag != other.flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def flag(self) -> int:
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'flag' field must be of type 'int'"
                assert value >= 0 and value < 256, \
                    "The 'flag' field must be an unsigned integer in [0, 255]"

        self._flag = value
