# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/planner_set_global_boundRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import planner_msgs.msg

class planner_set_global_boundRequest(genpy.Message):
  _md5sum = "38c5d4237e29fac0ecaa633679ffb75a"
  _type = "planner_msgs/planner_set_global_boundRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# get_current_bound:
#   true: get current bound, nothing to set
#   false: set bound then returns the latest bound
bool get_current_bound

# reset_to_default:
#   true:  reset to the default bounding box
#   false: set new bounding box
bool reset_to_default

planner_msgs/PlanningBound bound

================================================================================
MSG: planner_msgs/PlanningBound
# use_z_val
#    true:  all x, y, z coordinate
#    false: change only x, y coodinates
bool use_z_val

# Bottom left corner
geometry_msgs/Point min_val

# Top right corner
geometry_msgs/Point max_val
================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['get_current_bound','reset_to_default','bound']
  _slot_types = ['bool','bool','planner_msgs/PlanningBound']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       get_current_bound,reset_to_default,bound

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(planner_set_global_boundRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.get_current_bound is None:
        self.get_current_bound = False
      if self.reset_to_default is None:
        self.reset_to_default = False
      if self.bound is None:
        self.bound = planner_msgs.msg.PlanningBound()
    else:
      self.get_current_bound = False
      self.reset_to_default = False
      self.bound = planner_msgs.msg.PlanningBound()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3B6d().pack(_x.get_current_bound, _x.reset_to_default, _x.bound.use_z_val, _x.bound.min_val.x, _x.bound.min_val.y, _x.bound.min_val.z, _x.bound.max_val.x, _x.bound.max_val.y, _x.bound.max_val.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.bound is None:
        self.bound = planner_msgs.msg.PlanningBound()
      end = 0
      _x = self
      start = end
      end += 51
      (_x.get_current_bound, _x.reset_to_default, _x.bound.use_z_val, _x.bound.min_val.x, _x.bound.min_val.y, _x.bound.min_val.z, _x.bound.max_val.x, _x.bound.max_val.y, _x.bound.max_val.z,) = _get_struct_3B6d().unpack(str[start:end])
      self.get_current_bound = bool(self.get_current_bound)
      self.reset_to_default = bool(self.reset_to_default)
      self.bound.use_z_val = bool(self.bound.use_z_val)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3B6d().pack(_x.get_current_bound, _x.reset_to_default, _x.bound.use_z_val, _x.bound.min_val.x, _x.bound.min_val.y, _x.bound.min_val.z, _x.bound.max_val.x, _x.bound.max_val.y, _x.bound.max_val.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.bound is None:
        self.bound = planner_msgs.msg.PlanningBound()
      end = 0
      _x = self
      start = end
      end += 51
      (_x.get_current_bound, _x.reset_to_default, _x.bound.use_z_val, _x.bound.min_val.x, _x.bound.min_val.y, _x.bound.min_val.z, _x.bound.max_val.x, _x.bound.max_val.y, _x.bound.max_val.z,) = _get_struct_3B6d().unpack(str[start:end])
      self.get_current_bound = bool(self.get_current_bound)
      self.reset_to_default = bool(self.reset_to_default)
      self.bound.use_z_val = bool(self.bound.use_z_val)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B6d = None
def _get_struct_3B6d():
    global _struct_3B6d
    if _struct_3B6d is None:
        _struct_3B6d = struct.Struct("<3B6d")
    return _struct_3B6d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/planner_set_global_boundResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import planner_msgs.msg

class planner_set_global_boundResponse(genpy.Message):
  _md5sum = "2619ee9b517b3d6cb4eca38a7120d19d"
  _type = "planner_msgs/planner_set_global_boundResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success

# Return the actual value inside planner after calling this service
planner_msgs/PlanningBound bound_ret

================================================================================
MSG: planner_msgs/PlanningBound
# use_z_val
#    true:  all x, y, z coordinate
#    false: change only x, y coodinates
bool use_z_val

# Bottom left corner
geometry_msgs/Point min_val

# Top right corner
geometry_msgs/Point max_val
================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['success','bound_ret']
  _slot_types = ['bool','planner_msgs/PlanningBound']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success,bound_ret

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(planner_set_global_boundResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
      if self.bound_ret is None:
        self.bound_ret = planner_msgs.msg.PlanningBound()
    else:
      self.success = False
      self.bound_ret = planner_msgs.msg.PlanningBound()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2B6d().pack(_x.success, _x.bound_ret.use_z_val, _x.bound_ret.min_val.x, _x.bound_ret.min_val.y, _x.bound_ret.min_val.z, _x.bound_ret.max_val.x, _x.bound_ret.max_val.y, _x.bound_ret.max_val.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.bound_ret is None:
        self.bound_ret = planner_msgs.msg.PlanningBound()
      end = 0
      _x = self
      start = end
      end += 50
      (_x.success, _x.bound_ret.use_z_val, _x.bound_ret.min_val.x, _x.bound_ret.min_val.y, _x.bound_ret.min_val.z, _x.bound_ret.max_val.x, _x.bound_ret.max_val.y, _x.bound_ret.max_val.z,) = _get_struct_2B6d().unpack(str[start:end])
      self.success = bool(self.success)
      self.bound_ret.use_z_val = bool(self.bound_ret.use_z_val)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2B6d().pack(_x.success, _x.bound_ret.use_z_val, _x.bound_ret.min_val.x, _x.bound_ret.min_val.y, _x.bound_ret.min_val.z, _x.bound_ret.max_val.x, _x.bound_ret.max_val.y, _x.bound_ret.max_val.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.bound_ret is None:
        self.bound_ret = planner_msgs.msg.PlanningBound()
      end = 0
      _x = self
      start = end
      end += 50
      (_x.success, _x.bound_ret.use_z_val, _x.bound_ret.min_val.x, _x.bound_ret.min_val.y, _x.bound_ret.min_val.z, _x.bound_ret.max_val.x, _x.bound_ret.max_val.y, _x.bound_ret.max_val.z,) = _get_struct_2B6d().unpack(str[start:end])
      self.success = bool(self.success)
      self.bound_ret.use_z_val = bool(self.bound_ret.use_z_val)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B6d = None
def _get_struct_2B6d():
    global _struct_2B6d
    if _struct_2B6d is None:
        _struct_2B6d = struct.Struct("<2B6d")
    return _struct_2B6d
class planner_set_global_bound(object):
  _type          = 'planner_msgs/planner_set_global_bound'
  _md5sum = '1aed38fc3ce6d17635872f522b7dea8f'
  _request_class  = planner_set_global_boundRequest
  _response_class = planner_set_global_boundResponse