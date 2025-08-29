# generated from rosidl_generator_py/resource/_idl.py.em
# with input from piper_with_gripper_moveit:action/PoseGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseGoal_Goal(type):
    """Metaclass of message 'PoseGoal_Goal'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_Goal(metaclass=Metaclass_PoseGoal_Goal):
    """Message class 'PoseGoal_Goal'."""

    __slots__ = [
        '_target_pose',
        '_col',
        '_col2',
        '_lock_rp_and_cartesian',
        '_eef_step',
        '_jump_threshold',
        '_roll_tol_rad',
        '_pitch_tol_rad',
        '_yaw_tol_rad',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/PoseStamped',
        'col': 'double',
        'col2': 'double',
        'lock_rp_and_cartesian': 'boolean',
        'eef_step': 'double',
        'jump_threshold': 'double',
        'roll_tol_rad': 'double',
        'pitch_tol_rad': 'double',
        'yaw_tol_rad': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.col = kwargs.get('col', float())
        self.col2 = kwargs.get('col2', float())
        self.lock_rp_and_cartesian = kwargs.get('lock_rp_and_cartesian', bool())
        self.eef_step = kwargs.get('eef_step', float())
        self.jump_threshold = kwargs.get('jump_threshold', float())
        self.roll_tol_rad = kwargs.get('roll_tol_rad', float())
        self.pitch_tol_rad = kwargs.get('pitch_tol_rad', float())
        self.yaw_tol_rad = kwargs.get('yaw_tol_rad', float())

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
        if self.target_pose != other.target_pose:
            return False
        if self.col != other.col:
            return False
        if self.col2 != other.col2:
            return False
        if self.lock_rp_and_cartesian != other.lock_rp_and_cartesian:
            return False
        if self.eef_step != other.eef_step:
            return False
        if self.jump_threshold != other.jump_threshold:
            return False
        if self.roll_tol_rad != other.roll_tol_rad:
            return False
        if self.pitch_tol_rad != other.pitch_tol_rad:
            return False
        if self.yaw_tol_rad != other.yaw_tol_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def col(self):
        """Message field 'col'."""
        return self._col

    @col.setter
    def col(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'col' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'col' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._col = value

    @builtins.property
    def col2(self):
        """Message field 'col2'."""
        return self._col2

    @col2.setter
    def col2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'col2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'col2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._col2 = value

    @builtins.property
    def lock_rp_and_cartesian(self):
        """Message field 'lock_rp_and_cartesian'."""
        return self._lock_rp_and_cartesian

    @lock_rp_and_cartesian.setter
    def lock_rp_and_cartesian(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lock_rp_and_cartesian' field must be of type 'bool'"
        self._lock_rp_and_cartesian = value

    @builtins.property
    def eef_step(self):
        """Message field 'eef_step'."""
        return self._eef_step

    @eef_step.setter
    def eef_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eef_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'eef_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._eef_step = value

    @builtins.property
    def jump_threshold(self):
        """Message field 'jump_threshold'."""
        return self._jump_threshold

    @jump_threshold.setter
    def jump_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'jump_threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'jump_threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._jump_threshold = value

    @builtins.property
    def roll_tol_rad(self):
        """Message field 'roll_tol_rad'."""
        return self._roll_tol_rad

    @roll_tol_rad.setter
    def roll_tol_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_tol_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_tol_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_tol_rad = value

    @builtins.property
    def pitch_tol_rad(self):
        """Message field 'pitch_tol_rad'."""
        return self._pitch_tol_rad

    @pitch_tol_rad.setter
    def pitch_tol_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_tol_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_tol_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_tol_rad = value

    @builtins.property
    def yaw_tol_rad(self):
        """Message field 'yaw_tol_rad'."""
        return self._yaw_tol_rad

    @yaw_tol_rad.setter
    def yaw_tol_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_tol_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_tol_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_tol_rad = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_Result(type):
    """Metaclass of message 'PoseGoal_Result'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_Result(metaclass=Metaclass_PoseGoal_Result):
    """Message class 'PoseGoal_Result'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
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
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_Feedback(type):
    """Metaclass of message 'PoseGoal_Feedback'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_Feedback(metaclass=Metaclass_PoseGoal_Feedback):
    """Message class 'PoseGoal_Feedback'."""

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', str())

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_SendGoal_Request(type):
    """Metaclass of message 'PoseGoal_SendGoal_Request'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__send_goal__request

            from piper_with_gripper_moveit.action import PoseGoal
            if PoseGoal.Goal.__class__._TYPE_SUPPORT is None:
                PoseGoal.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_SendGoal_Request(metaclass=Metaclass_PoseGoal_SendGoal_Request):
    """Message class 'PoseGoal_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'piper_with_gripper_moveit/PoseGoal_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['piper_with_gripper_moveit', 'action'], 'PoseGoal_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Goal
        self.goal = kwargs.get('goal', PoseGoal_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Goal
            assert \
                isinstance(value, PoseGoal_Goal), \
                "The 'goal' field must be a sub message of type 'PoseGoal_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_SendGoal_Response(type):
    """Metaclass of message 'PoseGoal_SendGoal_Response'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_SendGoal_Response(metaclass=Metaclass_PoseGoal_SendGoal_Response):
    """Message class 'PoseGoal_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_PoseGoal_SendGoal(type):
    """Metaclass of service 'PoseGoal_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__pose_goal__send_goal

            from piper_with_gripper_moveit.action import _pose_goal
            if _pose_goal.Metaclass_PoseGoal_SendGoal_Request._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_SendGoal_Request.__import_type_support__()
            if _pose_goal.Metaclass_PoseGoal_SendGoal_Response._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_SendGoal_Response.__import_type_support__()


class PoseGoal_SendGoal(metaclass=Metaclass_PoseGoal_SendGoal):
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_SendGoal_Request as Request
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_GetResult_Request(type):
    """Metaclass of message 'PoseGoal_GetResult_Request'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_GetResult_Request(metaclass=Metaclass_PoseGoal_GetResult_Request):
    """Message class 'PoseGoal_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_GetResult_Response(type):
    """Metaclass of message 'PoseGoal_GetResult_Response'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__get_result__response

            from piper_with_gripper_moveit.action import PoseGoal
            if PoseGoal.Result.__class__._TYPE_SUPPORT is None:
                PoseGoal.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_GetResult_Response(metaclass=Metaclass_PoseGoal_GetResult_Response):
    """Message class 'PoseGoal_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'piper_with_gripper_moveit/PoseGoal_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['piper_with_gripper_moveit', 'action'], 'PoseGoal_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Result
        self.result = kwargs.get('result', PoseGoal_Result())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Result
            assert \
                isinstance(value, PoseGoal_Result), \
                "The 'result' field must be a sub message of type 'PoseGoal_Result'"
        self._result = value


class Metaclass_PoseGoal_GetResult(type):
    """Metaclass of service 'PoseGoal_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__pose_goal__get_result

            from piper_with_gripper_moveit.action import _pose_goal
            if _pose_goal.Metaclass_PoseGoal_GetResult_Request._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_GetResult_Request.__import_type_support__()
            if _pose_goal.Metaclass_PoseGoal_GetResult_Response._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_GetResult_Response.__import_type_support__()


class PoseGoal_GetResult(metaclass=Metaclass_PoseGoal_GetResult):
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_GetResult_Request as Request
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseGoal_FeedbackMessage(type):
    """Metaclass of message 'PoseGoal_FeedbackMessage'."""

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
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pose_goal__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pose_goal__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pose_goal__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__pose_goal__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pose_goal__feedback_message

            from piper_with_gripper_moveit.action import PoseGoal
            if PoseGoal.Feedback.__class__._TYPE_SUPPORT is None:
                PoseGoal.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGoal_FeedbackMessage(metaclass=Metaclass_PoseGoal_FeedbackMessage):
    """Message class 'PoseGoal_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'piper_with_gripper_moveit/PoseGoal_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['piper_with_gripper_moveit', 'action'], 'PoseGoal_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Feedback
        self.feedback = kwargs.get('feedback', PoseGoal_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Feedback
            assert \
                isinstance(value, PoseGoal_Feedback), \
                "The 'feedback' field must be a sub message of type 'PoseGoal_Feedback'"
        self._feedback = value


class Metaclass_PoseGoal(type):
    """Metaclass of action 'PoseGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('piper_with_gripper_moveit')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'piper_with_gripper_moveit.action.PoseGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__pose_goal

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from piper_with_gripper_moveit.action import _pose_goal
            if _pose_goal.Metaclass_PoseGoal_SendGoal._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_SendGoal.__import_type_support__()
            if _pose_goal.Metaclass_PoseGoal_GetResult._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_GetResult.__import_type_support__()
            if _pose_goal.Metaclass_PoseGoal_FeedbackMessage._TYPE_SUPPORT is None:
                _pose_goal.Metaclass_PoseGoal_FeedbackMessage.__import_type_support__()


class PoseGoal(metaclass=Metaclass_PoseGoal):

    # The goal message defined in the action definition.
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Goal as Goal
    # The result message defined in the action definition.
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Result as Result
    # The feedback message defined in the action definition.
    from piper_with_gripper_moveit.action._pose_goal import PoseGoal_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from piper_with_gripper_moveit.action._pose_goal import PoseGoal_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from piper_with_gripper_moveit.action._pose_goal import PoseGoal_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from piper_with_gripper_moveit.action._pose_goal import PoseGoal_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
