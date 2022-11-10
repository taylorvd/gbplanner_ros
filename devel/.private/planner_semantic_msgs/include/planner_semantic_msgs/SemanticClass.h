// Generated by gencpp from file planner_semantic_msgs/SemanticClass.msg
// DO NOT EDIT!


#ifndef PLANNER_SEMANTIC_MSGS_MESSAGE_SEMANTICCLASS_H
#define PLANNER_SEMANTIC_MSGS_MESSAGE_SEMANTICCLASS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planner_semantic_msgs
{
template <class ContainerAllocator>
struct SemanticClass_
{
  typedef SemanticClass_<ContainerAllocator> Type;

  SemanticClass_()
    : value(0)  {
    }
  SemanticClass_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef int32_t _value_type;
  _value_type value;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(kNone)
  #undef kNone
#endif
#if defined(_WIN32) && defined(kStaircase)
  #undef kStaircase
#endif
#if defined(_WIN32) && defined(kDoor)
  #undef kDoor
#endif

  enum {
    kNone = 0,
    kStaircase = 1,
    kDoor = 2,
  };


  typedef boost::shared_ptr< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> const> ConstPtr;

}; // struct SemanticClass_

typedef ::planner_semantic_msgs::SemanticClass_<std::allocator<void> > SemanticClass;

typedef boost::shared_ptr< ::planner_semantic_msgs::SemanticClass > SemanticClassPtr;
typedef boost::shared_ptr< ::planner_semantic_msgs::SemanticClass const> SemanticClassConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator1> & lhs, const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator1> & lhs, const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_semantic_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9ed3cb55cfdae37517f1354dd57dbaba";
  }

  static const char* value(const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9ed3cb55cfdae375ULL;
  static const uint64_t static_value2 = 0x17f1354dd57dbabaULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_semantic_msgs/SemanticClass";
  }

  static const char* value(const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Semantic classes\n"
"int32 kNone = 0\n"
"int32 kStaircase = 1\n"
"int32 kDoor = 2\n"
"\n"
"# Can only choose one of the above\n"
"int32 value\n"
;
  }

  static const char* value(const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SemanticClass_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_semantic_msgs::SemanticClass_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_semantic_msgs::SemanticClass_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_SEMANTIC_MSGS_MESSAGE_SEMANTICCLASS_H
