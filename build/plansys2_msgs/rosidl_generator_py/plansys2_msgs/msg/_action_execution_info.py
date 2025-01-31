# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:msg/ActionExecutionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionExecutionInfo(type):
    """Metaclass of message 'ActionExecutionInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_EXECUTED': 1,
        'EXECUTING': 2,
        'FAILED': 3,
        'SUCCEEDED': 4,
        'CANCELLED': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('plansys2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plansys2_msgs.msg.ActionExecutionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action_execution_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action_execution_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action_execution_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action_execution_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action_execution_info

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_EXECUTED': cls.__constants['NOT_EXECUTED'],
            'EXECUTING': cls.__constants['EXECUTING'],
            'FAILED': cls.__constants['FAILED'],
            'SUCCEEDED': cls.__constants['SUCCEEDED'],
            'CANCELLED': cls.__constants['CANCELLED'],
        }

    @property
    def NOT_EXECUTED(self):
        """Message constant 'NOT_EXECUTED'."""
        return Metaclass_ActionExecutionInfo.__constants['NOT_EXECUTED']

    @property
    def EXECUTING(self):
        """Message constant 'EXECUTING'."""
        return Metaclass_ActionExecutionInfo.__constants['EXECUTING']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_ActionExecutionInfo.__constants['FAILED']

    @property
    def SUCCEEDED(self):
        """Message constant 'SUCCEEDED'."""
        return Metaclass_ActionExecutionInfo.__constants['SUCCEEDED']

    @property
    def CANCELLED(self):
        """Message constant 'CANCELLED'."""
        return Metaclass_ActionExecutionInfo.__constants['CANCELLED']


class ActionExecutionInfo(metaclass=Metaclass_ActionExecutionInfo):
    """
    Message class 'ActionExecutionInfo'.

    Constants:
      NOT_EXECUTED
      EXECUTING
      FAILED
      SUCCEEDED
      CANCELLED
    """

    __slots__ = [
        '_status',
        '_start_stamp',
        '_status_stamp',
        '_action_full_name',
        '_action',
        '_arguments',
        '_duration',
        '_completion',
        '_message_status',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'start_stamp': 'builtin_interfaces/Time',
        'status_stamp': 'builtin_interfaces/Time',
        'action_full_name': 'string',
        'action': 'string',
        'arguments': 'sequence<string>',
        'duration': 'builtin_interfaces/Duration',
        'completion': 'float',
        'message_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from builtin_interfaces.msg import Time
        self.start_stamp = kwargs.get('start_stamp', Time())
        from builtin_interfaces.msg import Time
        self.status_stamp = kwargs.get('status_stamp', Time())
        self.action_full_name = kwargs.get('action_full_name', str())
        self.action = kwargs.get('action', str())
        self.arguments = kwargs.get('arguments', [])
        from builtin_interfaces.msg import Duration
        self.duration = kwargs.get('duration', Duration())
        self.completion = kwargs.get('completion', float())
        self.message_status = kwargs.get('message_status', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.start_stamp != other.start_stamp:
            return False
        if self.status_stamp != other.status_stamp:
            return False
        if self.action_full_name != other.action_full_name:
            return False
        if self.action != other.action:
            return False
        if self.arguments != other.arguments:
            return False
        if self.duration != other.duration:
            return False
        if self.completion != other.completion:
            return False
        if self.message_status != other.message_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def start_stamp(self):
        """Message field 'start_stamp'."""
        return self._start_stamp

    @start_stamp.setter
    def start_stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_stamp' field must be a sub message of type 'Time'"
        self._start_stamp = value

    @property
    def status_stamp(self):
        """Message field 'status_stamp'."""
        return self._status_stamp

    @status_stamp.setter
    def status_stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'status_stamp' field must be a sub message of type 'Time'"
        self._status_stamp = value

    @property
    def action_full_name(self):
        """Message field 'action_full_name'."""
        return self._action_full_name

    @action_full_name.setter
    def action_full_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action_full_name' field must be of type 'str'"
        self._action_full_name = value

    @property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @property
    def arguments(self):
        """Message field 'arguments'."""
        return self._arguments

    @arguments.setter
    def arguments(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'arguments' field must be a set or sequence and each value of type 'str'"
        self._arguments = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'duration' field must be a sub message of type 'Duration'"
        self._duration = value

    @property
    def completion(self):
        """Message field 'completion'."""
        return self._completion

    @completion.setter
    def completion(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'completion' field must be of type 'float'"
        self._completion = value

    @property
    def message_status(self):
        """Message field 'message_status'."""
        return self._message_status

    @message_status.setter
    def message_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_status' field must be of type 'str'"
        self._message_status = value
