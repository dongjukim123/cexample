cmake_minimum_required(VERSION 3.1)

project(chapter10)

add_executable(chapter10 main.cpp)

add_library(Namesp2 Namesp2.cpp)

target_link_libraries(${PROJECT_NAME} Namesp2)