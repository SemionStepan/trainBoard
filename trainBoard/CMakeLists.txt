cmake_minimum_required(VERSION 3.5)

project(trainBoard LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(trainBoard main.cpp trainBoard.h trainBoard.cpp)

install(TARGETS trainBoard
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
