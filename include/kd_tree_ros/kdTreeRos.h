#include <ros/ros.h>
#include "kd_tree_ros/DetectionStamped.h"
#include <message_filters/subscriber.h>
#include "src/kd_tree/include/kdtree.h"

namespace kdtree_ros_ns{

class kdTreeRos{

  public:
  kdTreeRos(const ros::NodeHandle &nh_ = ros::NodeHandle());
  virtual ~kdTreeRos();

  private:

  bool insertData(kd_tree_ros::DetectionStamped det);

  ros::NodeHandle node_handle;
  message_filters::Subscriber<kd_tree_ros::DetectionStamped>* sub;

  kdtree_ns::KdTree* tree;

  float res;
  bool latched_topics;

};
}