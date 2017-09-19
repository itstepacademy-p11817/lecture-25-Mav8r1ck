cmake_minimum_required(VERSION 3.8)
project(CW25 C)

set(CMAKE_C_STANDARD 99)

add_executable(CW25 main.c)

add_library(CW25_lib STATIC IMPORTED)
include_directories(${CMAKE_SOURCE_DIR}/../CW25_lib/)
set_target_properties(CW25_lib PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../CW25_lib/cmake-build-debug/libCW25_lib.a)
target_link_libraries(CW25 CW25_lib)