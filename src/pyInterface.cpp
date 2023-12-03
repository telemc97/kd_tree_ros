#include "Python.h"
#include <std/deque.hpp>
#include "src/kd_tree/include/kdtree.h"
#include "numpy/arrayobject.h"

int pyInterface(){
  char* modulePath = 'pos_predictator/cppinterface.py';
  PyObject* pyModuleName = PyUnicode_DecodeFSDefault(modulePath.());
  

  return 0;
}