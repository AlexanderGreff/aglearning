#include <datastructs/Console.hpp>
#include <iostream>
#include <ranges>
#include <sstream>

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
        std::cout << "username: " << username << std::endl;
        if (username.size() == 0)
        {
            return 0;
        }
        std::cout << "please enter your password" << std::endl;
        std::getline(std::cin, password);
        std::cout << "password: " << password << std::endl;
        result = service_.login(username, password);
        if (result.first == Service::LoginResult::Success)
        {
            result.second->createToken();
            return result.second->token_->getasint64();
        }
    }
    return 0;
}

void printUserMenu()
{
    std::cout << "User Menu" << std::endl;
    std::cout << "1. Account Info" << std::endl;
    std::cout << "2. Print Trips" << std::endl;
    std::cout << "3. Create Trip" << std::endl;
    std::cout << "4. Delete Trip" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "m. display User Menu" << std::endl;
}

int Console::userMenu(const int64_t loginCheck)
{
    std::cout << "Welcome" << std::endl;
    printUserMenu();
    bool done = false;
    while (!done)
    {

        std::string choice;
        std::getline(std::cin, choice);
        trim(choice); // clean up extra spaces

        switch (choice[0])
        {
        case '1':
            std::cout << "Account Info" << std::endl;
            std::cout << service_.getUserInfo(loginCheck) << std::endl;
            break;

        case '2':
            std::cout << "Print Trips" << std::endl;
            std::cout << "your trips are: " << std::endl;
            std::cout <<service_.getTrips(loginCheck) << std::endl;
            // service_.selectTrips(loginCheck);
            break;

        case '3':
        {
            std::cout << "Create Trip" << std::endl;
            std::string startLocation;
            std::string endLocation;
            int startDate;
            int endDate;
            std::cout << "start location: " << std::endl;
            std::getline(std::cin, startLocation);
            // std::cout << "end location: " << std::endl;
            // std::getline(std::cin, endLocation);
            // std::cout << "start date: " << std::endl;
            // std::string startDateString;
            // std::getline(std::cin, startDateString);
            // std::istringstream startDateStream(startDateString); 
            // startDateStream >> startDate; 
            // std::cout << "end date: " << std::endl;
            // std::string endDateString;
            // std::getline(std::cin, endDateString);
            // std::istringstream endDateStream(endDateString); 
            // endDateStream >> endDate;
            std::string result = service_.addFlights(loginCheck, startLocation, endLocation, startDate, endDate);
            std::cout << result << std::endl;
        }
            break;

        case '4':
        {
            std::cout << "Delete Trip:" << std::endl;
            std::string trip;
            std::getline(std::cin, trip);
            std::string result = service_.deleteTrip(loginCheck, trip);
            std::cout << result << std::endl;
        }
            break;

        case '5':
            std::cout << "Exit" << std::endl;
            done = true;
            break;
        
        case 'm':
            printUserMenu();
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


