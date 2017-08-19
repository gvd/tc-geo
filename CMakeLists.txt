cmake_minimum_required(VERSION 3.8)
project(tc_geo)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(tc-shared)
include_directories(.)

set(SOURCE_FILES print_n.cpp print_n.h)
add_library(tc_geo SHARED ${SOURCE_FILES})
target_link_libraries(tc_geo tc_shared)