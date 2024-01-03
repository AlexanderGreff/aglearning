// #include <iostream>
// #include <vector>
// #include <memory>
// #include <string>
#include <stdio.h>
#include "myfunc.hpp"
#include "MyComplex.hpp"



int main(int argc, char const *argv[])
{
    printf("hello world main1 i=%d\n",foo(5,'a'));
    MyComplex c0(0,0);
    c0.print();
    MyComplex c1(1,0);
    c1.print();
    MyComplex c1_2(1,2);
    c1_2.print();
    return 0;
}
