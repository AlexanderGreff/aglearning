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

    public:
        std::pair<Service::LoginResult, UserInfo::Ptr> login(std::string username, std::string password);
        std::string getUserInfo(const int64_t loginCheck);
        std::string getTrips(const int64_t loginCheck);
        std::string deleteTrip(const int64_t loginCheck, std::string tripName);

    private:
        UserInfo::Ptr findUserInfo(const int64_t loginCheck);

};