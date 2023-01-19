cmake_minimum_required(VERSION 3.23)
project(prg1_labo_optionel)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(prg1_labo_optionel main.cpp temps.h temps_impl.h)
