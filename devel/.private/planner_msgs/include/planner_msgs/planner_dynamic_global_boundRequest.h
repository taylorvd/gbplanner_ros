// Generated by gencpp from file planner_msgs/planner_dynamic_global_boundRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_DYNAMIC_GLOBAL_BOUNDREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_DYNAMIC_GLOBAL_BOUNDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_dynamic_global_boundRequest_
{
  typedef planner_dynamic_global_boundRequest_<ContainerAllocator> Type;

  planner_dynamic_global_boundRequest_()
    : reset_to_default(false)
    , header()
    , center()
    , left()
    , front()
    , up()  {
    }
  planner_dynamic_global_boundRequest_(const ContainerAllocator& _alloc)
    : reset_to_default(false)
    , header(_alloc)
    , center(_alloc)
    , left(_alloc)
    , front(_alloc)
    , up(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _reset_to_default_type;
  _reset_to_default_type reset_to_default;

   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _center_type;
  _center_type center;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _left_type;
  _left_type left;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _front_type;
  _front_type front;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _up_type;
  _up_type up;





  typedef boost::shared_ptr< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_dynamic_global_boundRequest_

typedef ::planner_msgs::planner_dynamic_global_boundRequest_<std::allocator<void> > planner_dynamic_global_boundRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_dynamic_global_boundRequest > planner_dynamic_global_boundRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_dynamic_global_boundRequest const> planner_dynamic_global_boundRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator2> & rhs)
{
  return lhs.reset_to_default == rhs.reset_to_default &&
    lhs.header == rhs.header &&
    lhs.center == rhs.center &&
    lhs.left == rhs.left &&
    lhs.front == rhs.front &&
    lhs.up == rhs.up;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77084cd2fbed3f310ab736521dfcf7b1";
  }

  static const char* value(const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77084cd2fbed3f31ULL;
  static const uint64_t static_value2 = 0x0ab736521dfcf7b1ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_dynamic_global_boundRequest";
  }

  static const char* value(const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# reset_to_default:\n"
"#   true:  reset to the default bounding box\n"
"#   false: set new bounding box\n"
"bool reset_to_default\n"
"\n"
"# Header contains the frame in which the bounding box is expressed\n"
"std_msgs/Header header\n"
"\n"
"# All coordinates are absolute and expressed in global frame (as set in the header)\n"
"geometry_msgs/Point center  # Origin of bounding box\n"
"geometry_msgs/Point left    # Vertex on the left of center when looking along the vector of the bb\n"
"geometry_msgs/Point front   # Vertex in the front of center when looking along the vector of the bb\n"
"geometry_msgs/Point up      # Vertex above center when looking along the vector of the bb\n"
"\n"
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
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reset_to_default);
      stream.next(m.header);
      stream.next(m.center);
      stream.next(m.left);
      stream.next(m.front);
      stream.next(m.up);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_dynamic_global_boundRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_dynamic_global_boundRequest_<ContainerAllocator>& v)
  {
    s << indent << "reset_to_default: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_to_default);
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "center: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.center);
    s << indent << "left: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.left);
    s << indent << "front: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.front);
    s << indent << "up: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.up);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_DYNAMIC_GLOBAL_BOUNDREQUEST_H