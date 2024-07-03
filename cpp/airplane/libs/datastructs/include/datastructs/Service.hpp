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
    using LoginData = std::pair<Service::LoginResult, UserInfo::Ptr>;

    std::pair<Service::LoginResult, UserInfo::Ptr> login(std::string username, std::string password);
    UserInfo::Ptr findUserInfo(const int64_t loginCheck);

};