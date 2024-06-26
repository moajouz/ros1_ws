// Generated by gencpp from file tutorial_python/AddTwoInts.msg
// DO NOT EDIT!


#ifndef TUTORIAL_PYTHON_MESSAGE_ADDTWOINTS_H
#define TUTORIAL_PYTHON_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <tutorial_python/AddTwoIntsRequest.h>
#include <tutorial_python/AddTwoIntsResponse.h>


namespace tutorial_python
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
} // namespace tutorial_python


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tutorial_python::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::tutorial_python::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::tutorial_python::AddTwoInts > {
  static const char* value()
  {
    return "tutorial_python/AddTwoInts";
  }

  static const char* value(const ::tutorial_python::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::tutorial_python::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::tutorial_python::AddTwoInts >
template<>
struct MD5Sum< ::tutorial_python::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tutorial_python::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_python::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tutorial_python::AddTwoIntsRequest> should match
// service_traits::DataType< ::tutorial_python::AddTwoInts >
template<>
struct DataType< ::tutorial_python::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::tutorial_python::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_python::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tutorial_python::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::tutorial_python::AddTwoInts >
template<>
struct MD5Sum< ::tutorial_python::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tutorial_python::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_python::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tutorial_python::AddTwoIntsResponse> should match
// service_traits::DataType< ::tutorial_python::AddTwoInts >
template<>
struct DataType< ::tutorial_python::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::tutorial_python::AddTwoInts >::value();
  }
  static const char* value(const ::tutorial_python::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TUTORIAL_PYTHON_MESSAGE_ADDTWOINTS_H
