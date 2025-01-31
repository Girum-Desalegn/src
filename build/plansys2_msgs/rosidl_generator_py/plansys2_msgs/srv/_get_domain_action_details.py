# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:srv/GetDomainActionDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetDomainActionDetails_Request(type):
    """Metaclass of message 'GetDomainActionDetails_Request'."""

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
                'plansys2_msgs.srv.GetDomainActionDetails_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_domain_action_details__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_domain_action_details__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_domain_action_details__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_domain_action_details__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_domain_action_details__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDomainActionDetails_Request(metaclass=Metaclass_GetDomainActionDetails_Request):
    """Message class 'GetDomainActionDetails_Request'."""

    __slots__ = [
        '_action',
        '_parameters',
    ]

    _fields_and_field_types = {
        'action': 'string',
        'parameters': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())
        self.parameters = kwargs.get('parameters', [])

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
        if self.action != other.action:
            return False
        if self.parameters != other.parameters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
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
                "The 'parameters' field must be a set or sequence and each value of type 'str'"
        self._parameters = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetDomainActionDetails_Response(type):
    """Metaclass of message 'GetDomainActionDetails_Response'."""

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
                'plansys2_msgs.srv.GetDomainActionDetails_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_domain_action_details__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_domain_action_details__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_domain_action_details__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_domain_action_details__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_domain_action_details__response

            from plansys2_msgs.msg import Action
            if Action.__class__._TYPE_SUPPORT is None:
                Action.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDomainActionDetails_Response(metaclass=Metaclass_GetDomainActionDetails_Response):
    """Message class 'GetDomainActionDetails_Response'."""

    __slots__ = [
        '_action',
        '_success',
        '_error_info',
    ]

    _fields_and_field_types = {
        'action': 'plansys2_msgs/Action',
        'success': 'boolean',
        'error_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Action'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from plansys2_msgs.msg import Action
        self.action = kwargs.get('action', Action())
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
        if self.action != other.action:
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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            from plansys2_msgs.msg import Action
            assert \
                isinstance(value, Action), \
                "The 'action' field must be a sub message of type 'Action'"
        self._action = value

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


class Metaclass_GetDomainActionDetails(type):
    """Metaclass of service 'GetDomainActionDetails'."""

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
                'plansys2_msgs.srv.GetDomainActionDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_domain_action_details

            from plansys2_msgs.srv import _get_domain_action_details
            if _get_domain_action_details.Metaclass_GetDomainActionDetails_Request._TYPE_SUPPORT is None:
                _get_domain_action_details.Metaclass_GetDomainActionDetails_Request.__import_type_support__()
            if _get_domain_action_details.Metaclass_GetDomainActionDetails_Response._TYPE_SUPPORT is None:
                _get_domain_action_details.Metaclass_GetDomainActionDetails_Response.__import_type_support__()


class GetDomainActionDetails(metaclass=Metaclass_GetDomainActionDetails):
    from plansys2_msgs.srv._get_domain_action_details import GetDomainActionDetails_Request as Request
    from plansys2_msgs.srv._get_domain_action_details import GetDomainActionDetails_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
