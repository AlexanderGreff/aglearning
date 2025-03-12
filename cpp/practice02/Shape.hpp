#pragma once
#include <ostream>

namespace ajg
{


class Shape
{
    public:
        // friend std::ostream& operator<< (std::ostream& out, const Shape& shape);
        virtual double calc_area() const;
        virtual double calc_perim() const;
        // virtual double calc_area() const = 0;
        // virtual double calc_perim() const = 0;

    private:

    
};

}