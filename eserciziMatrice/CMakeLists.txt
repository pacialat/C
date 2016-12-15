cmake_minimum_required(VERSION 3.6)
project(eserciziMatrice)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp creazioneMatrice.cpp es1.cpp es2.cpp es3.cpp es1P2.cpp es2P2.cpp es3P2.cpp es4P2.cpp es1P3.cpp es2P3.cpp)
add_executable(eserciziMatrice ${SOURCE_FILES})