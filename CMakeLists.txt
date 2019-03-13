cmake_minimum_required(VERSION 3.13)
project(Extra3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Extra3 main.cpp Nodo.cpp Nodo.h NodoGC.cpp NodoGC.h GarbageCollector.cpp GarbageCollector.h Lista.cpp Lista.h)