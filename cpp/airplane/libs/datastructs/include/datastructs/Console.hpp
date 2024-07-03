#pragma once

#include "Service.hpp"
class Console
{
    private: 
        Service service_;
    public:
        int mainMenu();
        using LoginResult = Service::LoginResult;
        int64_t login();
};
