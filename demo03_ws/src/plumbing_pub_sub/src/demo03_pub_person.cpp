#include "ros/ros.h"
#include 

int main(int argc, char *argv[])
{
    ros::init(arg,argv,"banZhuRen")

    ros::NodeHandle nh;

    ros::Publisher pub=nh.advertise<plumbing_pub_sub::Person>("")


    return 0;
}