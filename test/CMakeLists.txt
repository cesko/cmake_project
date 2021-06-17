# Unit Test Dependencies
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
add_definitions(-DBOOST_TEST_DYN_LINK)

set(TEST_SRC_FILES test_main.cpp test_foo.cpp)

add_executable(foo_tests ${TEST_SRC_FILES})
target_link_libraries(foo_tests foo ${Boost_LIBRARIES})

enable_testing()
add_test(FooTest foo_tests)



