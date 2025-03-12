#pragma once
#include <iostream>
#include "Shape.hpp"

namespace ajg
{


class Rectangle : public Shape
{
public:
    Rectangle();
    // Rectangle() = default;
    Rectangle(const double length, const double width);
    double get_length() const;
    double get_width() const;
    friend std::ostream& operator<< (std::ostream& out, const Rectangle& rectangle);
    virtual double calc_area() const override;
    virtual double calc_perim() const override;

private:
    double length_;
    double width_;
    // char c1[5];
    // int y;
    // short c2;
    // int z;
};

}
