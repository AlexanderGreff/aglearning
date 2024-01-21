#pragma once
#include <iostream>
#include "Shape.hpp"

namespace ajg
{

class Circle : public Shape
{
public:
    Circle();
    // Circle() = default;
    Circle(double radius);
    double get_radius() const;
    friend std::ostream& operator<< (std::ostream& out, const Circle& circle);
    virtual double calc_area() const override;
    virtual double calc_perim() const override;

private:
    double radius_;
    // char c1[5];
    // int y;
    // short c2;
    // int z;
};

}
