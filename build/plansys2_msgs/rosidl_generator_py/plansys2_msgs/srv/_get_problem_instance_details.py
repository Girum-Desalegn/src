# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:srv/GetProblemInstanceDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetProblemInstanceDetails_Request(type):
    """Metaclass of message 'GetProblemInstanceDetails_Request'."""

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
                'plansys2_msgs.srv.GetProblemInstanceDetails_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_problem_instance_details__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_problem_instance_details__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_problem_instance_details__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_problem_instance_details__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_problem_instance_details__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetProblemInstanceDetails_Request(metaclass=Metaclass_GetProblemInstanceDetails_Request):
    """Message class 'GetProblemInstanceDetails_Request'."""

    __slots__ = [
        '_instance',
    ]

    _fields_and_field_types = {
        'instance': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.instance = kwargs.get('instance', str())

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
        if self.instance != other.instance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def instance(self):
        """Message field 'instance'."""
        return self._instance

    @instance.setter
    def instance(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'instance' field must be of type 'str'"
        self._instance = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetProblemInstanceDetails_Response(type):
    """Metaclass of message 'GetProblemInstanceDetails_Response'."""

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
                'plansys2_msgs.srv.GetProblemInstanceDetails_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_problem_instance_details__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_problem_instance_details__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_problem_instance_details__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_problem_instance_details__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_problem_instance_details__response

            from plansys2_msgs.msg import Param
            if Param.__class__._TYPE_SUPPORT is None:
                Param.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetProblemInstanceDetails_Response(metaclass=Metaclass_GetProblemInstanceDetails_Response):
    """Message class 'GetProblemInstanceDetails_Response'."""

    __slots__ = [
        '_success',
        '_instance',
        '_error_info',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'instance': 'plansys2_msgs/Param',
        'error_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Param'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from plansys2_msgs.msg import Param
        self.instance = kwargs.get('instance', Param())
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
        if self.instance != other.instance:
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
    def instance(self):
        """Message field 'instance'."""
        return self._instance

    @instance.setter
    def instance(self, value):
        if __debug__:
            from plansys2_msgs.msg import Param
            assert \
                isinstance(value, Param), \
                "The 'instance' field must be a sub message of type 'Param'"
        self._instance = value

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


class Metaclass_GetProblemInstanceDetails(type):
    """Metaclass of service 'GetProblemInstanceDetails'."""

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
                'plansys2_msgs.srv.GetProblemInstanceDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_problem_instance_details

            from plansys2_msgs.srv import _get_problem_instance_details
            if _get_problem_instance_details.Metaclass_GetProblemInstanceDetails_Request._TYPE_SUPPORT is None:
                _get_problem_instance_details.Metaclass_GetProblemInstanceDetails_Request.__import_type_support__()
            if _get_problem_instance_details.Metaclass_GetProblemInstanceDetails_Response._TYPE_SUPPORT is None:
                _get_problem_instance_details.Metaclass_GetProblemInstanceDetails_Response.__import_type_support__()


class GetProblemInstanceDetails(metaclass=Metaclass_GetProblemInstanceDetails):
    from plansys2_msgs.srv._get_problem_instance_details import GetProblemInstanceDetails_Request as Request
    from plansys2_msgs.srv._get_problem_instance_details import GetProblemInstanceDetails_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
