// Generated by gencpp from file ros_essentials_cpp/test.msg
// DO NOT EDIT!


#ifndef ROS_ESSENTIALS_CPP_MESSAGE_TEST_H
#define ROS_ESSENTIALS_CPP_MESSAGE_TEST_H


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
struct test_
{
  typedef test_<ContainerAllocator> Type;

  test_()
    : T1(0)
    , T2(0.0)
    , T3(0.0)
    , T4(0)  {
    }
  test_(const ContainerAllocator& _alloc)
    : T1(0)
    , T2(0.0)
    , T3(0.0)
    , T4(0)  {
  (void)_alloc;
    }



   typedef int32_t _T1_type;
  _T1_type T1;

   typedef float _T2_type;
  _T2_type T2;

   typedef float _T3_type;
  _T3_type T3;

   typedef int32_t _T4_type;
  _T4_type T4;





  typedef boost::shared_ptr< ::ros_essentials_cpp::test_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_essentials_cpp::test_<ContainerAllocator> const> ConstPtr;

}; // struct test_

typedef ::ros_essentials_cpp::test_<std::allocator<void> > test;

typedef boost::shared_ptr< ::ros_essentials_cpp::test > testPtr;
typedef boost::shared_ptr< ::ros_essentials_cpp::test const> testConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_essentials_cpp::test_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_essentials_cpp::test_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ros_essentials_cpp::test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_essentials_cpp::test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_essentials_cpp::test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::test_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_essentials_cpp::test_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_essentials_cpp::test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8d73f2e3c2cafcbf70065524e824454";
  }

  static const char* value(const ::ros_essentials_cpp::test_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8d73f2e3c2cafcbULL;
  static const uint64_t static_value2 = 0xf70065524e824454ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_essentials_cpp::test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_essentials_cpp/test";
  }

  static const char* value(const ::ros_essentials_cpp::test_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_essentials_cpp::test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 T1\n"
"float32 T2\n"
"float32 T3\n"
"int32 T4\n"
;
  }

  static const char* value(const ::ros_essentials_cpp::test_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_essentials_cpp::test_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.T1);
      stream.next(m.T2);
      stream.next(m.T3);
      stream.next(m.T4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct test_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_essentials_cpp::test_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_essentials_cpp::test_<ContainerAllocator>& v)
  {
    s << indent << "T1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.T1);
    s << indent << "T2: ";
    Printer<float>::stream(s, indent + "  ", v.T2);
    s << indent << "T3: ";
    Printer<float>::stream(s, indent + "  ", v.T3);
    s << indent << "T4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.T4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ESSENTIALS_CPP_MESSAGE_TEST_H