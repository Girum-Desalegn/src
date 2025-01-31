# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:msg/DurativeAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DurativeAction(type):
    """Metaclass of message 'DurativeAction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'plansys2_msgs.msg.DurativeAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__durative_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__durative_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__durative_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__durative_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__durative_action

            from plansys2_msgs.msg import Param
            if Param.__class__._TYPE_SUPPORT is None:
                Param.__class__.__import_type_support__()

            from plansys2_msgs.msg import Tree
            if Tree.__class__._TYPE_SUPPORT is None:
                Tree.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DurativeAction(metaclass=Metaclass_DurativeAction):
    """Message class 'DurativeAction'."""

    __slots__ = [
        '_name',
        '_parameters',
        '_at_start_requirements',
        '_over_all_requirements',
        '_at_end_requirements',
        '_at_start_effects',
        '_at_end_effects',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'parameters': 'sequence<plansys2_msgs/Param>',
        'at_start_requirements': 'plansys2_msgs/Tree',
        'over_all_requirements': 'plansys2_msgs/Tree',
        'at_end_requirements': 'plansys2_msgs/Tree',
        'at_start_effects': 'plansys2_msgs/Tree',
        'at_end_effects': 'plansys2_msgs/Tree',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Param')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Tree'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Tree'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Tree'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Tree'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Tree'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.parameters = kwargs.get('parameters', [])
        from plansys2_msgs.msg import Tree
        self.at_start_requirements = kwargs.get('at_start_requirements', Tree())
        from plansys2_msgs.msg import Tree
        self.over_all_requirements = kwargs.get('over_all_requirements', Tree())
        from plansys2_msgs.msg import Tree
        self.at_end_requirements = kwargs.get('at_end_requirements', Tree())
        from plansys2_msgs.msg import Tree
        self.at_start_effects = kwargs.get('at_start_effects', Tree())
        from plansys2_msgs.msg import Tree
        self.at_end_effects = kwargs.get('at_end_effects', Tree())

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
        if self.name != other.name:
            return False
        if self.parameters != other.parameters:
            return False
        if self.at_start_requirements != other.at_start_requirements:
            return False
        if self.over_all_requirements != other.over_all_requirements:
            return False
        if self.at_end_requirements != other.at_end_requirements:
            return False
        if self.at_start_effects != other.at_start_effects:
            return False
        if self.at_end_effects != other.at_end_effects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if __debug__:
            from plansys2_msgs.msg import Param
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
                 all(isinstance(v, Param) for v in value) and
                 True), \
                "The 'parameters' field must be a set or sequence and each value of type 'Param'"
        self._parameters = value

    @property
    def at_start_requirements(self):
        """Message field 'at_start_requirements'."""
        return self._at_start_requirements

    @at_start_requirements.setter
    def at_start_requirements(self, value):
        if __debug__:
            from plansys2_msgs.msg import Tree
            assert \
                isinstance(value, Tree), \
                "The 'at_start_requirements' field must be a sub message of type 'Tree'"
        self._at_start_requirements = value

    @property
    def over_all_requirements(self):
        """Message field 'over_all_requirements'."""
        return self._over_all_requirements

    @over_all_requirements.setter
    def over_all_requirements(self, value):
        if __debug__:
            from plansys2_msgs.msg import Tree
            assert \
                isinstance(value, Tree), \
                "The 'over_all_requirements' field must be a sub message of type 'Tree'"
        self._over_all_requirements = value

    @property
    def at_end_requirements(self):
        """Message field 'at_end_requirements'."""
        return self._at_end_requirements

    @at_end_requirements.setter
    def at_end_requirements(self, value):
        if __debug__:
            from plansys2_msgs.msg import Tree
            assert \
                isinstance(value, Tree), \
                "The 'at_end_requirements' field must be a sub message of type 'Tree'"
        self._at_end_requirements = value

    @property
    def at_start_effects(self):
        """Message field 'at_start_effects'."""
        return self._at_start_effects

    @at_start_effects.setter
    def at_start_effects(self, value):
        if __debug__:
            from plansys2_msgs.msg import Tree
            assert \
                isinstance(value, Tree), \
                "The 'at_start_effects' field must be a sub message of type 'Tree'"
        self._at_start_effects = value

    @property
    def at_end_effects(self):
        """Message field 'at_end_effects'."""
        return self._at_end_effects

    @at_end_effects.setter
    def at_end_effects(self, value):
        if __debug__:
            from plansys2_msgs.msg import Tree
            assert \
                isinstance(value, Tree), \
                "The 'at_end_effects' field must be a sub message of type 'Tree'"
        self._at_end_effects = value
