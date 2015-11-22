cmake_minimum_required(VERSION 3.3)
project(Quiz_3_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Cliff.cpp Cliff.h Dodo.cpp Dodo.h)
add_executable(Quiz_3_3 ${SOURCE_FILES})