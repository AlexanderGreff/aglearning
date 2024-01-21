#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Circle.hpp"
#include "Shape.hpp"
#include "Rectangle.hpp"

int main(int argc, const char* argv[])
{
    std::vector<ajg::Shape*> myvec;

    std::cout << " argc=" << argc << "\n";
    for (int i = 0; i < argc; i++)
    {
        std::cout << " argv[" << i << "]=" << argv[i] << "\n";
    }
    std::cout << std::endl;

    ajg::Circle c1;
    ajg::Circle c2(5);
    ajg::Circle c3(c2);
    std::cout << "c1=" << c1 <<"\n";
    std::cout << "c2=" << c2 <<"\n";
    std::cout << "c3=" << c3 <<"\n";
    c3.get_radius() = 10;
    double& alexander(c3.get_radius());
    alexander = 15;
    std::cout << "c3=" << c3 <<"\n";
    std::cout << sizeof(ajg::Circle) << "\n";
    
    myvec.push_back(new ajg::Circle(10));
    myvec.push_back(new ajg::Circle(15));
    myvec.push_back(new ajg::Circle());
    myvec.push_back(new ajg::Rectangle());
    myvec.push_back(new ajg::Rectangle(3,5));
    myvec.push_back(new ajg::Rectangle(2,7));

    for(auto s : myvec)
    {
        std::cout << "shape=" << s->calc_area() << "\n";
    }

    return 0;
}
