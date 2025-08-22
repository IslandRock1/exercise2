cmake_minimum_required(VERSION 3.15)
project(exercise1)

set(CMAKE_CXX_STANDARD 20)

set(SHARED_SOURCES
        src/main.cpp
)

add_executable(MAIN src/main.cpp ${SHARED_SOURCES})
target_include_directories(MAIN PRIVATE include/libname)