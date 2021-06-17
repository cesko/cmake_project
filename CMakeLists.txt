cmake_minimum_required(VERSION 3.5)

project(cmake_project)

include_directories(include)

add_library(foo STATIC src/Foo.cpp)

add_executable(foo_demo src/main.cpp)
target_link_libraries(foo_demo foo)