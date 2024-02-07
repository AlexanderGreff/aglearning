#include <iostream>

int grow1(int x, int y)
{
    x = x + y;
    return x;
}

int grow2(int* x, int* y)
{
    *x = *x + *y;
    return *x;
}

int grow3(int& x, int& y)
{
    x = x + y;
    return x;
}
