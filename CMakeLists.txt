cmake_minimum_required(VERSION 3.10.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(PopProject VERSION 0.1.0 LANGUAGES C CXX)

set(BUILD_EXAMPLES OFF)

set(TODLIB_ADDITIONAL_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/lawnproject)

add_subdirectory(engine)
add_subdirectory(external)
add_subdirectory(lawnproject)