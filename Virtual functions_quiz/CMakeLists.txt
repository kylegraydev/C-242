cmake_minimum_required(VERSION 3.3)
project(Virtual_functions_quiz)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Virtual_functions_quiz ${SOURCE_FILES})