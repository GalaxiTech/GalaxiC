cmake_minimum_required(VERSION 3.28)
project(GalaxiC)

set(CMAKE_CXX_STANDARD 26)

add_executable(GalaxiC src/main.cpp
        src/Tokenize.h
        src/Tokenize.cpp
        src/Tokens.h)
