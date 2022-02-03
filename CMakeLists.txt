cmake_minimum_required(VERSION 3.5)

project(test_ci_cd LANGUAGES CXX)

#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)

find_package(Catch2)
if(Catch2_FOUND)
    enable_testing()
    add_subdirectory(tests)
endif()



