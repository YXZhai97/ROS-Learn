#! /usr/bin/env python 
import rospy
from plumbing_pub_sub.msg import Person 
"""

publisher 
1. import package 
2. init ros node 
3. create publisher object 
4. publish logic

"""
def main():
    rospy.init_node("daMa")

if __name__="__main__":
    main()

