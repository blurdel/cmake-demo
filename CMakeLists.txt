cmake_minimum_required(VERSION 3.22)

project(MyProject VERSION 1.0.0)

add_executable(cmake-good main.cpp)

# can also do: cmake -D BUILD_SHARED_LIBS=TRUE
add_library(
    say-hello # STATIC/SHARED
    hello.hpp
    hello.cpp
)

target_link_libraries(cmake-good PRIVATE say-hello)
