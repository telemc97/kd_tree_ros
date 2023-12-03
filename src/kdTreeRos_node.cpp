#include <ros/ros.h>
#include "kd_tree_ros/kdTreeRos.h"

using namespace kdtree_ros_ns;

int main(int argc, char** argv){
  
  ros::init(argc, argv, "kd_tree_ros");
  const ros::NodeHandle nh;

  kdTreeRos server(nh);

  ros::spin();
  return 0;
}
