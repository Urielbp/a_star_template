cmake_minimum_required(VERSION 3.14)
project(a_star_template)

set(CMAKE_CXX_STANDARD 14)

add_executable(a_star_template main.cpp AStar.cpp AStar.h State.cpp State.h HeapElement.cpp HeapElement.h)