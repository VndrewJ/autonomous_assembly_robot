// Generated by gencpp from file ndx_manipulation/RotaryGripperCommandResult.msg
// DO NOT EDIT!


#ifndef NDX_MANIPULATION_MESSAGE_ROTARYGRIPPERCOMMANDRESULT_H
#define NDX_MANIPULATION_MESSAGE_ROTARYGRIPPERCOMMANDRESULT_H


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
struct RotaryGripperCommandResult_
{
  typedef RotaryGripperCommandResult_<ContainerAllocator> Type;

  RotaryGripperCommandResult_()
    : offset(0)
    , effort(0)
    , stalled(false)
    , reached_goal(false)  {
    }
  RotaryGripperCommandResult_(const ContainerAllocator& _alloc)
    : offset(0)
    , effort(0)
    , stalled(false)
    , reached_goal(false)  {
  (void)_alloc;
    }



   typedef int32_t _offset_type;
  _offset_type offset;

   typedef int32_t _effort_type;
  _effort_type effort;

   typedef uint8_t _stalled_type;
  _stalled_type stalled;

   typedef uint8_t _reached_goal_type;
  _reached_goal_type reached_goal;





  typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> const> ConstPtr;

}; // struct RotaryGripperCommandResult_

typedef ::ndx_manipulation::RotaryGripperCommandResult_<std::allocator<void> > RotaryGripperCommandResult;

typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandResult > RotaryGripperCommandResultPtr;
typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandResult const> RotaryGripperCommandResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator1> & lhs, const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator2> & rhs)
{
  return lhs.offset == rhs.offset &&
    lhs.effort == rhs.effort &&
    lhs.stalled == rhs.stalled &&
    lhs.reached_goal == rhs.reached_goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator1> & lhs, const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ndx_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fd488db10a012c41d0a550294a11d7f7";
  }

  static const char* value(const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfd488db10a012c41ULL;
  static const uint64_t static_value2 = 0xd0a550294a11d7f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ndx_manipulation/RotaryGripperCommandResult";
  }

  static const char* value(const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"int32 offset      # The current rotation offset\n"
"int32 effort      # The current effort exerted (motor current)\n"
"bool stalled      # True iff the gripper is exerting max effort and not moving\n"
"bool reached_goal # True iff the gripper position has reached the commanded setpoint\n"
;
  }

  static const char* value(const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.offset);
      stream.next(m.effort);
      stream.next(m.stalled);
      stream.next(m.reached_goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RotaryGripperCommandResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ndx_manipulation::RotaryGripperCommandResult_<ContainerAllocator>& v)
  {
    s << indent << "offset: ";
    Printer<int32_t>::stream(s, indent + "  ", v.offset);
    s << indent << "effort: ";
    Printer<int32_t>::stream(s, indent + "  ", v.effort);
    s << indent << "stalled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stalled);
    s << indent << "reached_goal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reached_goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NDX_MANIPULATION_MESSAGE_ROTARYGRIPPERCOMMANDRESULT_H