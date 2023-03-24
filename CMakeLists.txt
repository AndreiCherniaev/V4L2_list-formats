cmake_minimum_required(VERSION 3.5)

project(V4L2_list-formats LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(V4L2_list-formats main.cpp)

install(TARGETS V4L2_list-formats
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
