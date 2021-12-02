// Generated by gencpp from file tbug/goalStatusFeedback.msg
// DO NOT EDIT!


#ifndef TBUG_MESSAGE_GOALSTATUSFEEDBACK_H
#define TBUG_MESSAGE_GOALSTATUSFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tbug
{
template <class ContainerAllocator>
struct goalStatusFeedback_
{
  typedef goalStatusFeedback_<ContainerAllocator> Type;

  goalStatusFeedback_()
    : x(0.0)
    , y(0.0)  {
    }
  goalStatusFeedback_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::tbug::goalStatusFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tbug::goalStatusFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct goalStatusFeedback_

typedef ::tbug::goalStatusFeedback_<std::allocator<void> > goalStatusFeedback;

typedef boost::shared_ptr< ::tbug::goalStatusFeedback > goalStatusFeedbackPtr;
typedef boost::shared_ptr< ::tbug::goalStatusFeedback const> goalStatusFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tbug::goalStatusFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tbug::goalStatusFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tbug::goalStatusFeedback_<ContainerAllocator1> & lhs, const ::tbug::goalStatusFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tbug::goalStatusFeedback_<ContainerAllocator1> & lhs, const ::tbug::goalStatusFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tbug

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tbug::goalStatusFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tbug::goalStatusFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tbug::goalStatusFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tbug::goalStatusFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tbug::goalStatusFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tbug::goalStatusFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tbug::goalStatusFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "209f516d3eb691f0663e25cb750d67c1";
  }

  static const char* value(const ::tbug::goalStatusFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x209f516d3eb691f0ULL;
  static const uint64_t static_value2 = 0x663e25cb750d67c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::tbug::goalStatusFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tbug/goalStatusFeedback";
  }

  static const char* value(const ::tbug::goalStatusFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tbug::goalStatusFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define a feedback message\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::tbug::goalStatusFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tbug::goalStatusFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct goalStatusFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tbug::goalStatusFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tbug::goalStatusFeedback_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TBUG_MESSAGE_GOALSTATUSFEEDBACK_H
