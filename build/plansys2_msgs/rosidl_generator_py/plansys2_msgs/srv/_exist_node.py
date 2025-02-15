# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:srv/ExistNode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExistNode_Request(type):
    """Metaclass of message 'ExistNode_Request'."""

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
                'plansys2_msgs.srv.ExistNode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__exist_node__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__exist_node__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__exist_node__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__exist_node__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__exist_node__request

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


class ExistNode_Request(metaclass=Metaclass_ExistNode_Request):
    """Message class 'ExistNode_Request'."""

    __slots__ = [
        '_node',
    ]

    _fields_and_field_types = {
        'node': 'plansys2_msgs/Node',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Node'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from plansys2_msgs.msg import Node
        self.node = kwargs.get('node', Node())

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
        if self.node != other.node:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ExistNode_Response(type):
    """Metaclass of message 'ExistNode_Response'."""

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
                'plansys2_msgs.srv.ExistNode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__exist_node__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__exist_node__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__exist_node__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__exist_node__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__exist_node__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExistNode_Response(metaclass=Metaclass_ExistNode_Response):
    """Message class 'ExistNode_Response'."""

    __slots__ = [
        '_exist',
    ]

    _fields_and_field_types = {
        'exist': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.exist = kwargs.get('exist', bool())

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
        if self.exist != other.exist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def exist(self):
        """Message field 'exist'."""
        return self._exist

    @exist.setter
    def exist(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'exist' field must be of type 'bool'"
        self._exist = value


class Metaclass_ExistNode(type):
    """Metaclass of service 'ExistNode'."""

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
                'plansys2_msgs.srv.ExistNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__exist_node

            from plansys2_msgs.srv import _exist_node
            if _exist_node.Metaclass_ExistNode_Request._TYPE_SUPPORT is None:
                _exist_node.Metaclass_ExistNode_Request.__import_type_support__()
            if _exist_node.Metaclass_ExistNode_Response._TYPE_SUPPORT is None:
                _exist_node.Metaclass_ExistNode_Response.__import_type_support__()


class ExistNode(metaclass=Metaclass_ExistNode):
    from plansys2_msgs.srv._exist_node import ExistNode_Request as Request
    from plansys2_msgs.srv._exist_node import ExistNode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
