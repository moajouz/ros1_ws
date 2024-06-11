To create a ros1 workspace:
1- catkin_make in the main folder after creating the src folder
2- add to ~/.bashrc (source /opt/ros/noetic/setup.bash) 
3- add to ~/.bashrc (source ~/workspacename/devel/setup.bash)
4- in the src folder type (catkin_create_pkg package_name rospy||roscpp)
5- after creating a pkg, repeat step 1

Note: when creating a node in python, no need to call catkin_make

