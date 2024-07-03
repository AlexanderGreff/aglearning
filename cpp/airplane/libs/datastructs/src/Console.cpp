#include <datastructs/Console.hpp>
#include <iostream>
#include <ranges>


void trim(std::string& in)
{
    auto view
        = std::views::all(in)
        | std::views::drop_while(isspace)
        | std::views::reverse
        | std::views::drop_while(isspace)
        | std::views::reverse;

        std::string result{view.begin(), view.end()};
        in = std::move(result);
}

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

int Console::userMenu(const int64_t loginCheck)
{
    UserInfo::Ptr userInfo = service_.findUserInfo(loginCheck);
    if (userInfo != nullptr)
    {
        std::cout << "Welcome " << userInfo->username_ << std::endl;
        std::cout << "User Menu" << std::endl;
        std::cout << "1. Account Info" << std::endl;
        std::cout << "2. Print Trips" << std::endl;
        std::cout << "3. Create Trip" << std::endl;
        std::cout << "4. Delete Trip" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::string choice;
        std::getline(std::cin, choice);
        trim(choice); //clean up extra spaces
        switch (choice[0])
        {
        case '1':
            std::cout << "Account Info" << std::endl;
            break;
        case '2':
            std::cout << "Print Trips" << std::endl;
            break;
        case '3':
            std::cout << "Create Trip" << std::endl;
            break;
        case '4':
            std::cout << "Delete Trip" << std::endl;
            break;
        default:
            break;
        }
    }
    return 0;
}

int Console::mainMenu()
{
    int64_t loginCheck = login();
    if (loginCheck != 0)
    {
        userMenu(loginCheck);
    }
    return 0;
}


