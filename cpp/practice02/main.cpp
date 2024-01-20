

#include <iostream>
#include <vector>
#include <memory>
#include <string>

int main(int argc, const char* argv[])
{

    std::cout << " argc=" << argc << "\n";
    for (int i = 0; i < argc; i++)
    {
        std::cout << " argv[" << i << "]=" << argv[i] << "\n";
    }
    std::cout << std::endl;
    
    return 0;
}
