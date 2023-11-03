#include<iostream>

#include "hello.hpp"

int main()
{
    std::cout << "CMake Demo" << std::endl;

    hello::sayHello();

    std::cout << "Done." << std::endl;    
}