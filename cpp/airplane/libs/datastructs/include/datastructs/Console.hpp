#pragma once

#include "Service.hpp"
class Console
{
    public: //type definitions
        using LoginResult = Service::LoginResult;

    public: //member functions
        int mainMenu();

    private: //member functions
        int userMenu(const int64_t loginCheck);
        int64_t login();
        

    private: //attributes
        Service service_;
};
