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

bool kdTreeRos::insertData(DetectionStamped det){

}


}
