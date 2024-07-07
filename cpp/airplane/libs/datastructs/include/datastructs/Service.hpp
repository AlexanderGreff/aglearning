#pragma once

#include "UserInfo.hpp"
#include <vector>
#include <string>
class Service
{
    public: //type definition
        enum class LoginResult
        {
            Success,
            Failure,
            Exit
        };
        using LoginData = std::pair<Service::LoginResult, UserInfo::Ptr>;

    public: //accessors
        std::pair<Service::LoginResult, UserInfo::Ptr> login(std::string username, std::string password);
        std::string getUserInfo(const int64_t loginCheck);
        std::string getTrips(const int64_t loginCheck);
        std::string deleteTrip(const int64_t loginCheck, std::string tripName);
        std::string createTrip(const int64_t loginCheck, std::string startLocation, std::string endLocation, int startDate, int endDate);
        std::string addFlights(const int64_t loginCheck, std::string startLocation, std::string endLocation, int startDate, int endDate);



    private: //member function declarations
        UserInfo::Ptr findUserInfo(const int64_t loginCheck);

};