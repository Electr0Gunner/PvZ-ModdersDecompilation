cmake_minimum_required(VERSION 3.10.0)
project(LawnProject VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(engine)

add_executable(LawnProject main.cpp)

target_link_libraries(LawnProject PUBLIC PopLib)

