#include "hello.hpp"

#include<iostream>

void hello::sayHello() {
    std::cout << "Hello World!" << " From lib-hello version " << SAY_HELLO_VERSION << std
    ::endl;
}