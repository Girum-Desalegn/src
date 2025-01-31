# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:msg/ActionExecution.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionExecution(type):
    """Metaclass of message 'ActionExecution'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'REQUEST': 1,
        'RESPONSE': 2,
        'CONFIRM': 3,
        'REJECT': 4,
        'FEEDBACK': 5,
        'FINISH': 6,
        'CANCEL': 7,
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
                'plansys2_msgs.msg.ActionExecution')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action_execution
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action_execution
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action_execution
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action_execution
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action_execution

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'REQUEST': cls.__constants['REQUEST'],
            'RESPONSE': cls.__constants['RESPONSE'],
            'CONFIRM': cls.__constants['CONFIRM'],
            'REJECT': cls.__constants['REJECT'],
            'FEEDBACK': cls.__constants['FEEDBACK'],
            'FINISH': cls.__constants['FINISH'],
            'CANCEL': cls.__constants['CANCEL'],
        }

    @property
    def REQUEST(self):
        """Message constant 'REQUEST'."""
        return Metaclass_ActionExecution.__constants['REQUEST']

    @property
    def RESPONSE(self):
        """Message constant 'RESPONSE'."""
        return Metaclass_ActionExecution.__constants['RESPONSE']

    @property
    def CONFIRM(self):
        """Message constant 'CONFIRM'."""
        return Metaclass_ActionExecution.__constants['CONFIRM']

    @property
    def REJECT(self):
        """Message constant 'REJECT'."""
        return Metaclass_ActionExecution.__constants['REJECT']

    @property
    def FEEDBACK(self):
        """Message constant 'FEEDBACK'."""
        return Metaclass_ActionExecution.__constants['FEEDBACK']

    @property
    def FINISH(self):
        """Message constant 'FINISH'."""
        return Metaclass_ActionExecution.__constants['FINISH']

    @property
    def CANCEL(self):
        """Message constant 'CANCEL'."""
        return Metaclass_ActionExecution.__constants['CANCEL']


class ActionExecution(metaclass=Metaclass_ActionExecution):
    """
    Message class 'ActionExecution'.

    Constants:
      REQUEST
      RESPONSE
      CONFIRM
      REJECT
      FEEDBACK
      FINISH
      CANCEL
    """

    __slots__ = [
        '_type',
        '_node_id',
        '_action',
        '_arguments',
        '_success',
        '_completion',
        '_status',
    ]

    _fields_and_field_types = {
        'type': 'int16',
        'node_id': 'string',
        'action': 'string',
        'arguments': 'sequence<string>',
        'success': 'boolean',
        'completion': 'float',
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.node_id = kwargs.get('node_id', str())
        self.action = kwargs.get('action', str())
        self.arguments = kwargs.get('arguments', [])
        self.success = kwargs.get('success', bool())
        self.completion = kwargs.get('completion', float())
        self.status = kwargs.get('status', str())

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
        if self.type != other.type:
            return False
        if self.node_id != other.node_id:
            return False
        if self.action != other.action:
            return False
        if self.arguments != other.arguments:
            return False
        if self.success != other.success:
            return False
        if self.completion != other.completion:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'type' field must be an integer in [-32768, 32767]"
        self._type = value

    @property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_id' field must be of type 'str'"
        self._node_id = value

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
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value
