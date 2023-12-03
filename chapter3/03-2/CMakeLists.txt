cmake_minimum_required(VERSION 3.1)

project(chapter03_2)

add_executable(chapter03_2 main.cpp)

add_library(calculator 03-2.cpp)

target_link_libraries(chapter03_2 calculator)