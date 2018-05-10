cmake_minimum_required(VERSION 3.10)
project(approximation)

set(CMAKE_CXX_STANDARD 14)

add_executable(approximation main.cpp gram.cpp helpers.cpp helpers.h)