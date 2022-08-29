#include "main.hpp"
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(pyexample) {
  using namespace boost::python;

  def("hello_world", hello_world, "Print hello");
}
