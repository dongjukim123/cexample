cmake_minimum_required(VERSION 3.1)

project(chapter1)

add_executable(chapter1 main.cpp)

add_library(Namesp2 Namesp2.cpp)

target_link_libraries(${PROJECT_NAME} Namesp2)