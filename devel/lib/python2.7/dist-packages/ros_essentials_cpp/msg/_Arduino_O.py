# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ros_essentials_cpp/Arduino_O.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Arduino_O(genpy.Message):
  _md5sum = "478595d7bd84f97250cd2e7b6becdc2c"
  _type = "ros_essentials_cpp/Arduino_O"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool relay1Error
bool relay2Error
bool relay3Error
bool relay4Error
bool relay5Error
bool relay6Error
bool relay7Error
bool relay8Error
bool sensor1
bool sensor2
bool sensor3
bool sensor4
bool sensor5
bool sensor6
bool sensor7
bool sensor8
int8 temperature
int8 humidity
int8 windSpeed
int8 concreteTemperature
int8 accelXNozzle
int8 accelYNozzle
int8 accelZNozzle
int8 accelXCart
int8 accelYCart
int8 accelZCart

"""
  __slots__ = ['relay1Error','relay2Error','relay3Error','relay4Error','relay5Error','relay6Error','relay7Error','relay8Error','sensor1','sensor2','sensor3','sensor4','sensor5','sensor6','sensor7','sensor8','temperature','humidity','windSpeed','concreteTemperature','accelXNozzle','accelYNozzle','accelZNozzle','accelXCart','accelYCart','accelZCart']
  _slot_types = ['bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','bool','int8','int8','int8','int8','int8','int8','int8','int8','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       relay1Error,relay2Error,relay3Error,relay4Error,relay5Error,relay6Error,relay7Error,relay8Error,sensor1,sensor2,sensor3,sensor4,sensor5,sensor6,sensor7,sensor8,temperature,humidity,windSpeed,concreteTemperature,accelXNozzle,accelYNozzle,accelZNozzle,accelXCart,accelYCart,accelZCart

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Arduino_O, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.relay1Error is None:
        self.relay1Error = False
      if self.relay2Error is None:
        self.relay2Error = False
      if self.relay3Error is None:
        self.relay3Error = False
      if self.relay4Error is None:
        self.relay4Error = False
      if self.relay5Error is None:
        self.relay5Error = False
      if self.relay6Error is None:
        self.relay6Error = False
      if self.relay7Error is None:
        self.relay7Error = False
      if self.relay8Error is None:
        self.relay8Error = False
      if self.sensor1 is None:
        self.sensor1 = False
      if self.sensor2 is None:
        self.sensor2 = False
      if self.sensor3 is None:
        self.sensor3 = False
      if self.sensor4 is None:
        self.sensor4 = False
      if self.sensor5 is None:
        self.sensor5 = False
      if self.sensor6 is None:
        self.sensor6 = False
      if self.sensor7 is None:
        self.sensor7 = False
      if self.sensor8 is None:
        self.sensor8 = False
      if self.temperature is None:
        self.temperature = 0
      if self.humidity is None:
        self.humidity = 0
      if self.windSpeed is None:
        self.windSpeed = 0
      if self.concreteTemperature is None:
        self.concreteTemperature = 0
      if self.accelXNozzle is None:
        self.accelXNozzle = 0
      if self.accelYNozzle is None:
        self.accelYNozzle = 0
      if self.accelZNozzle is None:
        self.accelZNozzle = 0
      if self.accelXCart is None:
        self.accelXCart = 0
      if self.accelYCart is None:
        self.accelYCart = 0
      if self.accelZCart is None:
        self.accelZCart = 0
    else:
      self.relay1Error = False
      self.relay2Error = False
      self.relay3Error = False
      self.relay4Error = False
      self.relay5Error = False
      self.relay6Error = False
      self.relay7Error = False
      self.relay8Error = False
      self.sensor1 = False
      self.sensor2 = False
      self.sensor3 = False
      self.sensor4 = False
      self.sensor5 = False
      self.sensor6 = False
      self.sensor7 = False
      self.sensor8 = False
      self.temperature = 0
      self.humidity = 0
      self.windSpeed = 0
      self.concreteTemperature = 0
      self.accelXNozzle = 0
      self.accelYNozzle = 0
      self.accelZNozzle = 0
      self.accelXCart = 0
      self.accelYCart = 0
      self.accelZCart = 0

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
      buff.write(_get_struct_16B10b().pack(_x.relay1Error, _x.relay2Error, _x.relay3Error, _x.relay4Error, _x.relay5Error, _x.relay6Error, _x.relay7Error, _x.relay8Error, _x.sensor1, _x.sensor2, _x.sensor3, _x.sensor4, _x.sensor5, _x.sensor6, _x.sensor7, _x.sensor8, _x.temperature, _x.humidity, _x.windSpeed, _x.concreteTemperature, _x.accelXNozzle, _x.accelYNozzle, _x.accelZNozzle, _x.accelXCart, _x.accelYCart, _x.accelZCart))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 26
      (_x.relay1Error, _x.relay2Error, _x.relay3Error, _x.relay4Error, _x.relay5Error, _x.relay6Error, _x.relay7Error, _x.relay8Error, _x.sensor1, _x.sensor2, _x.sensor3, _x.sensor4, _x.sensor5, _x.sensor6, _x.sensor7, _x.sensor8, _x.temperature, _x.humidity, _x.windSpeed, _x.concreteTemperature, _x.accelXNozzle, _x.accelYNozzle, _x.accelZNozzle, _x.accelXCart, _x.accelYCart, _x.accelZCart,) = _get_struct_16B10b().unpack(str[start:end])
      self.relay1Error = bool(self.relay1Error)
      self.relay2Error = bool(self.relay2Error)
      self.relay3Error = bool(self.relay3Error)
      self.relay4Error = bool(self.relay4Error)
      self.relay5Error = bool(self.relay5Error)
      self.relay6Error = bool(self.relay6Error)
      self.relay7Error = bool(self.relay7Error)
      self.relay8Error = bool(self.relay8Error)
      self.sensor1 = bool(self.sensor1)
      self.sensor2 = bool(self.sensor2)
      self.sensor3 = bool(self.sensor3)
      self.sensor4 = bool(self.sensor4)
      self.sensor5 = bool(self.sensor5)
      self.sensor6 = bool(self.sensor6)
      self.sensor7 = bool(self.sensor7)
      self.sensor8 = bool(self.sensor8)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_16B10b().pack(_x.relay1Error, _x.relay2Error, _x.relay3Error, _x.relay4Error, _x.relay5Error, _x.relay6Error, _x.relay7Error, _x.relay8Error, _x.sensor1, _x.sensor2, _x.sensor3, _x.sensor4, _x.sensor5, _x.sensor6, _x.sensor7, _x.sensor8, _x.temperature, _x.humidity, _x.windSpeed, _x.concreteTemperature, _x.accelXNozzle, _x.accelYNozzle, _x.accelZNozzle, _x.accelXCart, _x.accelYCart, _x.accelZCart))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 26
      (_x.relay1Error, _x.relay2Error, _x.relay3Error, _x.relay4Error, _x.relay5Error, _x.relay6Error, _x.relay7Error, _x.relay8Error, _x.sensor1, _x.sensor2, _x.sensor3, _x.sensor4, _x.sensor5, _x.sensor6, _x.sensor7, _x.sensor8, _x.temperature, _x.humidity, _x.windSpeed, _x.concreteTemperature, _x.accelXNozzle, _x.accelYNozzle, _x.accelZNozzle, _x.accelXCart, _x.accelYCart, _x.accelZCart,) = _get_struct_16B10b().unpack(str[start:end])
      self.relay1Error = bool(self.relay1Error)
      self.relay2Error = bool(self.relay2Error)
      self.relay3Error = bool(self.relay3Error)
      self.relay4Error = bool(self.relay4Error)
      self.relay5Error = bool(self.relay5Error)
      self.relay6Error = bool(self.relay6Error)
      self.relay7Error = bool(self.relay7Error)
      self.relay8Error = bool(self.relay8Error)
      self.sensor1 = bool(self.sensor1)
      self.sensor2 = bool(self.sensor2)
      self.sensor3 = bool(self.sensor3)
      self.sensor4 = bool(self.sensor4)
      self.sensor5 = bool(self.sensor5)
      self.sensor6 = bool(self.sensor6)
      self.sensor7 = bool(self.sensor7)
      self.sensor8 = bool(self.sensor8)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_16B10b = None
def _get_struct_16B10b():
    global _struct_16B10b
    if _struct_16B10b is None:
        _struct_16B10b = struct.Struct("<16B10b")
    return _struct_16B10b