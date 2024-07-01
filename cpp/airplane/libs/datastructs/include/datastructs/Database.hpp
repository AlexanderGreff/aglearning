#pragma once

#include <deque>
#include <memory>
#include "Passenger.hpp"

class DataBase
{
    private:
        DataBase(); 
        // = default;
        

    public:
        std::deque <std::shared_ptr<Passenger> > passengers_;
        std::deque <std::shared_ptr<Trip> > trips_;
        std::deque <std::shared_ptr<Ticket> > tickets_;
    
    public:
        DataBase(const DataBase&) = delete;

//pointer style singleton generator
        // static DataBase* instance()
        // {
        //     static DataBase* instance = new DataBase;
        //     return instance;
        // }

//reference style singleton generator
        static DataBase* instance()
        {
            static DataBase instance;
            return &instance;
        }
};

