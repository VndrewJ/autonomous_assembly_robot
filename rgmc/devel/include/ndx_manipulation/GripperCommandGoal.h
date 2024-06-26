// Generated by gencpp from file ndx_manipulation/GripperCommandGoal.msg
// DO NOT EDIT!


#ifndef NDX_MANIPULATION_MESSAGE_GRIPPERCOMMANDGOAL_H
#define NDX_MANIPULATION_MESSAGE_GRIPPERCOMMANDGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ndx_manipulation
{
template <class ContainerAllocator>
struct GripperCommandGoal_
{
  typedef GripperCommandGoal_<ContainerAllocator> Type;

  GripperCommandGoal_()
    : position(0.0)
    , max_effort(0.0)
    , velocity(0.0)  {
    }
  GripperCommandGoal_(const ContainerAllocator& _alloc)
    : position(0.0)
    , max_effort(0.0)
    , velocity(0.0)  {
  (void)_alloc;
    }



   typedef double _position_type;
  _position_type position;

   typedef double _max_effort_type;
  _max_effort_type max_effort;

   typedef double _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GripperCommandGoal_

typedef ::ndx_manipulation::GripperCommandGoal_<std::allocator<void> > GripperCommandGoal;

typedef boost::shared_ptr< ::ndx_manipulation::GripperCommandGoal > GripperCommandGoalPtr;
typedef boost::shared_ptr< ::ndx_manipulation::GripperCommandGoal const> GripperCommandGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator1> & lhs, const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.max_effort == rhs.max_effort &&
    lhs.velocity == rhs.velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator1> & lhs, const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ndx_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2f792f8814a81ae72fa92cd976556ebf";
  }

  static const char* value(const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2f792f8814a81ae7ULL;
  static const uint64_t static_value2 = 0x2fa92cd976556ebfULL;
};

template<class ContainerAllocator>
struct DataType< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ndx_manipulation/GripperCommandGoal";
  }

  static const char* value(const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"float64 position    # The current gripper gap size (in meters)\n"
"float64 max_effort  # Max motor current\n"
"float64 velocity    # Motor velocity\n"
;
  }

  static const char* value(const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.max_effort);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperCommandGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ndx_manipulation::GripperCommandGoal_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "max_effort: ";
    Printer<double>::stream(s, indent + "  ", v.max_effort);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NDX_MANIPULATION_MESSAGE_GRIPPERCOMMANDGOAL_H
