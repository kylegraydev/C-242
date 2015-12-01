cmake_minimum_required(VERSION 3.3)
project(252_Week_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Account.cpp Account.h CheckingAccount.cpp CheckingAccount.h SavingsAccount.cpp SavingsAccount.h)
add_executable(252_Week_1 ${SOURCE_FILES})