#include "Rectangle.hpp"

namespace ajg
{

Rectangle::Rectangle()
{
    length_ = 0;
    width_ = 0;
}

Rectangle::Rectangle(const double length, const double width)
{
    length_ = length;
    width_ = width;
}


double Rectangle::get_width() const
{
    return width_;
}

double Rectangle::get_length() const
{
    return length_;
}
double Rectangle::calc_area() const
{
    return length_ * width_ + Shape::calc_area();
}

double Rectangle::calc_perim() const
{
    return 2* length_ + 2* width_;
}

std::ostream &operator<<(std::ostream &out, const Rectangle &rectangle)
{
    out << "Rectangle:{";
    out << "Length=" << rectangle.get_length() << ", ";
    out << "Width=" << rectangle.get_width() << ", ";
    // out << "Area=" << rectangle.calc_area() << ", ";
    out << "sizeof=" << sizeof(Rectangle) << ", ";
    out << "Perimeter=" << rectangle.calc_perim() << " ";
    out << "}";   
    return out;
}

}
