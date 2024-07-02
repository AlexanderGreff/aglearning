#pragma once


#include "Service.hpp"
#include "Database.hpp"
class Console
{
    private: 
        Service service_;
    public:
        int mainMenu();
        using LoginResult = Service::LoginResult;
        Database* login();
};
