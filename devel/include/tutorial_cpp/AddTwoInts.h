// Generated by gencpp from file tutorial_cpp/AddTwoInts.msg
// DO NOT EDIT!


#ifndef TUTORIAL_CPP_MESSAGE_ADDTWOINTS_H
#define TUTORIAL_CPP_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <tutorial_cpp/AddTwoIntsRequest.h>
#include <tutorial_cpp/AddTwoIntsResponse.h>


namespace tutorial_cpp
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace tutorial_cpp


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tutorial_cpp::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::tutorial_cpp::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::tutorial_cpp::AddTwoInts > {
  static const char* value()
  {
    return "tutorial_cpp/AddTwoInts";
  }

  static const char* value(const ::tutorial_cpp::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::tutorial_cpp::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::tutorial_cpp::AddTwoInts >
template<>
struct MD5Sum< ::tutorial_cpp::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tutorial_cpp::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_cpp::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tutorial_cpp::AddTwoIntsRequest> should match
// service_traits::DataType< ::tutorial_cpp::AddTwoInts >
template<>
struct DataType< ::tutorial_cpp::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::tutorial_cpp::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_cpp::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tutorial_cpp::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::tutorial_cpp::AddTwoInts >
template<>
struct MD5Sum< ::tutorial_cpp::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tutorial_cpp::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_cpp::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tutorial_cpp::AddTwoIntsResponse> should match
// service_traits::DataType< ::tutorial_cpp::AddTwoInts >
template<>
struct DataType< ::tutorial_cpp::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::tutorial_cpp::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_cpp::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TUTORIAL_CPP_MESSAGE_ADDTWOINTS_H
