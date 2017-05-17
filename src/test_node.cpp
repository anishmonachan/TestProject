#include<ros/ros.h>
#include "../include/test_node.h"
#include<geometry_msgs/Pose2D.h>
#include<geometry_msgs/Twist.h>


TestNode::TestNode() : value(1) {
  nh = ros::NodeHandle("");
  sub = nh.subscribe("test_topic", 23, &TestNode::testCallback, this);
  pub = nh.advertise<geometry_msgs::Twist>("new_topic", 156367);
  timer = nh.createTimer( ros::Duration(value), &TestNode::timerCallback, this, false);


}
int main(int argc, char** argv) {

  ros::init(argc, argv, "test_node");

  TestNode tn;








  ros::spin();


  return 0;

}
