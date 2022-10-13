cmake_minimum_required(VERSION 2.8)

project(ch2)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(run_ch2 StringTest.cpp)
# target_link_libraries(run_ch2 
