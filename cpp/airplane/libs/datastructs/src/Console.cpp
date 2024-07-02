#include <datastructs/Console.hpp>
#include <iostream>

 Database* Console::login()
{
    Service::LoginResult currStatus = Service::LoginResult::Failure;
    while (currStatus == Service::LoginResult::Failure)
    {
        std::string username;
        std::string password;
        Service::LoginResult result;
        std::cout << "please enter your username (leave empty to quit)" << std::endl;
        std::getline(std::cin, username);
        if (username.size() == 0)
        {
            return nullptr;
        }
        std::cout << "please enter your password" << std::endl;
        std::getline(std::cin, password);
        result = service_.login(username, password);
        if (result == Service::LoginResult::Success)
        {
            return Database::instance();
        }
    }
}

int Console::mainMenu()
{
    Database* db = login();
    if (db != nullptr)
    {

    }
    return 0;
}


