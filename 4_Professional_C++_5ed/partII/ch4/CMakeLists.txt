cmake_minimum_required(VERSION 2.8)

project(ch4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_BUILD_TYPE "Debug")


add_executable(run_partII test.cpp)