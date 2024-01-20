// #pragma once
#include <iostream>
class Circle
{
public:
    Circle();
    Circle(double radius);
    double get_radius() const;
    friend std::ostream& operator<< (std::ostream& out, const Circle& circle);




private:
    double radius_;
    // char c1[5];
    // int y;
    // short c2;
    // int z;
};

