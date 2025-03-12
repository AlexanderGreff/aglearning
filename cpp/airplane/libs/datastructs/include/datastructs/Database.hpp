#pragma once

#include <deque>
#include <memory>
#include "UserInfo.hpp"

class Database
{
    private: //constructors
        Database(); 
        // = default;
        

    public: //collections
        Trip::Collection allTrips_;
        Ticket::Collection allTickets_;
        UserInfo::Collection users_;
        Flight::Collection allFlights_;


    public: //singleton property
        Database(const Database&) = delete;

    public: //reference style singleton generator
        static Database* instance()
        {
            static Database instance;
            return &instance;
        }

// ------------------------------------------------------------------------------

//pointer style singleton generator
        // static Database* instance()
        // {
        //     static Database* instance = new Database;
        //     return instance;
        // }

};