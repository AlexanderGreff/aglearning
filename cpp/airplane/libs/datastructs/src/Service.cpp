#include <datastructs/Service.hpp>
#include <datastructs/Database.hpp>
#include <algorithm>

Service::LoginResult Service::login(std::string username, std::string password)
{
    Database* db = Database::instance();
    
    std::vector<UserInfo>::iterator res = std::find(db->users_.begin(),db->users_.end(), UserInfo{username, password});
    if (res != db->users_.end())
    {
        return LoginResult::Success;
    }
    return LoginResult::Failure;
}