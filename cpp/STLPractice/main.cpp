

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <list>

int vectFn()
{
    std::vector<int> myvector;
    myvector.push_back(13368);
    myvector.push_back(18854);
    myvector.push_back(222345);
    for (int i = 0; i < myvector.size(); i++)
    {
        std::cout <<"myvector[" << i << "]=" << myvector[i] << std::endl;
        
    }

    int i = 0;
    for (auto it = myvector.begin(); it != myvector.end(); it++)
    {
        (*it)++; // Increment the value iterator is pointing to
        std::cout <<"myvector1[" << i++ << "]=" << *it << std::endl;
    }

    for (int i = 0; i < myvector.size(); i++)
    {
        std::cout <<"myvector2[" << i << "]=" << myvector[i] << std::endl;
        
    }
    return 0;
}

int listFn()
{
    std::list<int> myCollection;
    myCollection.push_back(13368);
    myCollection.push_back(18854);
    myCollection.push_back(222345);
    
    int i = 0;
    for (auto it = myCollection.begin(); it != myCollection.end(); it++)
    {
        std::cout <<"myCollection[" << i++ << "]=" << *it << std::endl;
    }

    i = 0;
    for (auto it = myCollection.begin(); it != myCollection.end(); it++)
    {
        (*it) += 10; // Increment the value iterator is pointing to
    }

    i = 0;
    for (auto it = myCollection.begin(); it != myCollection.end(); it++)
    {
        std::cout <<"myCollection[" << i++ << "]=" << *it << std::endl;
    }
    return 0;
}

template <typename MyType, typename ReturnType>
ReturnType collectionFn(ReturnType value)
{
    MyType myCollection;
    myCollection.push_back(13368);
    myCollection.push_back(18854);
    myCollection.push_back(222345);
    
    int i = 0;
    for (auto it = myCollection.begin(); it != myCollection.end(); it++)
    {
        std::cout <<"myCollection[" << i++ << "]=" << *it << std::endl;
    }

    i = 0;
    for (auto it = myCollection.begin(); it != myCollection.end(); it++)
    {
        (*it) += 10; // Increment the value iterator is pointing to
    }

    i = 0;
    for (auto it = myCollection.begin(); it != myCollection.end(); it++)
    {
        std::cout <<"myCollection[" << i++ << "]=" << *it << std::endl;
    }
    return value;
}

int main(int argc, char const *argv[])
{
    vectFn();
    listFn();
    auto a = collectionFn< std::list<int>,double >(123.45);
    auto b = collectionFn< std::vector<int>,int >(123.45);
    std::cout <<"myvalue = " << a <<std::endl;
    std::cout <<"myvalue = " << b <<std::endl;
    return 0;
}
