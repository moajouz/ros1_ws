#!/usr/bin/env python3

from tutorial_python.srv import AddTwoInts
import rospy

def handle_request(req):
    print("Returning [%s + %s = %s]"%(req.a,req.b,(req.a+req.b)))
    return sum(req.a,req.b)

def server():
    rospy.init_node('add_server')  # server node
    rospy.Service('result', AddTwoInts, handle_request)  # service name, service, request
    print("Ready to add two ints")
    rospy.spin()  # Remove or comment out this line if you want the code to proceed beyond this point


if __name__ == "__main__":
    server()
