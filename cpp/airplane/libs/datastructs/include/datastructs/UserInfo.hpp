#pragma once

#include <vector>
#include "UserToken.hpp"
#include <string>
class UserInfo
{
    public:
        std::string username_;
        std::string password_;
        UserToken::Ptr token_;
    
    public:
        using Ptr = std::shared_ptr<UserInfo>;
        using Collection =  std::vector<UserInfo::Ptr>;
        

        bool operator == (const UserInfo::Ptr usr)
        {
            return ((usr->username_ == username_) && (usr->password_ == password_));
        }

        void createToken()
        {
            token_ = std::make_shared<UserToken>();
        }
};