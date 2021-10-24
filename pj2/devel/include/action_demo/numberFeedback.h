// Generated by gencpp from file action_demo/numberFeedback.msg
// DO NOT EDIT!


#ifndef ACTION_DEMO_MESSAGE_NUMBERFEEDBACK_H
#define ACTION_DEMO_MESSAGE_NUMBERFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace action_demo
{
template <class ContainerAllocator>
struct numberFeedback_
{
  typedef numberFeedback_<ContainerAllocator> Type;

  numberFeedback_()
    : server_current_number(0)  {
    }
  numberFeedback_(const ContainerAllocator& _alloc)
    : server_current_number(0)  {
  (void)_alloc;
    }



   typedef uint32_t _server_current_number_type;
  _server_current_number_type server_current_number;





  typedef boost::shared_ptr< ::action_demo::numberFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::action_demo::numberFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct numberFeedback_

typedef ::action_demo::numberFeedback_<std::allocator<void> > numberFeedback;

typedef boost::shared_ptr< ::action_demo::numberFeedback > numberFeedbackPtr;
typedef boost::shared_ptr< ::action_demo::numberFeedback const> numberFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::action_demo::numberFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::action_demo::numberFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace action_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'action_demo': ['/home/rcui/Desktop/PJ/pj2/devel/share/action_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::action_demo::numberFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::action_demo::numberFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_demo::numberFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_demo::numberFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_demo::numberFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_demo::numberFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::action_demo::numberFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "882cf344abca1d94163ebb82f74e1aac";
  }

  static const char* value(const ::action_demo::numberFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x882cf344abca1d94ULL;
  static const uint64_t static_value2 = 0x163ebb82f74e1aacULL;
};

template<class ContainerAllocator>
struct DataType< ::action_demo::numberFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "action_demo/numberFeedback";
  }

  static const char* value(const ::action_demo::numberFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::action_demo::numberFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message(peridoic)\n\
uint32 server_current_number\n\
\n\
";
  }

  static const char* value(const ::action_demo::numberFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::action_demo::numberFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.server_current_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct numberFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::action_demo::numberFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::action_demo::numberFeedback_<ContainerAllocator>& v)
  {
    s << indent << "server_current_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.server_current_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTION_DEMO_MESSAGE_NUMBERFEEDBACK_H
