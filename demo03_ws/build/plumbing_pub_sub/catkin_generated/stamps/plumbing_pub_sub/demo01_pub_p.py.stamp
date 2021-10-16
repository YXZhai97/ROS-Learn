#! /usr/bin/env python
import rospy
from std_msgs.msg import String # message type

"""
import packages 
initialize ros node
create publisher 
logic and data content

"""
if __name__=="__main__":
    #inite ros node 
    rospy.init_node("sanDai")

    # publisher, (topic name, type, que length)
    pub=rospy.Publisher("che",String,queue_size=10)

    # ligic and data content
    msg=String()

    # publish frequence 
    rate=rospy.Rate(1)

    # add a number 
    count=0


    while not rospy.is_shutdown():
        count+=1
        msg.data="hello"+str(count)
        #publish
        pub.publish(msg)
        rospy.loginfo("publish:%s",msg.data)
        rate.sleep()


