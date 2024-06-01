#include "ros/ros.h"
#include "tutorial_cpp/Person.h" // Replace 'tutorial_package' with your actual package name

void topicCallback(const tutorial_cpp::Person::ConstPtr& msg)
{
  ROS_INFO("Name: '%s %s', Age: %d", msg->first_name.c_str(), msg->last_name.c_str(), msg->age);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber_node");
  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("topic", 10, topicCallback);

  ros::spin();

  return 0;
}
