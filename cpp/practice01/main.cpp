// #include <iostream>
// #include <vector>
// #include <memory>
// #include <string>
#include <stdio.h>
#include "myfunc.hpp"
#include "MyComplex.hpp"



int main(int argc, char const *argv[])
{
    printf("hello world i=%d\n",foo(5,'a'));
    MyComplex c0(0,0);
    c0.print();
    MyComplex c1(1,0);
    c1.print();
    MyComplex c1_2(1,2);
    c1_2.print();
    MyComplex c0_1(0,1);
    c0_1.print();
    // c1_2 + c1;
    int b(15);
    std::cout << "b=" << b << std::endl;
    b += 5;
    std::cout << "b=" << b << std::endl;
    int& c(b);
    c += 10;
    std::cout << "b=" << b << std::endl;
    int* d = &b;
    *d += 20;
    std::cout << "b=" << b << std::endl;
    bar(b);
    std::cout << "b=" << b << std::endl;
    std::cout << "C=" << c1_2 << std::endl;
    std::cout << "C=" << c1_2+c1_2 << std::endl;
    MyComplex r = c1_2+c1_2;
    std::cout << "r=" << r << std::endl;
    MyComplex r1(c1_2+c1_2);
    std::cout << "r1=" << r1 << std::endl;
    r = r1 + r;
    return 0;
}
