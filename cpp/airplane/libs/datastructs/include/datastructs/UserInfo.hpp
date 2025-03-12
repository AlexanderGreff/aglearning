#pragma once

#include "UserToken.hpp"
#include "Trip.hpp"
#include <vector>
#include <string>
#include <iostream>
class UserInfo
{
    public: //attributes
        std::string username_;
        std::string password_;
        UserToken::Ptr token_;
        Trip::Collection trips_;
        // std::string name_;
        // int age_;


    
    public: //type definitions
        using Ptr = std::shared_ptr<UserInfo>;
        using Collection =  std::vector<UserInfo::Ptr>;
        
    public: //operators
        bool operator == (const UserInfo usr)
        {
            // std::cout << "this=" << *this;
            // std::cout << "user=" << usr << std::endl;
            return ((usr.username_ == username_) && (usr.password_ == password_));
        }
        friend std::ostream &operator << (std::ostream &os, const UserInfo &usr)
        {
            os << "username='" <<usr.username_ << "' password='" << usr.password_ << "' " << std::endl;
            return os;
        }

    public: //member functions
        void createToken()
        {
            token_ = std::make_shared<UserToken>();
        }


};