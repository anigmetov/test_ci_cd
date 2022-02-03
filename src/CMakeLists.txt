add_executable(add_example main.cpp)

target_include_directories(add_example PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

if(MSVC)
    target_compile_options(add_example PRIVATE /W4 /WX)
else()
    target_compile_options(add_example PRIVATE -Wall -Wextra -pedantic)
endif()



