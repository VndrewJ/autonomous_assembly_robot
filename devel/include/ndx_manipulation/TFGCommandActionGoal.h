// Generated by gencpp from file ndx_manipulation/TFGCommandActionGoal.msg
// DO NOT EDIT!


#ifndef NDX_MANIPULATION_MESSAGE_TFGCOMMANDACTIONGOAL_H
#define NDX_MANIPULATION_MESSAGE_TFGCOMMANDACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <ndx_manipulation/TFGCommandGoal.h>

namespace ndx_manipulation
{
template <class ContainerAllocator>
struct TFGCommandActionGoal_
{
  typedef TFGCommandActionGoal_<ContainerAllocator> Type;

  TFGCommandActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  TFGCommandActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::ndx_manipulation::TFGCommandGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TFGCommandActionGoal_

typedef ::ndx_manipulation::TFGCommandActionGoal_<std::allocator<void> > TFGCommandActionGoal;

typedef boost::shared_ptr< ::ndx_manipulation::TFGCommandActionGoal > TFGCommandActionGoalPtr;
typedef boost::shared_ptr< ::ndx_manipulation::TFGCommandActionGoal const> TFGCommandActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator1> & lhs, const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator1> & lhs, const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ndx_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94a2a2bdb70b0db404a375c90a249d54";
  }

  static const char* value(const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94a2a2bdb70b0db4ULL;
  static const uint64_t static_value2 = 0x04a375c90a249d54ULL;
};

template<class ContainerAllocator>
struct DataType< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ndx_manipulation/TFGCommandActionGoal";
  }

  static const char* value(const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"TFGCommandGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: ndx_manipulation/TFGCommandGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"float64 grasp           # Gripper open or close\n"
"float64 finger_angle    # Angle between finger 2 and finger 3\n"
"bool is_deg             # Specify if Angle is in degrees\n"
"float64 max_effort      # Max motor current\n"
"float64 velocity        # Motor velocity\n"
;
  }

  static const char* value(const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TFGCommandActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ndx_manipulation::TFGCommandActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::ndx_manipulation::TFGCommandGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NDX_MANIPULATION_MESSAGE_TFGCOMMANDACTIONGOAL_H
