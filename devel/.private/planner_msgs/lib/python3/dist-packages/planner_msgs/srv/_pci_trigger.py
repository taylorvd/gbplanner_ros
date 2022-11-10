# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/pci_triggerRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class pci_triggerRequest(genpy.Message):
  _md5sum = "d722fc81686e1eabf7ead6520efbd4d5"
  _type = "planner_msgs/pci_triggerRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Request the planning through the planner control interface node.

# Set not_exe_path to true if don't want the robot to execute the path.
bool not_exe_path
# Set set_auto to true to change to auto mode and vice versa.
bool set_auto
uint8 bound_mode

# Max velocity allowed.
float32 vel_max
"""
  __slots__ = ['not_exe_path','set_auto','bound_mode','vel_max']
  _slot_types = ['bool','bool','uint8','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       not_exe_path,set_auto,bound_mode,vel_max

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(pci_triggerRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.not_exe_path is None:
        self.not_exe_path = False
      if self.set_auto is None:
        self.set_auto = False
      if self.bound_mode is None:
        self.bound_mode = 0
      if self.vel_max is None:
        self.vel_max = 0.
    else:
      self.not_exe_path = False
      self.set_auto = False
      self.bound_mode = 0
      self.vel_max = 0.

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
      buff.write(_get_struct_3Bf().pack(_x.not_exe_path, _x.set_auto, _x.bound_mode, _x.vel_max))
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
      end = 0
      _x = self
      start = end
      end += 7
      (_x.not_exe_path, _x.set_auto, _x.bound_mode, _x.vel_max,) = _get_struct_3Bf().unpack(str[start:end])
      self.not_exe_path = bool(self.not_exe_path)
      self.set_auto = bool(self.set_auto)
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
      buff.write(_get_struct_3Bf().pack(_x.not_exe_path, _x.set_auto, _x.bound_mode, _x.vel_max))
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
      end = 0
      _x = self
      start = end
      end += 7
      (_x.not_exe_path, _x.set_auto, _x.bound_mode, _x.vel_max,) = _get_struct_3Bf().unpack(str[start:end])
      self.not_exe_path = bool(self.not_exe_path)
      self.set_auto = bool(self.set_auto)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3Bf = None
def _get_struct_3Bf():
    global _struct_3Bf
    if _struct_3Bf is None:
        _struct_3Bf = struct.Struct("<3Bf")
    return _struct_3Bf
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/pci_triggerResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class pci_triggerResponse(genpy.Message):
  _md5sum = "358e233cde0c8a8bcfea4ce193f8fc15"
  _type = "planner_msgs/pci_triggerResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success
"""
  __slots__ = ['success']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(pci_triggerResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
    else:
      self.success = False

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
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
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
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
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
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
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
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class pci_trigger(object):
  _type          = 'planner_msgs/pci_trigger'
  _md5sum = '0fd8cc9320dacbac91111ce9de934668'
  _request_class  = pci_triggerRequest
  _response_class = pci_triggerResponse