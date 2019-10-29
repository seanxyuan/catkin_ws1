// Generated by gencpp from file ros_essentials_cpp/CART_HOPPER.msg
// DO NOT EDIT!


#ifndef ROS_ESSENTIALS_CPP_MESSAGE_CART_HOPPER_H
#define ROS_ESSENTIALS_CPP_MESSAGE_CART_HOPPER_H


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
struct CART_HOPPER_
{
  typedef CART_HOPPER_<ContainerAllocator> Type;

  CART_HOPPER_()
    : hopperMaterialLevel(false)
    , hooperBreaker(false)
    , hooperBreakerError(false)  {
    }
  CART_HOPPER_(const ContainerAllocator& _alloc)
    : hopperMaterialLevel(false)
    , hooperBreaker(false)
    , hooperBreakerError(false)  {
  (void)_alloc;
    }



   typedef uint8_t _hopperMaterialLevel_type;
  _hopperMaterialLevel_type hopperMaterialLevel;

   typedef uint8_t _hooperBreaker_type;
  _hooperBreaker_type hooperBreaker;

   typedef uint8_t _hooperBreakerError_type;
  _hooperBreakerError_type hooperBreakerError;





  typedef boost::shared_ptr< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> const> ConstPtr;

}; // struct CART_HOPPER_

typedef ::ros_essentials_cpp::CART_HOPPER_<std::allocator<void> > CART_HOPPER;

typedef boost::shared_ptr< ::ros_essentials_cpp::CART_HOPPER > CART_HOPPERPtr;
typedef boost::shared_ptr< ::ros_essentials_cpp::CART_HOPPER const> CART_HOPPERConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e4ec7706667975794c1d31c7b75e3db";
  }

  static const char* value(const ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e4ec77066679757ULL;
  static const uint64_t static_value2 = 0x94c1d31c7b75e3dbULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_essentials_cpp/CART_HOPPER";
  }

  static const char* value(const ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool hopperMaterialLevel\n"
"bool hooperBreaker\n"
"bool hooperBreakerError\n"
"\n"
;
  }

  static const char* value(const ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hopperMaterialLevel);
      stream.next(m.hooperBreaker);
      stream.next(m.hooperBreakerError);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CART_HOPPER_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_essentials_cpp::CART_HOPPER_<ContainerAllocator>& v)
  {
    s << indent << "hopperMaterialLevel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hopperMaterialLevel);
    s << indent << "hooperBreaker: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hooperBreaker);
    s << indent << "hooperBreakerError: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hooperBreakerError);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ESSENTIALS_CPP_MESSAGE_CART_HOPPER_H