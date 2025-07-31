cmake_minimum_required(VERSION 3.10.0)

project(PopProject VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BUILD_EXAMPLES OFF)

set(TODLIB_ADDITIONAL_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/lawnproject)


include(FetchContent)

FetchContent_Declare(
    PopLib
    GIT_REPOSITORY https://github.com/teampopwork/PopLib
    GIT_TAG dev
)

FetchContent_MakeAvailable(PopLib)

add_subdirectory(external)
add_subdirectory(lawnproject)