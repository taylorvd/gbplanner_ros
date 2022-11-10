// Generated by gencpp from file planner_msgs/planner_go_to_waypointRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_GO_TO_WAYPOINTREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_GO_TO_WAYPOINTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_go_to_waypointRequest_
{
  typedef planner_go_to_waypointRequest_<ContainerAllocator> Type;

  planner_go_to_waypointRequest_()
    : check_collision(false)
    , waypoint()  {
    }
  planner_go_to_waypointRequest_(const ContainerAllocator& _alloc)
    : check_collision(false)
    , waypoint(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _check_collision_type;
  _check_collision_type check_collision;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _waypoint_type;
  _waypoint_type waypoint;





  typedef boost::shared_ptr< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_go_to_waypointRequest_

typedef ::planner_msgs::planner_go_to_waypointRequest_<std::allocator<void> > planner_go_to_waypointRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_go_to_waypointRequest > planner_go_to_waypointRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_go_to_waypointRequest const> planner_go_to_waypointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator2> & rhs)
{
  return lhs.check_collision == rhs.check_collision &&
    lhs.waypoint == rhs.waypoint;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e8a9f6eb12a0c008e39a6c36756eccc";
  }

  static const char* value(const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e8a9f6eb12a0c00ULL;
  static const uint64_t static_value2 = 0x8e39a6c36756ecccULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_go_to_waypointRequest";
  }

  static const char* value(const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool check_collision\n"
"geometry_msgs/PoseStamped waypoint\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.check_collision);
      stream.next(m.waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_go_to_waypointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_go_to_waypointRequest_<ContainerAllocator>& v)
  {
    s << indent << "check_collision: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.check_collision);
    s << indent << "waypoint: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.waypoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_GO_TO_WAYPOINTREQUEST_H
