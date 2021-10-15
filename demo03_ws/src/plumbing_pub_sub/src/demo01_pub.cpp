#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
int main(int argc, char *argv[])
{
    //init ros node 
    ros::init(argc,argv,"erGouZi");

    //create handle
    ros::NodeHandle nh;
    ros::Publisher pub=nh.advertise<std_msgs::String>("fang",10);
    std_msgs::String msg;

    //publish message in 10 hz, message with number 
    ros::Rate rate(1);
    int count=0;

    while (ros::ok())
    {
        count++;
        std::stringstream ss;
        ss << "hello --->"<< count;
        msg.data=ss.str();
        //publish message 
        pub.publish(msg);
        //add log
        ROS_INFO("the publish message is:%s",ss.str().c_str());
        rate.sleep();
    }
    return 0;


}