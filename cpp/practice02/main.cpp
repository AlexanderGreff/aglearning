#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Circle.hpp"
#include "Shape.hpp"
#include "Rectangle.hpp"

int main(int argc, const char* argv[])
{

    std::cout << " argc=" << argc << "\n";
    for (int i = 0; i < argc; i++)
    {
        std::cout << " argv[" << i << "]=" << argv[i] << "\n";
    }
    std::cout << std::endl;

    Circle c1;
    Circle c2(5);
    Circle c3(c2);
    std::cout << "c1=" << c1 <<"\n";
    std::cout << "c2=" << c2 <<"\n";
    std::cout << "c3=" << c3 <<"\n";
    // std::cout << sizeof(Circle) << "\n";
    
    std::vector<Shape*> myvec;
    myvec.push_back(new Circle(10));
    myvec.push_back(new Circle(15));
    myvec.push_back(new Circle());
    myvec.push_back(new Rectangle());
    myvec.push_back(new Rectangle(3,5));
    myvec.push_back(new Rectangle(2,7));

    for(auto s : myvec)
    {
        std::cout << "shape=" << s->calc_area() << "\n";
    }

    return 0;
}
