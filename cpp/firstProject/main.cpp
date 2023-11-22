

#include <iostream>
#include <vector>
#include <memory>
#include <string>

#include "FirstProject.hpp"






int main(int argc, char const *argv[])
{
    MyString mystring;
    mystring.Set("alexander");
    std::cout << "mystring=" << mystring.c_string() << "\n"
    << std::endl;
    
    return 0;
}
