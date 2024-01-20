
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Circle.hpp"

int main(int argc, const char* argv[])
{

    std::cout << " argc=" << argc << "\n";
    for (int i = 0; i < argc; i++)
    {
        std::cout << " argv[" << i << "]=" << argv[i] << "\n";
    }
    std::cout << std::endl;

    Circle c1;
    Circle c2(5);
    Circle c3(c2);
    std::cout << "c1=" << c1 <<"\n";
    std::cout << "c2=" << c2 <<"\n";
    std::cout << "c3=" << c3 <<"\n";
    // std::cout << sizeof(Circle) << "\n";
    
    return 0;
}
