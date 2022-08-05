// Generated by gencpp from file airsim_ros_pkgs/GimbalAngleEulerCmd.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_PKGS_MESSAGE_GIMBALANGLEEULERCMD_H
#define AIRSIM_ROS_PKGS_MESSAGE_GIMBALANGLEEULERCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace airsim_ros_pkgs
{
template <class ContainerAllocator>
struct GimbalAngleEulerCmd_
{
  typedef GimbalAngleEulerCmd_<ContainerAllocator> Type;

  GimbalAngleEulerCmd_()
    : header()
    , camera_name()
    , vehicle_name()
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
    }
  GimbalAngleEulerCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , camera_name(_alloc)
    , vehicle_name(_alloc)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_name_type;
  _camera_name_type camera_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _vehicle_name_type;
  _vehicle_name_type vehicle_name;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> const> ConstPtr;

}; // struct GimbalAngleEulerCmd_

typedef ::airsim_ros_pkgs::GimbalAngleEulerCmd_<std::allocator<void> > GimbalAngleEulerCmd;

typedef boost::shared_ptr< ::airsim_ros_pkgs::GimbalAngleEulerCmd > GimbalAngleEulerCmdPtr;
typedef boost::shared_ptr< ::airsim_ros_pkgs::GimbalAngleEulerCmd const> GimbalAngleEulerCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.camera_name == rhs.camera_name &&
    lhs.vehicle_name == rhs.vehicle_name &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros_pkgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e806d02845eb5f1632f3c9f2e90c0519";
  }

  static const char* value(const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe806d02845eb5f16ULL;
  static const uint64_t static_value2 = 0x32f3c9f2e90c0519ULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros_pkgs/GimbalAngleEulerCmd";
  }

  static const char* value(const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"string camera_name\n"
"string vehicle_name\n"
"float64 roll\n"
"float64 pitch\n"
"float64 yaw\n"
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
;
  }

  static const char* value(const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.camera_name);
      stream.next(m.vehicle_name);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GimbalAngleEulerCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros_pkgs::GimbalAngleEulerCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "camera_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_name);
    s << indent << "vehicle_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.vehicle_name);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_PKGS_MESSAGE_GIMBALANGLEEULERCMD_H
