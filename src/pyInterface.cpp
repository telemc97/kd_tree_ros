#include "Python.h"
#include <string>
#include <cstring>
#include <std/deque.hpp>
#include "src/kd_tree/include/kdtree.h"
#include "numpy/arrayobject.h"
#include <ros/console.h>
namespace py_interface_ns{

int pyInterface(){
  PyObject* pyModuleName = PyImport_ImportModule("pos_predictator/cppInterface.py");
  if (pyModuleName == nullptr){
    ROS_INFO("Python error: Cannot decode file system path");
    PyErr_Print();
    return 1;
  }
  
  Py_Finalize();
  return 0;
}
}