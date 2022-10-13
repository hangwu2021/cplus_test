cmake_minimum_required(VERSION 2.8)

project(ch1)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_library(employee SHARED 
    Employee.cpp
    Database.cpp
)

add_executable(run_ch1_employee EmployeeTest.cpp)
target_link_libraries(run_ch1_employee employee)

add_executable(run_ch1_database DatabaseTest.cpp)
target_link_libraries(run_ch1_database employee)

add_executable(run_ch1_user UserInterface.cpp)
target_link_libraries(run_ch1_user employee)
