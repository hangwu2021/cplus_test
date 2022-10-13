cmake_minimum_required(VERSION 2.8)

project(ch3)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(run_ch3 SortTest.cpp)
