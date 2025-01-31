# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:srv/AddProblemGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AddProblemGoal_Request(type):
    """Metaclass of message 'AddProblemGoal_Request'."""

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
                'plansys2_msgs.srv.AddProblemGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_problem_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_problem_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_problem_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_problem_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_problem_goal__request

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


class AddProblemGoal_Request(metaclass=Metaclass_AddProblemGoal_Request):
    """Message class 'AddProblemGoal_Request'."""

    __slots__ = [
        '_tree',
    ]

    _fields_and_field_types = {
        'tree': 'plansys2_msgs/Tree',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Tree'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from plansys2_msgs.msg import Tree
        self.tree = kwargs.get('tree', Tree())

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
        if self.tree != other.tree:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def tree(self):
        """Message field 'tree'."""
        return self._tree

    @tree.setter
    def tree(self, value):
        if __debug__:
            from plansys2_msgs.msg import Tree
            assert \
                isinstance(value, Tree), \
                "The 'tree' field must be a sub message of type 'Tree'"
        self._tree = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AddProblemGoal_Response(type):
    """Metaclass of message 'AddProblemGoal_Response'."""

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
                'plansys2_msgs.srv.AddProblemGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_problem_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_problem_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_problem_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_problem_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_problem_goal__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddProblemGoal_Response(metaclass=Metaclass_AddProblemGoal_Response):
    """Message class 'AddProblemGoal_Response'."""

    __slots__ = [
        '_success',
        '_error_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_info = kwargs.get('error_info', str())

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
        if self.success != other.success:
            return False
        if self.error_info != other.error_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def error_info(self):
        """Message field 'error_info'."""
        return self._error_info

    @error_info.setter
    def error_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_info' field must be of type 'str'"
        self._error_info = value


class Metaclass_AddProblemGoal(type):
    """Metaclass of service 'AddProblemGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('plansys2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plansys2_msgs.srv.AddProblemGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__add_problem_goal

            from plansys2_msgs.srv import _add_problem_goal
            if _add_problem_goal.Metaclass_AddProblemGoal_Request._TYPE_SUPPORT is None:
                _add_problem_goal.Metaclass_AddProblemGoal_Request.__import_type_support__()
            if _add_problem_goal.Metaclass_AddProblemGoal_Response._TYPE_SUPPORT is None:
                _add_problem_goal.Metaclass_AddProblemGoal_Response.__import_type_support__()


class AddProblemGoal(metaclass=Metaclass_AddProblemGoal):
    from plansys2_msgs.srv._add_problem_goal import AddProblemGoal_Request as Request
    from plansys2_msgs.srv._add_problem_goal import AddProblemGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
