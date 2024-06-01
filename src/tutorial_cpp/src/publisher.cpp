#include "ros/ros.h"
#include "tutorial_cpp/Person.h" // Correct package name

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher_node");
  ros::NodeHandle nh;

  ros::Publisher pub = nh.advertise<tutorial_cpp::Person>("topic", 10);
  ros::Rate loop_rate(2); // Publish at 2 Hz

  while (ros::ok())
  {
    tutorial_cpp::Person msg; // Correct message type
    msg.first_name = "Mohamad";
    msg.last_name = "Alajouz";
    msg.age = 22;

    ROS_INFO("Publishing: '%s %s', age: %d", msg.first_name.c_str(), msg.last_name.c_str(), msg.age);
    pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
