// Generated by gencpp from file planner_msgs/planner_srvResponse.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SRVRESPONSE_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SRVRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_srvResponse_
{
  typedef planner_srvResponse_<ContainerAllocator> Type;

  planner_srvResponse_()
    : status(0)
    , planning_bound_mode(0)
    , path()  {
    }
  planner_srvResponse_(const ContainerAllocator& _alloc)
    : status(0)
    , planning_bound_mode(0)
    , path(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;

   typedef int32_t _planning_bound_mode_type;
  _planning_bound_mode_type planning_bound_mode;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _path_type;
  _path_type path;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(kForward)
  #undef kForward
#endif
#if defined(_WIN32) && defined(kBackward)
  #undef kBackward
#endif
#if defined(_WIN32) && defined(kHoming)
  #undef kHoming
#endif
#if defined(_WIN32) && defined(kRepositioning)
  #undef kRepositioning
#endif

  enum {
    kForward = 0,
    kBackward = 1,
    kHoming = 2,
    kRepositioning = 3,
  };


  typedef boost::shared_ptr< ::planner_msgs::planner_srvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_srvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct planner_srvResponse_

typedef ::planner_msgs::planner_srvResponse_<std::allocator<void> > planner_srvResponse;

typedef boost::shared_ptr< ::planner_msgs::planner_srvResponse > planner_srvResponsePtr;
typedef boost::shared_ptr< ::planner_msgs::planner_srvResponse const> planner_srvResponseConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_srvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_srvResponse_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_srvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.planning_bound_mode == rhs.planning_bound_mode &&
    lhs.path == rhs.path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_srvResponse_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_srvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_srvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_srvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0d92f8e1aaba13be2917646209d77e2a";
  }

  static const char* value(const ::planner_msgs::planner_srvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0d92f8e1aaba13beULL;
  static const uint64_t static_value2 = 0x2917646209d77e2aULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_srvResponse";
  }

  static const char* value(const ::planner_msgs::planner_srvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 kForward = 0\n"
"int32 kBackward = 1\n"
"int32 kHoming = 2\n"
"int32 kRepositioning = 3\n"
"# Status of the best path, take one of the above values.\n"
"int32 status\n"
"\n"
"# Return actual bound mode used for planning\n"
"int32 planning_bound_mode\n"
"\n"
"# Return best path.\n"
"geometry_msgs/Pose[] path\n"
"\n"
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

  static const char* value(const ::planner_msgs::planner_srvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.planning_bound_mode);
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_srvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_srvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_srvResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
    s << indent << "planning_bound_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.planning_bound_mode);
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.path[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SRVRESPONSE_H