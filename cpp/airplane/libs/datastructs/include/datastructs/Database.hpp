#pragma once

#include <deque>
#include <memory>
#include "Passenger.hpp"
#include "UserInfo.hpp"

class Database
{
    private:
        Database(); 
        // = default;
        

    public:
        std::deque <std::shared_ptr<Passenger> > passengers_;
        std::deque <std::shared_ptr<Trip> > trips_;
        std::deque<std::shared_ptr<Ticket>> tickets_;
        std::vector<UserInfo> users_;

    public:
        Database(const Database&) = delete;

//pointer style singleton generator
        // static Database* instance()
        // {
        //     static Database* instance = new Database;
        //     return instance;
        // }

//reference style singleton generator
        static Database* instance()
        {
            static Database instance;
            return &instance;
        }
};