#include "Circle.hpp"
#include <math.h>

Circle::Circle()
{
    radius_ = 0;
}

Circle::Circle(double radius)
{
    radius_ = radius;
}


double Circle::get_radius() const
{
    return radius_;
}

double Circle::calc_area() const
{
    return radius_ * radius_;
}

double Circle::calc_perim() const
{
    return 2*M_PI*radius_;
}

std::ostream &operator<<(std::ostream &out, const Circle &circle)
{
    out << "Circle:{";
    out << "Radius=" << circle.get_radius() << ", ";
    out << "Area=" << circle.calc_area() << ", ";
    out << "sizeof=" << sizeof(Circle) << ", ";
    out << "Perimeter=" << circle.calc_perim() << " ";
    out << "}";   
    return out;
}