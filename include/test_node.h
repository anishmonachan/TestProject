#ifndef TEST_NODE_H
#define TEST_NODE_H

#include <ros/ros.h>
#include<string.h>
#include<geometry_msgs/Pose2D.h>
class TestNode {
public:
    TestNode(); //declaration
    ~TestNode() {}
private:
  void testCallback(const geometry_msgs::Pose2D::ConstPtr& pose){}
  void timerCallback(const ros::TimerEvent& e){}
  ros::NodeHandle nh;
  ros::Subscriber sub;
  ros::Publisher pub;
  ros::Timer timer;
  std::string name;
  int value;

};



#endif // TEST_NODE_H
