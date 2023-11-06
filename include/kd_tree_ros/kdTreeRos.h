#include <ros/ros.h>
#include <kd_tree_ros/DetectionStamped.h>
#include <message_filters/subscriber.h>

namespace kd_tree_ros_ns{

class kdTreeRos{

  public:
  kdTreeRos(const ros::NodeHandle &nh_ = ros::NodeHandle());
  virtual ~kdTreeRos();

  private:

  bool insertData(DetectionStamped det);

  ros::NodeHandle node_handle;
  message_filters::Subscriber<DetectionStamped>* sub;

};
}