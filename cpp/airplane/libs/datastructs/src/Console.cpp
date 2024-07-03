#include <datastructs/Console.hpp>
#include <iostream>

 int64_t Console::login()
{
    Service::LoginResult currStatus = Service::LoginResult::Failure;
    while (currStatus == Service::LoginResult::Failure)
    {
        std::string username;
        std::string password;
        std::pair<Service::LoginResult, UserInfo::Ptr> result;
        std::cout << "please enter your username (leave empty to quit)" << std::endl;
        std::getline(std::cin, username);
        if (username.size() == 0)
        {
            return 0;
        }
        std::cout << "please enter your password" << std::endl;
        std::getline(std::cin, password);
        result = service_.login(username, password);
        if (result.first == Service::LoginResult::Success)
        {
            result.second->createToken();
            return result.second->token_->getasint64();
        }
    }
    return 0;
}

int Console::mainMenu()
{
    int64_t loginCheck = login();
    if (loginCheck != 0)
    {

    }
        

    return 0;
}


