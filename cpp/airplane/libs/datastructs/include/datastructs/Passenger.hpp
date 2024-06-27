#pragma once

#include <string>
#include "Trip.hpp"
class Passenger
{
    private:
        std::string name_;
        int age_;
        Trip::collection trips_;


    public:
        Passenger(std::string name, int age) : name_(name), age_(age) {}
        std::string getName();
        int getAge();
        






};