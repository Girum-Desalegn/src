# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:msg/ActionPerformerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionPerformerStatus(type):
    """Metaclass of message 'ActionPerformerStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_READY': 0,
        'READY': 1,
        'RUNNING': 2,
        'FAILURE': 4,
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
                'plansys2_msgs.msg.ActionPerformerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action_performer_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action_performer_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action_performer_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action_performer_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action_performer_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_READY': cls.__constants['NOT_READY'],
            'READY': cls.__constants['READY'],
            'RUNNING': cls.__constants['RUNNING'],
            'FAILURE': cls.__constants['FAILURE'],
        }

    @property
    def NOT_READY(self):
        """Message constant 'NOT_READY'."""
        return Metaclass_ActionPerformerStatus.__constants['NOT_READY']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_ActionPerformerStatus.__constants['READY']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_ActionPerformerStatus.__constants['RUNNING']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_ActionPerformerStatus.__constants['FAILURE']


class ActionPerformerStatus(metaclass=Metaclass_ActionPerformerStatus):
    """
    Message class 'ActionPerformerStatus'.

    Constants:
      NOT_READY
      READY
      RUNNING
      FAILURE
    """

    __slots__ = [
        '_state',
        '_action',
        '_specialized_arguments',
        '_node_name',
    ]

    _fields_and_field_types = {
        'state': 'int8',
        'action': 'string',
        'specialized_arguments': 'sequence<string>',
        'node_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.action = kwargs.get('action', str())
        self.specialized_arguments = kwargs.get('specialized_arguments', [])
        self.node_name = kwargs.get('node_name', str())

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
        if self.state != other.state:
            return False
        if self.action != other.action:
            return False
        if self.specialized_arguments != other.specialized_arguments:
            return False
        if self.node_name != other.node_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'state' field must be an integer in [-128, 127]"
        self._state = value

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
    def specialized_arguments(self):
        """Message field 'specialized_arguments'."""
        return self._specialized_arguments

    @specialized_arguments.setter
    def specialized_arguments(self, value):
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
                "The 'specialized_arguments' field must be a set or sequence and each value of type 'str'"
        self._specialized_arguments = value

    @property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value
