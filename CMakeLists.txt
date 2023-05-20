cmake_minimum_required(VERSION 3.25)
project(codebase C)

set(CMAKE_C_STANDARD 17)

include_directories(.)

add_executable(codebase
                main.cpp
                base.h)