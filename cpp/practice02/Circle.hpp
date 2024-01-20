// #pragma once
#include <iostream>
class Circle
{
public:
    Circle();
    // Circle() = default;
    Circle(double radius);
    double get_radius() const;
    friend std::ostream& operator<< (std::ostream& out, const Circle& circle);
    double calc_area() const;
    double calc_perim() const;

private:
    double radius_;
    // char c1[5];
    // int y;
    // short c2;
    // int z;
};

