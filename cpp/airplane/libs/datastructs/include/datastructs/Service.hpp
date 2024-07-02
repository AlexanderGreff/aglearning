#pragma once

#include <vector>
#include <string>
class Service
{
    public: 
    enum class LoginResult
    {
        Success,
        Failure,
        Exit
    };
    LoginResult login(std::string username, std::string password);

};