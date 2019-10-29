// Generated by gencpp from file ros_essentials_cpp/Cart_relaysensor.msg
// DO NOT EDIT!


#ifndef ROS_ESSENTIALS_CPP_MESSAGE_CART_RELAYSENSOR_H
#define ROS_ESSENTIALS_CPP_MESSAGE_CART_RELAYSENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_essentials_cpp
{
template <class ContainerAllocator>
struct Cart_relaysensor_
{
  typedef Cart_relaysensor_<ContainerAllocator> Type;

  Cart_relaysensor_()
    : relay1Error(false)
    , relay2Error(false)
    , relay3Error(false)
    , relay4Error(false)
    , relay5Error(false)
    , relay6Error(false)
    , relay7Error(false)
    , relay8Error(false)  {
    }
  Cart_relaysensor_(const ContainerAllocator& _alloc)
    : relay1Error(false)
    , relay2Error(false)
    , relay3Error(false)
    , relay4Error(false)
    , relay5Error(false)
    , relay6Error(false)
    , relay7Error(false)
    , relay8Error(false)  {
  (void)_alloc;
    }



   typedef uint8_t _relay1Error_type;
  _relay1Error_type relay1Error;

   typedef uint8_t _relay2Error_type;
  _relay2Error_type relay2Error;

   typedef uint8_t _relay3Error_type;
  _relay3Error_type relay3Error;

   typedef uint8_t _relay4Error_type;
  _relay4Error_type relay4Error;

   typedef uint8_t _relay5Error_type;
  _relay5Error_type relay5Error;

   typedef uint8_t _relay6Error_type;
  _relay6Error_type relay6Error;

   typedef uint8_t _relay7Error_type;
  _relay7Error_type relay7Error;

   typedef uint8_t _relay8Error_type;
  _relay8Error_type relay8Error;





  typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> const> ConstPtr;

}; // struct Cart_relaysensor_

typedef ::ros_essentials_cpp::Cart_relaysensor_<std::allocator<void> > Cart_relaysensor;

typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_relaysensor > Cart_relaysensorPtr;
typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_relaysensor const> Cart_relaysensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_essentials_cpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'ros_essentials_cpp': ['/home/xy/catkin_ws/src/ros_essentials_cpp/msg', '/home/xy/catkin_ws/devel/share/ros_essentials_cpp/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a5fd8f6b7281f34a3f22a88ad50ab29c";
  }

  static const char* value(const ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa5fd8f6b7281f34aULL;
  static const uint64_t static_value2 = 0x3f22a88ad50ab29cULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_essentials_cpp/Cart_relaysensor";
  }

  static const char* value(const ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool relay1Error\n"
"bool relay2Error\n"
"bool relay3Error\n"
"bool relay4Error\n"
"bool relay5Error\n"
"bool relay6Error\n"
"bool relay7Error\n"
"bool relay8Error\n"
"\n"
;
  }

  static const char* value(const ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.relay1Error);
      stream.next(m.relay2Error);
      stream.next(m.relay3Error);
      stream.next(m.relay4Error);
      stream.next(m.relay5Error);
      stream.next(m.relay6Error);
      stream.next(m.relay7Error);
      stream.next(m.relay8Error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Cart_relaysensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_essentials_cpp::Cart_relaysensor_<ContainerAllocator>& v)
  {
    s << indent << "relay1Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay1Error);
    s << indent << "relay2Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay2Error);
    s << indent << "relay3Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay3Error);
    s << indent << "relay4Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay4Error);
    s << indent << "relay5Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay5Error);
    s << indent << "relay6Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay6Error);
    s << indent << "relay7Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay7Error);
    s << indent << "relay8Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relay8Error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ESSENTIALS_CPP_MESSAGE_CART_RELAYSENSOR_H