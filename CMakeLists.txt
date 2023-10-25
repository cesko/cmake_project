cmake_minimum_required(VERSION 3.14)

project(cmake_project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Dependencies
include_directories(include)

# Build Library
add_library(foo STATIC src/Foo.cpp)

# Build Demo
add_executable(foo_demo src/main.cpp)
target_link_libraries(foo_demo foo)

# Unit Tests
add_subdirectory(test)
