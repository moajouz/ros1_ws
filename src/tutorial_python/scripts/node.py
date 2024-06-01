#!/usr/bin/env python3
import rospy

#Single Run
# if __name__=='__main__':
#     rospy.init_node("test_node")
#     rospy.loginfo("Hello World")
#     rospy.logwarn("Warning")
#     rospy.logerr("Error")

#     rospy.sleep(1) #in seconds

#     rospy.loginfo("End of program")

#Multiple Run
if __name__=='__main__':
    rospy.init_node("test_node")
    rospy.loginfo("Node has been started")

    rate = rospy.Rate(10)

    while not rospy.is_shutdown():
        rospy.loginfo("Hello")
        rate.sleep() #keep it running at 10HZ
