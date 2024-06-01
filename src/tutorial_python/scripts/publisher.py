#!/usr/bin/env python3

import rospy
from tutorial_python.msg import Person

def talker():
	rospy.init_node('talker', anonymous=True) #node name
	pub = rospy.Publisher('Person_info', Person, queue_size=10) #topic initialized of type Person	
	
	rate = rospy.Rate(2)
	
	while not rospy.is_shutdown():
		msg=Person()
		msg.first_name = "Mohamad"
		msg.last_name = "Alajouz"
		msg.age = 21
		pub.publish(msg)
		rate.sleep()

if __name__ == '__main__':
	try:
		talker()
	except rospy.ROSInterruptException:
		pass