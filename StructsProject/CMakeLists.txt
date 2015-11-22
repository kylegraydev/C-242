cmake_minimum_required(VERSION 3.3)
project(StructsProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp awesome.h)
add_executable(StructsProject ${SOURCE_FILES})