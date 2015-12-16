cmake_minimum_required(VERSION 3.3)
project(BankAccounts)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CheckingAccount.cpp CheckingAccount.h Account.cpp Account.h Savings.cpp Savings.h include.h)
add_executable(BankAccounts ${SOURCE_FILES})