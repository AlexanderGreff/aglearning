#include <datastructs/Service.hpp>
#include <datastructs/Database.hpp>
#include <algorithm>

Service::LoginData  Service::login(std::string username, std::string password)
{
    Database* db = Database::instance();
    UserInfo::Ptr myUser = std::make_shared<UserInfo>(username, password);
    UserInfo::Collection::iterator res = std::find(db->users_.begin(),db->users_.end(), myUser);
    if (res != db->users_.end())
    {
        return {LoginResult::Success, *res};
    }
    return {LoginResult::Failure, UserInfo::Ptr()};
}