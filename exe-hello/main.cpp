#include <iostream>

#include "lib-hello/hello.hpp"

int main()
{
    std::cout << "CMake Demo" << std::endl;

    hello::sayHello();

    std::cout << "Done." << std::endl;    
}
