cmake_minimum_required(VERSION 3.1)

project(chapter3)

add_executable(chapter3 main.cpp)

add_library(Namesp namesp.cpp)

target_link_libraries(${PROJECT_NAME} Namesp)