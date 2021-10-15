#include "ros/ros.h"
#include "std_msgs/String.h"

void doMsg(const std_msgs::String::ConstPtr &msg){
    ROS_INFO("cuiHua has subscribed the message:%s",msg->data.c_str());

}

int main(int argc, char *argv[])
{

    //init ros node 
    ros::init(argc,argv,"cuiHua");
    ros::NodeHandle nh;

    // keep up the topic fang with the publisher 
    ros::Subscriber sub=nh.subscribe("fang",10,doMsg);

    ros::spin();




}