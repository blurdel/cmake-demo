
# can also do: cmake -D BUILD_SHARED_LIBS=TRUE
add_library(
    lib-hello # STATIC/SHARED
    src/lib-hello/hello.hpp
    src/lib-hello/hello.cpp
)

target_include_directories(lib-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

target_compile_definitions(lib-hello PUBLIC SAY_HELLO_VERSION=4)
