#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <string>

// add user namespace

class MyComplex
{
private:
    double r_;
    double i_;
public:
    MyComplex(double r, double i);
    ~MyComplex();
    void print();
    MyComplex operator+(const MyComplex& rhs);
    MyComplex& operator+=(const MyComplex& rhs);
    friend std::ostream& operator<<(std::ostream& out, const MyComplex& rhs);
};

inline MyComplex::~MyComplex()
{
}
