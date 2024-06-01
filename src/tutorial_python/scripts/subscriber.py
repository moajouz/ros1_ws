#!/usr/bin/env python3

import rospy
from tutorial_python.msg import Person

def callback(data):
	rospy.loginfo("\nName: %s %s \nAge: %d", data.first_name, data.last_name, data.age)
	
def listener():

	rospy.init_node('listener')
	
	sub = rospy.Subscriber('Person_info', Person, callback=callback)
	
	rospy.spin()
	
if __name__ == '__main__':

	listener()