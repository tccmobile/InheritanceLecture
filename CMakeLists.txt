cmake_minimum_required(VERSION 3.15)
project(InheritanceLecture)

set(CMAKE_CXX_STANDARD 14)

add_executable(InheritanceLecture main.cpp Person.cpp Person.h Student.cpp Student.h)