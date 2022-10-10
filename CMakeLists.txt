cmake_minimum_required(VERSION 3.0)
project(viegner C)

set(CMAKE_C_STANDARD 99)

add_executable(viegner main.c Trio.h Trio.c)
