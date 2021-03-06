// Generated by gencpp from file tbug/goalStatusGoal.msg
// DO NOT EDIT!


#ifndef TBUG_MESSAGE_GOALSTATUSGOAL_H
#define TBUG_MESSAGE_GOALSTATUSGOAL_H


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
struct goalStatusGoal_
{
  typedef goalStatusGoal_<ContainerAllocator> Type;

  goalStatusGoal_()
    : x(0.0)
    , y(0.0)  {
    }
  goalStatusGoal_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::tbug::goalStatusGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tbug::goalStatusGoal_<ContainerAllocator> const> ConstPtr;

}; // struct goalStatusGoal_

typedef ::tbug::goalStatusGoal_<std::allocator<void> > goalStatusGoal;

typedef boost::shared_ptr< ::tbug::goalStatusGoal > goalStatusGoalPtr;
typedef boost::shared_ptr< ::tbug::goalStatusGoal const> goalStatusGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tbug::goalStatusGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tbug::goalStatusGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tbug::goalStatusGoal_<ContainerAllocator1> & lhs, const ::tbug::goalStatusGoal_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tbug::goalStatusGoal_<ContainerAllocator1> & lhs, const ::tbug::goalStatusGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tbug

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tbug::goalStatusGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tbug::goalStatusGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tbug::goalStatusGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tbug::goalStatusGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tbug::goalStatusGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tbug::goalStatusGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tbug::goalStatusGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "209f516d3eb691f0663e25cb750d67c1";
  }

  static const char* value(const ::tbug::goalStatusGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x209f516d3eb691f0ULL;
  static const uint64_t static_value2 = 0x663e25cb750d67c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::tbug::goalStatusGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tbug/goalStatusGoal";
  }

  static const char* value(const ::tbug::goalStatusGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tbug::goalStatusGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::tbug::goalStatusGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tbug::goalStatusGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct goalStatusGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tbug::goalStatusGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tbug::goalStatusGoal_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TBUG_MESSAGE_GOALSTATUSGOAL_H
