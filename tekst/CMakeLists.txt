cmake_minimum_required(VERSION 3.28)
project(tekst)

set(CMAKE_CXX_STANDARD 17)

add_executable(tekst main.cpp
        text.cpp
        text.h)
