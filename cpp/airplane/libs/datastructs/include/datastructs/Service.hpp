#pragma once

#include <vector>
#include <string>
class Service
{
    private:
    std::vector<std::string> usernameList_;
    std::vector<std::string> passwordList_;

    public: 
    void login(std::string username, std::string password);
    Service(std::vector<std::string> usernameList,
     std::vector<std::string> passwordList) : usernameList_(usernameList), passwordList_(passwordList)  {}
};
