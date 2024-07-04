cmake_minimum_required(VERSION 3.28)
project(string C)

set(CMAKE_C_STANDARD 11)

add_executable(null
        string.c
        string_pointer.c)
