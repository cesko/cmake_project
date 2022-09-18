cmake_minimum_required(VERSION 3.8)

project(cmake_project)

set(CMAKE_CXX_STANDARD 11)

# Dependencies
include_directories(include)

# Build Library
add_library(foo STATIC src/Foo.cpp)

# Build Demo
add_executable(foo_demo src/main.cpp)
target_link_libraries(foo_demo foo)

# Unit Tests
add_subdirectory(lib/Catch2)
include_directories(lib/Catch2/src)
add_subdirectory(test)
