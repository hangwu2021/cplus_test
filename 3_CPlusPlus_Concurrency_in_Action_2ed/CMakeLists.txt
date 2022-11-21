cmake_minimum_required(VERSION 2.8)

project(Concurrent)

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# Boost
find_package(Boost COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(concurrent ch1/test_boost_thread_singleton.cpp)

target_link_libraries(concurrent pthread -lboost_thread)
