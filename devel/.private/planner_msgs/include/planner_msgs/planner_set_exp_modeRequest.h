// Generated by gencpp from file planner_msgs/planner_set_exp_modeRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_EXP_MODEREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_EXP_MODEREQUEST_H


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
struct planner_set_exp_modeRequest_
{
  typedef planner_set_exp_modeRequest_<ContainerAllocator> Type;

  planner_set_exp_modeRequest_()
    : exp_mode()  {
    }
  planner_set_exp_modeRequest_(const ContainerAllocator& _alloc)
    : exp_mode(_alloc)  {
  (void)_alloc;
    }



   typedef  ::planner_msgs::PlanningMode_<ContainerAllocator>  _exp_mode_type;
  _exp_mode_type exp_mode;





  typedef boost::shared_ptr< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_set_exp_modeRequest_

typedef ::planner_msgs::planner_set_exp_modeRequest_<std::allocator<void> > planner_set_exp_modeRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_set_exp_modeRequest > planner_set_exp_modeRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_set_exp_modeRequest const> planner_set_exp_modeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.exp_mode == rhs.exp_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "457ee7e10e6806d9611a5398a52a6b78";
  }

  static const char* value(const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x457ee7e10e6806d9ULL;
  static const uint64_t static_value2 = 0x611a5398a52a6b78ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_set_exp_modeRequest";
  }

  static const char* value(const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/PlanningMode exp_mode\n"
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

  static const char* value(const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.exp_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_set_exp_modeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_set_exp_modeRequest_<ContainerAllocator>& v)
  {
    s << indent << "exp_mode: ";
    s << std::endl;
    Printer< ::planner_msgs::PlanningMode_<ContainerAllocator> >::stream(s, indent + "  ", v.exp_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_EXP_MODEREQUEST_H
