#include <datastructs/Console.hpp>
#include <iostream>

void Console::login()
{
    std::cout << "please enter your username" << std::endl;
    std::string username;
    std::cin >> username;
    std::cout << "please enter your password" << std::endl;
    std::string password;
    std::cin >> password;
    service_.login(username, password);
}
int Console::mainMenu()
{
    login();
    return 0;
}


