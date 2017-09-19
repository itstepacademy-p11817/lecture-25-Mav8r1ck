cmake_minimum_required(VERSION 3.8)
project(CW25_lib)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES library.c library.h)
add_library(CW25_lib ${SOURCE_FILES})