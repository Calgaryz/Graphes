cmake_minimum_required(VERSION 3.12)
project(Graphes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Graphes main.cpp Graphe.h Graphe.cpp GrapheChar.cpp GrapheString.cpp)