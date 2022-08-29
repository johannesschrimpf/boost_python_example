cmake_minimum_required(VERSION 3.18)
project(boost_python_exmaple VERSION 1.0.0)

find_package(Python3 COMPONENTS Interpreter Development)
find_package(Boost COMPONENTS python${Python3_VERSION_MAJOR}${Python3_VERSION_MINOR})

add_library(example SHARED main.cpp)

Python3_add_library(pyexample python_bindings.cpp)

target_include_directories(pyexample PUBLIC ${Boost_INCLUDE_DIRS})

target_link_libraries(pyexample PUBLIC ${Boost_LIBRARIES} example)
install(TARGETS pyexample DESTINATION ${Python3_SITELIB} OPTIONAL)