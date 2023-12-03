#include <kd_tree_ros/kdTreeRos.h>

namespace kdtree_ros_ns{

kdTreeRos::kdTreeRos(const ros::NodeHandle &nh_): 
  tree(NULL), 
  sub(NULL), 
  node_handle(nh_) 
{
  node_handle.param("resolution", res, res);
  tree = new kdtree_ns::KdTree();
  sub = new message_filters::Subscriber<kd_tree_ros::DetectionStamped>(node_handle, "/tracker_output", 5);
}

bool kdTreeRos::insertData(kd_tree_ros::DetectionStamped det_msg){
  coord_ns::Coord coord;
  coord.t_stamp = det_msg.header.stamp.toSec();
  coord.x = det_msg.point.x;
  coord.y = det_msg.point.y;
  coord.z = det_msg.point.z;
  tree->insertPoint(coord, det_msg.confidence, det_msg.id, det_msg.class_name);
}
}
