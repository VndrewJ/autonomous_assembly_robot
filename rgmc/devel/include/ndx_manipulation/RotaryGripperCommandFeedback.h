// Generated by gencpp from file ndx_manipulation/RotaryGripperCommandFeedback.msg
// DO NOT EDIT!


#ifndef NDX_MANIPULATION_MESSAGE_ROTARYGRIPPERCOMMANDFEEDBACK_H
#define NDX_MANIPULATION_MESSAGE_ROTARYGRIPPERCOMMANDFEEDBACK_H


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
struct RotaryGripperCommandFeedback_
{
  typedef RotaryGripperCommandFeedback_<ContainerAllocator> Type;

  RotaryGripperCommandFeedback_()
    {
    }
  RotaryGripperCommandFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct RotaryGripperCommandFeedback_

typedef ::ndx_manipulation::RotaryGripperCommandFeedback_<std::allocator<void> > RotaryGripperCommandFeedback;

typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandFeedback > RotaryGripperCommandFeedbackPtr;
typedef boost::shared_ptr< ::ndx_manipulation::RotaryGripperCommandFeedback const> RotaryGripperCommandFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ndx_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ndx_manipulation/RotaryGripperCommandFeedback";
  }

  static const char* value(const ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
;
  }

  static const char* value(const ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RotaryGripperCommandFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ndx_manipulation::RotaryGripperCommandFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // NDX_MANIPULATION_MESSAGE_ROTARYGRIPPERCOMMANDFEEDBACK_H
