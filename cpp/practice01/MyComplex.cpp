#include "MyComplex.hpp"

MyComplex::MyComplex(double r, double i)
: r_(r), i_(i)
{
}



void MyComplex::print()
{
    std::cout << "C(" << this->r_ << " + " << this->i_ << "i)" << std::endl;
    
}

// C1 = C2 + C3
MyComplex MyComplex::operator+(const MyComplex& rhs)
{
    return MyComplex(this->r_ + rhs.r_, this->i_ + rhs.i_);
}

MyComplex& MyComplex::operator+=(const MyComplex& rhs)
{
    this->r_ += rhs.r_;
    this->i_ += rhs.i_;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const MyComplex& rhs)
{
    out << "C(" << rhs.r_ << " + " << rhs.i_ << "i)" << std::ends;
    return out;

}
