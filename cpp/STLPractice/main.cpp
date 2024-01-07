

#include <iostream>
#include <vector>
#include <memory>
#include <string>

int main(int argc, char const *argv[])
{
    std::vector<int> myvector;
    myvector.push_back(13368);
    myvector.push_back(18854);
    myvector.push_back(222345);
    for (int i = 0; i < myvector.size(); i++)
    {
        std::cout <<"myvector[" << i << "]=" << myvector[i] << std::endl;
        
    }
    
    return 0;
}
