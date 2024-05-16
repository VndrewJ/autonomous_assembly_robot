#! /usr/bin/env python

import time
import rospy
import actionlib
from ndx_manipulation.msg import GripperCommandAction, GripperCommandGoal
from ndx_manipulation.msg import RotaryGripperCommandAction, RotaryGripperCommandGoal


def gripper_client():
    # Create the SimpleActionClient
    client = actionlib.SimpleActionClient('demat_gripper_parallel', GripperCommandAction)

    # Wait until the action server has started up and started listening for goals
    print("Waiting for server...")
    client.wait_for_server()
    print("Server found")

    # Create a goal to send to the action server.
    goal = GripperCommandGoal(position=0.01, max_effort=50, velocity=40)

    # Send the goal to the action server
    client.send_goal(goal)

    # Wait for a short period of time
    time.sleep(2)
    rospy.loginfo("Result: {}".format(client.get_result()))

    # Create a new goal and send it to the action server.
    goal = GripperCommandGoal(position=0.14, max_effort=50, velocity=20)
    client.send_goal(goal)

    # Wait for the server to finish performing the action
    client.wait_for_result()

    # Prints out the result of executing the action
    return client.get_result()  # A FibonacciResult


def rotary_client():
    # Create the SimpleActionClient
    client = actionlib.SimpleActionClient('demat_gripper_rotary', RotaryGripperCommandAction)

    # Wait until the action server has started up and started listening for goals
    print("Waiting for server...")
    client.wait_for_server()
    print("Server found")

    # Close gripper
    goal = RotaryGripperCommandGoal(type='close', offset=0, effort=200)
    client.send_goal(goal)
    client.wait_for_result()
    rospy.loginfo("Result: {}".format(client.get_result()))

    # Rotate gripper counterclockwise
    goal = RotaryGripperCommandGoal(type='', offset=-10000, effort=200)
    client.send_goal(goal)
    time.sleep(2)
    goal = RotaryGripperCommandGoal(type='', offset=1000, effort=200)
    client.send_goal(goal)
    client.wait_for_result()
    rospy.loginfo("Result: {}".format(client.get_result()))

    # Open gripper
    goal = RotaryGripperCommandGoal(type='open', offset=3000, effort=200)
    client.send_goal(goal)
    client.wait_for_result()
    rospy.loginfo("Result: {}".format(client.get_result()))

    # Prints out the result of executing the action
    return client.get_result()  # A FibonacciResult


if __name__ == '__main__':
    try:
        # Initializes a rospy node so that the SimpleActionClient can
        # publish and subscribe over ROS.
        rospy.init_node('gripper_client')
        # result = gripper_client()
        result = rotary_client()
        rospy.loginfo("Result: {}".format(result))
    except rospy.ROSInterruptException:
        rospy.logerr("Program interrupted before completion")