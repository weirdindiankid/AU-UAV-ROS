/* Auto-generated by genmsg_cpp for file /home/matt/AU-UAV-ROS/AU_UAV_ROS/srv/AvoidCollision.srv */
#ifndef AU_UAV_ROS_SERVICE_AVOIDCOLLISION_H
#define AU_UAV_ROS_SERVICE_AVOIDCOLLISION_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "ros/service_traits.h"




namespace AU_UAV_ROS
{
template <class ContainerAllocator>
struct AvoidCollisionRequest_ : public ros::Message
{
  typedef AvoidCollisionRequest_<ContainerAllocator> Type;

  AvoidCollisionRequest_()
  : newCommand()
  {
  }

  AvoidCollisionRequest_(const ContainerAllocator& _alloc)
  : newCommand(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _newCommand_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  newCommand;


private:
  static const char* __s_getDataType_() { return "AU_UAV_ROS/AvoidCollisionRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "b1a913e97494a4afadf2e84f3984dc4f"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "b1a913e97494a4afadf2e84f3984dc4f"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string newCommand\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, newCommand);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, newCommand);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(newCommand);
    return size;
  }

  typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct AvoidCollisionRequest
typedef  ::AU_UAV_ROS::AvoidCollisionRequest_<std::allocator<void> > AvoidCollisionRequest;

typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionRequest> AvoidCollisionRequestPtr;
typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionRequest const> AvoidCollisionRequestConstPtr;


template <class ContainerAllocator>
struct AvoidCollisionResponse_ : public ros::Message
{
  typedef AvoidCollisionResponse_<ContainerAllocator> Type;

  AvoidCollisionResponse_()
  {
  }

  AvoidCollisionResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "AU_UAV_ROS/AvoidCollisionResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "b1a913e97494a4afadf2e84f3984dc4f"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct AvoidCollisionResponse
typedef  ::AU_UAV_ROS::AvoidCollisionResponse_<std::allocator<void> > AvoidCollisionResponse;

typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionResponse> AvoidCollisionResponsePtr;
typedef boost::shared_ptr< ::AU_UAV_ROS::AvoidCollisionResponse const> AvoidCollisionResponseConstPtr;

struct AvoidCollision
{

typedef AvoidCollisionRequest Request;
typedef AvoidCollisionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct AvoidCollision
} // namespace AU_UAV_ROS

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b1a913e97494a4afadf2e84f3984dc4f";
  }

  static const char* value(const  ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb1a913e97494a4afULL;
  static const uint64_t static_value2 = 0xadf2e84f3984dc4fULL;
};

template<class ContainerAllocator>
struct DataType< ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/AvoidCollisionRequest";
  }

  static const char* value(const  ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string newCommand\n\
\n\
";
  }

  static const char* value(const  ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/AvoidCollisionResponse";
  }

  static const char* value(const  ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.newCommand);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AvoidCollisionRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AvoidCollisionResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<AU_UAV_ROS::AvoidCollision> {
  static const char* value() 
  {
    return "b1a913e97494a4afadf2e84f3984dc4f";
  }

  static const char* value(const AU_UAV_ROS::AvoidCollision&) { return value(); } 
};

template<>
struct DataType<AU_UAV_ROS::AvoidCollision> {
  static const char* value() 
  {
    return "AU_UAV_ROS/AvoidCollision";
  }

  static const char* value(const AU_UAV_ROS::AvoidCollision&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b1a913e97494a4afadf2e84f3984dc4f";
  }

  static const char* value(const AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/AvoidCollision";
  }

  static const char* value(const AU_UAV_ROS::AvoidCollisionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b1a913e97494a4afadf2e84f3984dc4f";
  }

  static const char* value(const AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "AU_UAV_ROS/AvoidCollision";
  }

  static const char* value(const AU_UAV_ROS::AvoidCollisionResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // AU_UAV_ROS_SERVICE_AVOIDCOLLISION_H
