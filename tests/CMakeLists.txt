add_executable(tests tests_main.cpp tests_add.cpp)

target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

target_link_libraries(tests PRIVATE Catch2::Catch2)

add_test(NAME all COMMAND tests)
