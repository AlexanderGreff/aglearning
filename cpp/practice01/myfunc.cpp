#include "myfunc.hpp"
#include "MyComplex.hpp"


// extern "C"
int foo(int a,char b)
{
    return a+10;
}

// extern "C"
int foo(int a)
{
    MyComplex comp1(5,6.1);
    return a+15;
}

int bar(const int& a)
{
    int b(a);
    b+10;
    return b;
}