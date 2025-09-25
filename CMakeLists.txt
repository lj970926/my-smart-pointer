cmake_minimum_required(VERSION 3.18)

project(
    my-smart-pointer
    VERSION 0.0.1
    DESCRIPTION "The basic smart pointer impl to learn C++."
)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(src)
add_subdirectory(tests)
