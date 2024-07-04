cmake_minimum_required(VERSION 3.28)
project(struct C)

set(CMAKE_C_STANDARD 11)

add_executable(
        struct main.c
        struct_with_char.c
        pointer.c
        struct_init.c
)
