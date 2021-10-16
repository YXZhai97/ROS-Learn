#!/usr/bin/env python3
import rospy
from std_msgs.msg import String

"""
import package 
init ros node
subscriber object
process data 
spin()

"""
def doMsg(msg):

    rospy.loginfo("my subscribe data is:%s",msg.data)


if __name__=="__main__":
    rospy.init_node("huaHua")
    # topic name, type, process message, queue size
    sub=rospy.Subscriber("che",String,doMsg,queue_size=10)


    rospy.spin()


