#pragma once

#include "UserInfo.hpp"
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
    std::pair<Service::LoginResult, UserInfo::Ptr> login(std::string username, std::string password);
    using LoginData = std::pair<Service::LoginResult, UserInfo::Ptr>;

};