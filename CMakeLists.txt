cmake_minimum_required(VERSION 3.10)

PROJECT(c++_basic)


set(CHAPTER1 TRUE)
set(CHAPTER2 TRUE)
set(CHAPTER3 TRUE)
set(CHAPTER4 TRUE)

if(${CHAPTER1})
    add_subdirectory(chapter1)
endif ()

if(${CHAPTER2})
    add_subdirectory(chapter2)
endif ()

if(${CHAPTER3})
    add_subdirectory(chapter3)
endif ()

if(${CHAPTER4})
    add_subdirectory(chapter4)
endif ()

