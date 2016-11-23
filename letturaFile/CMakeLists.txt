cmake_minimum_required(VERSION 3.6)
project(letturaFile)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es2.c es1.h es2.h es1.c es3.c es4.c es5.c es6.c)
add_executable(letturaFile ${SOURCE_FILES})