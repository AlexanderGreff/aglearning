#pragma once

#include "Service.hpp"
class Console
{
    public:
        using LoginResult = Service::LoginResult;

    public:
        int mainMenu();

    private:
        int userMenu(const int64_t loginCheck);
        int64_t login();
        

    private: 
        Service service_;
};
