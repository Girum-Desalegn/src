# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:srv/GetNodeDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetNodeDetails_Request(type):
    """Metaclass of message 'GetNodeDetails_Request'."""

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
                'plansys2_msgs.srv.GetNodeDetails_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_node_details__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_node_details__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_node_details__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_node_details__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_node_details__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNodeDetails_Request(metaclass=Metaclass_GetNodeDetails_Request):
    """Message class 'GetNodeDetails_Request'."""

    __slots__ = [
        '_expression',
    ]

    _fields_and_field_types = {
        'expression': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.expression = kwargs.get('expression', str())

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
        if self.expression != other.expression:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def expression(self):
        """Message field 'expression'."""
        return self._expression

    @expression.setter
    def expression(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'expression' field must be of type 'str'"
        self._expression = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetNodeDetails_Response(type):
    """Metaclass of message 'GetNodeDetails_Response'."""

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
                'plansys2_msgs.srv.GetNodeDetails_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_node_details__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_node_details__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_node_details__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_node_details__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_node_details__response

            from plansys2_msgs.msg import Node
            if Node.__class__._TYPE_SUPPORT is None:
                Node.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNodeDetails_Response(metaclass=Metaclass_GetNodeDetails_Response):
    """Message class 'GetNodeDetails_Response'."""

    __slots__ = [
        '_success',
        '_node',
        '_error_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'node': 'plansys2_msgs/Node',
        'error_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Node'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from plansys2_msgs.msg import Node
        self.node = kwargs.get('node', Node())
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
        if self.node != other.node:
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
    def node(self):
        """Message field 'node'."""
        return self._node

    @node.setter
    def node(self, value):
        if __debug__:
            from plansys2_msgs.msg import Node
            assert \
                isinstance(value, Node), \
                "The 'node' field must be a sub message of type 'Node'"
        self._node = value

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


class Metaclass_GetNodeDetails(type):
    """Metaclass of service 'GetNodeDetails'."""

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
                'plansys2_msgs.srv.GetNodeDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_node_details

            from plansys2_msgs.srv import _get_node_details
            if _get_node_details.Metaclass_GetNodeDetails_Request._TYPE_SUPPORT is None:
                _get_node_details.Metaclass_GetNodeDetails_Request.__import_type_support__()
            if _get_node_details.Metaclass_GetNodeDetails_Response._TYPE_SUPPORT is None:
                _get_node_details.Metaclass_GetNodeDetails_Response.__import_type_support__()


class GetNodeDetails(metaclass=Metaclass_GetNodeDetails):
    from plansys2_msgs.srv._get_node_details import GetNodeDetails_Request as Request
    from plansys2_msgs.srv._get_node_details import GetNodeDetails_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
