cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp shop.cpp shop.h client.cpp client.h Order.cpp Order.h product.cpp product.h)
