# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plansys2_msgs:msg/Node.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'children'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Node(type):
    """Metaclass of message 'Node'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'AND': 1,
        'OR': 2,
        'NOT': 3,
        'ACTION': 4,
        'PREDICATE': 5,
        'FUNCTION': 6,
        'EXPRESSION': 7,
        'FUNCTION_MODIFIER': 8,
        'NUMBER': 9,
        'COMP_GE': 10,
        'COMP_GT': 11,
        'COMP_LE': 12,
        'COMP_LT': 13,
        'ARITH_MULT': 14,
        'ARITH_DIV': 15,
        'ARITH_ADD': 16,
        'ARITH_SUB': 17,
        'ASSIGN': 18,
        'INCREASE': 19,
        'DECREASE': 20,
        'SCALE_UP': 21,
        'SCALE_DOWN': 22,
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
                'plansys2_msgs.msg.Node')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node

            from plansys2_msgs.msg import Param
            if Param.__class__._TYPE_SUPPORT is None:
                Param.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'AND': cls.__constants['AND'],
            'OR': cls.__constants['OR'],
            'NOT': cls.__constants['NOT'],
            'ACTION': cls.__constants['ACTION'],
            'PREDICATE': cls.__constants['PREDICATE'],
            'FUNCTION': cls.__constants['FUNCTION'],
            'EXPRESSION': cls.__constants['EXPRESSION'],
            'FUNCTION_MODIFIER': cls.__constants['FUNCTION_MODIFIER'],
            'NUMBER': cls.__constants['NUMBER'],
            'COMP_GE': cls.__constants['COMP_GE'],
            'COMP_GT': cls.__constants['COMP_GT'],
            'COMP_LE': cls.__constants['COMP_LE'],
            'COMP_LT': cls.__constants['COMP_LT'],
            'ARITH_MULT': cls.__constants['ARITH_MULT'],
            'ARITH_DIV': cls.__constants['ARITH_DIV'],
            'ARITH_ADD': cls.__constants['ARITH_ADD'],
            'ARITH_SUB': cls.__constants['ARITH_SUB'],
            'ASSIGN': cls.__constants['ASSIGN'],
            'INCREASE': cls.__constants['INCREASE'],
            'DECREASE': cls.__constants['DECREASE'],
            'SCALE_UP': cls.__constants['SCALE_UP'],
            'SCALE_DOWN': cls.__constants['SCALE_DOWN'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Node.__constants['UNKNOWN']

    @property
    def AND(self):
        """Message constant 'AND'."""
        return Metaclass_Node.__constants['AND']

    @property
    def OR(self):
        """Message constant 'OR'."""
        return Metaclass_Node.__constants['OR']

    @property
    def NOT(self):
        """Message constant 'NOT'."""
        return Metaclass_Node.__constants['NOT']

    @property
    def ACTION(self):
        """Message constant 'ACTION'."""
        return Metaclass_Node.__constants['ACTION']

    @property
    def PREDICATE(self):
        """Message constant 'PREDICATE'."""
        return Metaclass_Node.__constants['PREDICATE']

    @property
    def FUNCTION(self):
        """Message constant 'FUNCTION'."""
        return Metaclass_Node.__constants['FUNCTION']

    @property
    def EXPRESSION(self):
        """Message constant 'EXPRESSION'."""
        return Metaclass_Node.__constants['EXPRESSION']

    @property
    def FUNCTION_MODIFIER(self):
        """Message constant 'FUNCTION_MODIFIER'."""
        return Metaclass_Node.__constants['FUNCTION_MODIFIER']

    @property
    def NUMBER(self):
        """Message constant 'NUMBER'."""
        return Metaclass_Node.__constants['NUMBER']

    @property
    def COMP_GE(self):
        """Message constant 'COMP_GE'."""
        return Metaclass_Node.__constants['COMP_GE']

    @property
    def COMP_GT(self):
        """Message constant 'COMP_GT'."""
        return Metaclass_Node.__constants['COMP_GT']

    @property
    def COMP_LE(self):
        """Message constant 'COMP_LE'."""
        return Metaclass_Node.__constants['COMP_LE']

    @property
    def COMP_LT(self):
        """Message constant 'COMP_LT'."""
        return Metaclass_Node.__constants['COMP_LT']

    @property
    def ARITH_MULT(self):
        """Message constant 'ARITH_MULT'."""
        return Metaclass_Node.__constants['ARITH_MULT']

    @property
    def ARITH_DIV(self):
        """Message constant 'ARITH_DIV'."""
        return Metaclass_Node.__constants['ARITH_DIV']

    @property
    def ARITH_ADD(self):
        """Message constant 'ARITH_ADD'."""
        return Metaclass_Node.__constants['ARITH_ADD']

    @property
    def ARITH_SUB(self):
        """Message constant 'ARITH_SUB'."""
        return Metaclass_Node.__constants['ARITH_SUB']

    @property
    def ASSIGN(self):
        """Message constant 'ASSIGN'."""
        return Metaclass_Node.__constants['ASSIGN']

    @property
    def INCREASE(self):
        """Message constant 'INCREASE'."""
        return Metaclass_Node.__constants['INCREASE']

    @property
    def DECREASE(self):
        """Message constant 'DECREASE'."""
        return Metaclass_Node.__constants['DECREASE']

    @property
    def SCALE_UP(self):
        """Message constant 'SCALE_UP'."""
        return Metaclass_Node.__constants['SCALE_UP']

    @property
    def SCALE_DOWN(self):
        """Message constant 'SCALE_DOWN'."""
        return Metaclass_Node.__constants['SCALE_DOWN']


class Node(metaclass=Metaclass_Node):
    """
    Message class 'Node'.

    Constants:
      UNKNOWN
      AND
      OR
      NOT
      ACTION
      PREDICATE
      FUNCTION
      EXPRESSION
      FUNCTION_MODIFIER
      NUMBER
      COMP_GE
      COMP_GT
      COMP_LE
      COMP_LT
      ARITH_MULT
      ARITH_DIV
      ARITH_ADD
      ARITH_SUB
      ASSIGN
      INCREASE
      DECREASE
      SCALE_UP
      SCALE_DOWN
    """

    __slots__ = [
        '_node_type',
        '_expression_type',
        '_modifier_type',
        '_node_id',
        '_children',
        '_name',
        '_parameters',
        '_value',
        '_negate',
    ]

    _fields_and_field_types = {
        'node_type': 'uint8',
        'expression_type': 'uint8',
        'modifier_type': 'uint8',
        'node_id': 'uint32',
        'children': 'sequence<uint32>',
        'name': 'string',
        'parameters': 'sequence<plansys2_msgs/Param>',
        'value': 'double',
        'negate': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['plansys2_msgs', 'msg'], 'Param')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_type = kwargs.get('node_type', int())
        self.expression_type = kwargs.get('expression_type', int())
        self.modifier_type = kwargs.get('modifier_type', int())
        self.node_id = kwargs.get('node_id', int())
        self.children = array.array('I', kwargs.get('children', []))
        self.name = kwargs.get('name', str())
        self.parameters = kwargs.get('parameters', [])
        self.value = kwargs.get('value', float())
        self.negate = kwargs.get('negate', bool())

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
        if self.node_type != other.node_type:
            return False
        if self.expression_type != other.expression_type:
            return False
        if self.modifier_type != other.modifier_type:
            return False
        if self.node_id != other.node_id:
            return False
        if self.children != other.children:
            return False
        if self.name != other.name:
            return False
        if self.parameters != other.parameters:
            return False
        if self.value != other.value:
            return False
        if self.negate != other.negate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def node_type(self):
        """Message field 'node_type'."""
        return self._node_type

    @node_type.setter
    def node_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'node_type' field must be an unsigned integer in [0, 255]"
        self._node_type = value

    @property
    def expression_type(self):
        """Message field 'expression_type'."""
        return self._expression_type

    @expression_type.setter
    def expression_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'expression_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'expression_type' field must be an unsigned integer in [0, 255]"
        self._expression_type = value

    @property
    def modifier_type(self):
        """Message field 'modifier_type'."""
        return self._modifier_type

    @modifier_type.setter
    def modifier_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'modifier_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'modifier_type' field must be an unsigned integer in [0, 255]"
        self._modifier_type = value

    @property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'node_id' field must be an unsigned integer in [0, 4294967295]"
        self._node_id = value

    @property
    def children(self):
        """Message field 'children'."""
        return self._children

    @children.setter
    def children(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'children' array.array() must have the type code of 'I'"
            self._children = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'children' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._children = array.array('I', value)

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
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
        self._value = value

    @property
    def negate(self):
        """Message field 'negate'."""
        return self._negate

    @negate.setter
    def negate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'negate' field must be of type 'bool'"
        self._negate = value
