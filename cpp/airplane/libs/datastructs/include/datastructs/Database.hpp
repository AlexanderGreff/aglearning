#pragma once

#include <deque>
#include <memory>
#include "UserInfo.hpp"

class Database
{
    private:
        Database(); 
        // = default;
        

    public:
        Trip::Collection trips_;
        Ticket::Collection tickets_;
        UserInfo::Collection users_;

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