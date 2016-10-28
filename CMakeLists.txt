cmake_minimum_required(VERSION 3.6)
project(A8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

configure_file(input.dat input.dat COPYONLY)
configure_file(output.dat output.dat COPYONLY)
set(SOURCE_FILES main.cpp Point.cpp Point.h)
add_executable(A8 ${SOURCE_FILES})