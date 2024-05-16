# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rgmc_manipulation/ParallelSpinPadsGripperCommandGoal.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ParallelSpinPadsGripperCommandGoal(genpy.Message):
  _md5sum = "cb68d13aae1dc06acb5bf6743e7c751f"
  _type = "rgmc_manipulation/ParallelSpinPadsGripperCommandGoal"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# When performing an action that uses the parallel jaw and the pads at the same time,
# The parallel jaw one will be done first.
# GOAL
float64 par_target_pos  # Parallel gripper target aperture (in meters)
float64 par_max_effort  # Parallel gripper motor max motor current
float64 par_velocity    # Parallel gripper motor velocity
bool actuate_parallel   # Whether to actuate the parallel gripper or not
float64 pads_target_pos # Fingertip pads target angular position (in radians)
float64 pads_max_effort # Fingertip pads motor max current (in mA)
float64 pads_velocity   # Fingertip pads motor target velocity
bool actuate_pads       # Whether to actuate the rotary pads or not
bool reverse_pads_actuation       # Actuate rotary pads in reverse
"""
  __slots__ = ['par_target_pos','par_max_effort','par_velocity','actuate_parallel','pads_target_pos','pads_max_effort','pads_velocity','actuate_pads','reverse_pads_actuation']
  _slot_types = ['float64','float64','float64','bool','float64','float64','float64','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       par_target_pos,par_max_effort,par_velocity,actuate_parallel,pads_target_pos,pads_max_effort,pads_velocity,actuate_pads,reverse_pads_actuation

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ParallelSpinPadsGripperCommandGoal, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.par_target_pos is None:
        self.par_target_pos = 0.
      if self.par_max_effort is None:
        self.par_max_effort = 0.
      if self.par_velocity is None:
        self.par_velocity = 0.
      if self.actuate_parallel is None:
        self.actuate_parallel = False
      if self.pads_target_pos is None:
        self.pads_target_pos = 0.
      if self.pads_max_effort is None:
        self.pads_max_effort = 0.
      if self.pads_velocity is None:
        self.pads_velocity = 0.
      if self.actuate_pads is None:
        self.actuate_pads = False
      if self.reverse_pads_actuation is None:
        self.reverse_pads_actuation = False
    else:
      self.par_target_pos = 0.
      self.par_max_effort = 0.
      self.par_velocity = 0.
      self.actuate_parallel = False
      self.pads_target_pos = 0.
      self.pads_max_effort = 0.
      self.pads_velocity = 0.
      self.actuate_pads = False
      self.reverse_pads_actuation = False

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
      buff.write(_get_struct_3dB3d2B().pack(_x.par_target_pos, _x.par_max_effort, _x.par_velocity, _x.actuate_parallel, _x.pads_target_pos, _x.pads_max_effort, _x.pads_velocity, _x.actuate_pads, _x.reverse_pads_actuation))
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
      end += 51
      (_x.par_target_pos, _x.par_max_effort, _x.par_velocity, _x.actuate_parallel, _x.pads_target_pos, _x.pads_max_effort, _x.pads_velocity, _x.actuate_pads, _x.reverse_pads_actuation,) = _get_struct_3dB3d2B().unpack(str[start:end])
      self.actuate_parallel = bool(self.actuate_parallel)
      self.actuate_pads = bool(self.actuate_pads)
      self.reverse_pads_actuation = bool(self.reverse_pads_actuation)
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
      buff.write(_get_struct_3dB3d2B().pack(_x.par_target_pos, _x.par_max_effort, _x.par_velocity, _x.actuate_parallel, _x.pads_target_pos, _x.pads_max_effort, _x.pads_velocity, _x.actuate_pads, _x.reverse_pads_actuation))
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
      end += 51
      (_x.par_target_pos, _x.par_max_effort, _x.par_velocity, _x.actuate_parallel, _x.pads_target_pos, _x.pads_max_effort, _x.pads_velocity, _x.actuate_pads, _x.reverse_pads_actuation,) = _get_struct_3dB3d2B().unpack(str[start:end])
      self.actuate_parallel = bool(self.actuate_parallel)
      self.actuate_pads = bool(self.actuate_pads)
      self.reverse_pads_actuation = bool(self.reverse_pads_actuation)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3dB3d2B = None
def _get_struct_3dB3d2B():
    global _struct_3dB3d2B
    if _struct_3dB3d2B is None:
        _struct_3dB3d2B = struct.Struct("<3dB3d2B")
    return _struct_3dB3d2B
