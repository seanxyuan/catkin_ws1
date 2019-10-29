// Generated by gencpp from file ros_essentials_cpp/Cart_mixer.msg
// DO NOT EDIT!


#ifndef ROS_ESSENTIALS_CPP_MESSAGE_CART_MIXER_H
#define ROS_ESSENTIALS_CPP_MESSAGE_CART_MIXER_H


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
struct Cart_mixer_
{
  typedef Cart_mixer_<ContainerAllocator> Type;

  Cart_mixer_()
    : mixerError(0)  {
    }
  Cart_mixer_(const ContainerAllocator& _alloc)
    : mixerError(0)  {
  (void)_alloc;
    }



   typedef int8_t _mixerError_type;
  _mixerError_type mixerError;





  typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> const> ConstPtr;

}; // struct Cart_mixer_

typedef ::ros_essentials_cpp::Cart_mixer_<std::allocator<void> > Cart_mixer;

typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_mixer > Cart_mixerPtr;
typedef boost::shared_ptr< ::ros_essentials_cpp::Cart_mixer const> Cart_mixerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0dbadd96d524d1bd358cd8983bb7053";
  }

  static const char* value(const ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0dbadd96d524d1bULL;
  static const uint64_t static_value2 = 0xd358cd8983bb7053ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_essentials_cpp/Cart_mixer";
  }

  static const char* value(const ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 mixerError\n"
;
  }

  static const char* value(const ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mixerError);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Cart_mixer_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_essentials_cpp::Cart_mixer_<ContainerAllocator>& v)
  {
    s << indent << "mixerError: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mixerError);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ESSENTIALS_CPP_MESSAGE_CART_MIXER_H