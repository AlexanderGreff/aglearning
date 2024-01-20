#include "Circle.hpp"

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

std::ostream& operator<< (std::ostream& out, const Circle& circle)
{
  out << "Radius: " << circle.get_radius() << std::endl;
  return out;
}