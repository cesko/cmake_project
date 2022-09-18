# Unit Test Dependencies
# find_package(Catch2 3 REQUIRED)
# add_subdirectory(${CMAKE_SOURCE_DIR}/lib/Catch2 ${CMAKE_BINARY_DIR}/lib/Catch2)
# include_directories(
#     ../lib/Catch2/src
# )

set(TEST_SRC_FILES test_main.cpp test_foo.cpp)

add_executable(tests test_foo.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain foo)

# enable_testing()
# add_test(Tests tests)
