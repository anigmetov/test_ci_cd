cmake_minimum_required(VERSION 3.5)

project(test_ci_cd LANGUAGES CXX)

#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)

add_subdirectory(extern/Catch2)

enable_testing()
add_subdirectory(tests)
