// Generated by gencpp from file rgmc_manipulation/NFSRequestRequest.msg
// DO NOT EDIT!


#ifndef RGMC_MANIPULATION_MESSAGE_NFSREQUESTREQUEST_H
#define RGMC_MANIPULATION_MESSAGE_NFSREQUESTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rgmc_manipulation
{
template <class ContainerAllocator>
struct NFSRequestRequest_
{
  typedef NFSRequestRequest_<ContainerAllocator> Type;

  NFSRequestRequest_()
    : target_vel(0.0)
    , target_torque(0.0)
    , set_motor_state(false)
    , move(false)
    , stop(false)
    , clear_error(false)  {
    }
  NFSRequestRequest_(const ContainerAllocator& _alloc)
    : target_vel(0.0)
    , target_torque(0.0)
    , set_motor_state(false)
    , move(false)
    , stop(false)
    , clear_error(false)  {
  (void)_alloc;
    }



   typedef double _target_vel_type;
  _target_vel_type target_vel;

   typedef double _target_torque_type;
  _target_torque_type target_torque;

   typedef uint8_t _set_motor_state_type;
  _set_motor_state_type set_motor_state;

   typedef uint8_t _move_type;
  _move_type move;

   typedef uint8_t _stop_type;
  _stop_type stop;

   typedef uint8_t _clear_error_type;
  _clear_error_type clear_error;





  typedef boost::shared_ptr< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct NFSRequestRequest_

typedef ::rgmc_manipulation::NFSRequestRequest_<std::allocator<void> > NFSRequestRequest;

typedef boost::shared_ptr< ::rgmc_manipulation::NFSRequestRequest > NFSRequestRequestPtr;
typedef boost::shared_ptr< ::rgmc_manipulation::NFSRequestRequest const> NFSRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator1> & lhs, const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator2> & rhs)
{
  return lhs.target_vel == rhs.target_vel &&
    lhs.target_torque == rhs.target_torque &&
    lhs.set_motor_state == rhs.set_motor_state &&
    lhs.move == rhs.move &&
    lhs.stop == rhs.stop &&
    lhs.clear_error == rhs.clear_error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator1> & lhs, const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rgmc_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "997bfe360c8f01b6ee2fa25b83e9f4dd";
  }

  static const char* value(const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x997bfe360c8f01b6ULL;
  static const uint64_t static_value2 = 0xee2fa25b83e9f4ddULL;
};

template<class ContainerAllocator>
struct DataType< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rgmc_manipulation/NFSRequestRequest";
  }

  static const char* value(const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 target_vel\n"
"float64 target_torque\n"
"bool set_motor_state\n"
"bool move\n"
"bool stop\n"
"bool clear_error\n"
;
  }

  static const char* value(const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_vel);
      stream.next(m.target_torque);
      stream.next(m.set_motor_state);
      stream.next(m.move);
      stream.next(m.stop);
      stream.next(m.clear_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NFSRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rgmc_manipulation::NFSRequestRequest_<ContainerAllocator>& v)
  {
    s << indent << "target_vel: ";
    Printer<double>::stream(s, indent + "  ", v.target_vel);
    s << indent << "target_torque: ";
    Printer<double>::stream(s, indent + "  ", v.target_torque);
    s << indent << "set_motor_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.set_motor_state);
    s << indent << "move: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.move);
    s << indent << "stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop);
    s << indent << "clear_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RGMC_MANIPULATION_MESSAGE_NFSREQUESTREQUEST_H
