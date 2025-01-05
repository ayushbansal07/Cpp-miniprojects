cmake_minimum_required(VERSION 3.10)
project(CompileTimeList)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

include_directories(include/)

add_executable(simplelisttest src/simplelisttest.cpp)
add_executable(booleanlisttest src/booleanlisttest.cpp)