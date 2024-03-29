// Generated by gencpp from file ros_essentials_cpp/Master.msg
// DO NOT EDIT!


#ifndef ROS_ESSENTIALS_CPP_MESSAGE_MASTER_H
#define ROS_ESSENTIALS_CPP_MESSAGE_MASTER_H


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
struct Master_
{
  typedef Master_<ContainerAllocator> Type;

  Master_()
    : deliverySwitch(false)
    , hopperSwitch(false)
    , doserSwitch(false)
    , doserSpeed(0)
    , wettingSwitch(false)
    , mixerSwitch(false)
    , mixerSpeed(0)
    , pumpSwitch(false)
    , pumpRotarySpeed(0)
    , pumpUpDownSpeed(0)  {
    }
  Master_(const ContainerAllocator& _alloc)
    : deliverySwitch(false)
    , hopperSwitch(false)
    , doserSwitch(false)
    , doserSpeed(0)
    , wettingSwitch(false)
    , mixerSwitch(false)
    , mixerSpeed(0)
    , pumpSwitch(false)
    , pumpRotarySpeed(0)
    , pumpUpDownSpeed(0)  {
  (void)_alloc;
    }



   typedef uint8_t _deliverySwitch_type;
  _deliverySwitch_type deliverySwitch;

   typedef uint8_t _hopperSwitch_type;
  _hopperSwitch_type hopperSwitch;

   typedef uint8_t _doserSwitch_type;
  _doserSwitch_type doserSwitch;

   typedef int8_t _doserSpeed_type;
  _doserSpeed_type doserSpeed;

   typedef uint8_t _wettingSwitch_type;
  _wettingSwitch_type wettingSwitch;

   typedef uint8_t _mixerSwitch_type;
  _mixerSwitch_type mixerSwitch;

   typedef int8_t _mixerSpeed_type;
  _mixerSpeed_type mixerSpeed;

   typedef uint8_t _pumpSwitch_type;
  _pumpSwitch_type pumpSwitch;

   typedef int8_t _pumpRotarySpeed_type;
  _pumpRotarySpeed_type pumpRotarySpeed;

   typedef int8_t _pumpUpDownSpeed_type;
  _pumpUpDownSpeed_type pumpUpDownSpeed;





  typedef boost::shared_ptr< ::ros_essentials_cpp::Master_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_essentials_cpp::Master_<ContainerAllocator> const> ConstPtr;

}; // struct Master_

typedef ::ros_essentials_cpp::Master_<std::allocator<void> > Master;

typedef boost::shared_ptr< ::ros_essentials_cpp::Master > MasterPtr;
typedef boost::shared_ptr< ::ros_essentials_cpp::Master const> MasterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_essentials_cpp::Master_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_essentials_cpp::Master_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ros_essentials_cpp::Master_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_essentials_cpp::Master_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::Master_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::Master_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::Master_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::Master_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_essentials_cpp::Master_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48544b0ae96d98b7ed303f1ffb6b3cf8";
  }

  static const char* value(const ::ros_essentials_cpp::Master_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48544b0ae96d98b7ULL;
  static const uint64_t static_value2 = 0xed303f1ffb6b3cf8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_essentials_cpp::Master_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_essentials_cpp/Master";
  }

  static const char* value(const ::ros_essentials_cpp::Master_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_essentials_cpp::Master_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool deliverySwitch\n"
"bool hopperSwitch\n"
"bool doserSwitch\n"
"int8 doserSpeed\n"
"bool wettingSwitch\n"
"bool mixerSwitch\n"
"int8 mixerSpeed\n"
"bool pumpSwitch\n"
"int8 pumpRotarySpeed\n"
"int8 pumpUpDownSpeed\n"
;
  }

  static const char* value(const ::ros_essentials_cpp::Master_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_essentials_cpp::Master_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.deliverySwitch);
      stream.next(m.hopperSwitch);
      stream.next(m.doserSwitch);
      stream.next(m.doserSpeed);
      stream.next(m.wettingSwitch);
      stream.next(m.mixerSwitch);
      stream.next(m.mixerSpeed);
      stream.next(m.pumpSwitch);
      stream.next(m.pumpRotarySpeed);
      stream.next(m.pumpUpDownSpeed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Master_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_essentials_cpp::Master_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_essentials_cpp::Master_<ContainerAllocator>& v)
  {
    s << indent << "deliverySwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.deliverySwitch);
    s << indent << "hopperSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hopperSwitch);
    s << indent << "doserSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.doserSwitch);
    s << indent << "doserSpeed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.doserSpeed);
    s << indent << "wettingSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wettingSwitch);
    s << indent << "mixerSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mixerSwitch);
    s << indent << "mixerSpeed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mixerSpeed);
    s << indent << "pumpSwitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pumpSwitch);
    s << indent << "pumpRotarySpeed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pumpRotarySpeed);
    s << indent << "pumpUpDownSpeed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pumpUpDownSpeed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ESSENTIALS_CPP_MESSAGE_MASTER_H
