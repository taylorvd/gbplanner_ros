// Generated by gencpp from file planner_msgs/planner_set_search_modeRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_SEARCH_MODEREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_SEARCH_MODEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <planner_msgs/PlanningMode.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_set_search_modeRequest_
{
  typedef planner_set_search_modeRequest_<ContainerAllocator> Type;

  planner_set_search_modeRequest_()
    : search_mode()  {
    }
  planner_set_search_modeRequest_(const ContainerAllocator& _alloc)
    : search_mode(_alloc)  {
  (void)_alloc;
    }



   typedef  ::planner_msgs::PlanningMode_<ContainerAllocator>  _search_mode_type;
  _search_mode_type search_mode;





  typedef boost::shared_ptr< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_set_search_modeRequest_

typedef ::planner_msgs::planner_set_search_modeRequest_<std::allocator<void> > planner_set_search_modeRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_set_search_modeRequest > planner_set_search_modeRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_set_search_modeRequest const> planner_set_search_modeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.search_mode == rhs.search_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4180db9c78f33b1af4f1ec158a3d4244";
  }

  static const char* value(const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4180db9c78f33b1aULL;
  static const uint64_t static_value2 = 0xf4f1ec158a3d4244ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_set_search_modeRequest";
  }

  static const char* value(const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/PlanningMode search_mode\n"
"\n"
"================================================================================\n"
"MSG: planner_msgs/PlanningMode\n"
"# Planning mode for exploration, defined in Params/PlanningModeType.\n"
"int32 kBasicExploration = 0\n"
"int32 kNarrowEnvExploration = 1\n"
"int32 kAdaptiveExploration = 2\n"
"\n"
"# Set one of above values.\n"
"int32 mode\n"
;
  }

  static const char* value(const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.search_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_set_search_modeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_set_search_modeRequest_<ContainerAllocator>& v)
  {
    s << indent << "search_mode: ";
    s << std::endl;
    Printer< ::planner_msgs::PlanningMode_<ContainerAllocator> >::stream(s, indent + "  ", v.search_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_SEARCH_MODEREQUEST_H