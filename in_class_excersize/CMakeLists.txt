cmake_minimum_required(VERSION 3.3)
project(in_class_excersize)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Fraction.cpp Fraction.h)
add_executable(in_class_excersize ${SOURCE_FILES})