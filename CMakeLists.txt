cmake_minimum_required(VERSION 3.9)
project(segfault C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0 -g -std=gnu99")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3 -s")

add_executable(segfault src/main.c)