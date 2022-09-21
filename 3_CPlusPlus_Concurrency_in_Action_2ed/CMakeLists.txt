cmake_minimum_required(VERSION 2.8)

project(Concurrent)

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(concurrent ch1/test_boost_thread1.cpp)

target_link_libraries(concurrent pthread boost)
