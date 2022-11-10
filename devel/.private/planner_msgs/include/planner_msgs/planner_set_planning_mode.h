// Generated by gencpp from file planner_msgs/planner_set_planning_mode.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_PLANNING_MODE_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_PLANNING_MODE_H

#include <ros/service_traits.h>


#include <planner_msgs/planner_set_planning_modeRequest.h>
#include <planner_msgs/planner_set_planning_modeResponse.h>


namespace planner_msgs
{

struct planner_set_planning_mode
{

typedef planner_set_planning_modeRequest Request;
typedef planner_set_planning_modeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct planner_set_planning_mode
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::planner_set_planning_mode > {
  static const char* value()
  {
    return "f5c508faaff06b83ff7d994be5342caa";
  }

  static const char* value(const ::planner_msgs::planner_set_planning_mode&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::planner_set_planning_mode > {
  static const char* value()
  {
    return "planner_msgs/planner_set_planning_mode";
  }

  static const char* value(const ::planner_msgs::planner_set_planning_mode&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::planner_set_planning_modeRequest> should match
// service_traits::MD5Sum< ::planner_msgs::planner_set_planning_mode >
template<>
struct MD5Sum< ::planner_msgs::planner_set_planning_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_set_planning_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_planning_modeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_set_planning_modeRequest> should match
// service_traits::DataType< ::planner_msgs::planner_set_planning_mode >
template<>
struct DataType< ::planner_msgs::planner_set_planning_modeRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_set_planning_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_planning_modeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::planner_set_planning_modeResponse> should match
// service_traits::MD5Sum< ::planner_msgs::planner_set_planning_mode >
template<>
struct MD5Sum< ::planner_msgs::planner_set_planning_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_set_planning_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_planning_modeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_set_planning_modeResponse> should match
// service_traits::DataType< ::planner_msgs::planner_set_planning_mode >
template<>
struct DataType< ::planner_msgs::planner_set_planning_modeResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_set_planning_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_planning_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_PLANNING_MODE_H
