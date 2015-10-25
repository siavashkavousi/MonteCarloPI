cmake_minimum_required(VERSION 3.3)
project(MonteCarloPI)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp point.cpp point.h)
add_executable(MonteCarloPI ${SOURCE_FILES})