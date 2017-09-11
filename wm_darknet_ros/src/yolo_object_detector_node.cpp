//
// Created by mst-pierre on 10/09/17.
//

#include <ros/ros.h>
#include "wm_darknet_ros/YoloObjectDetector.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "wm_darknet_ros");
    ros::NodeHandle nodeHandle("~");
    darknet_ros::YoloObjectDetector yoloObjectDetector(nodeHandle);

    ros::spin();
    return 0;
}