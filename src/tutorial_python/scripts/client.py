#!/usr/bin/env python3

import sys
import rospy
from tutorial_python.srv import AddTwoInts

def client(a, b):
    rospy.wait_for_service('add_two_ints')
    try:
        proxy = rospy.ServiceProxy('add_two_ints', AddTwoInts)
        resp1 = proxy(a, b)
        return resp1.sum
    except rospy.ServiceException as e:
        print("Service call failed: %s" % e)
		
def usage():
    return "%s [a b]" % sys.argv[0]
	
if __name__ == "__main__":
    if len(sys.argv) == 3:
        a = int(sys.argv[1])
        b = int(sys.argv[2])
    else:
        print(usage())
        sys.exit(1)

    print("Requesting %s+%s" % (a, b))
    print("%s+%s=%s" % (a, b, client(a, b)))
