#include <datastructs/Service.hpp>
#include <datastructs/Database.hpp>
#include <algorithm>
#include <sstream>
#include <format>

Service::LoginData  Service::login(std::string username, std::string password)
{
    Database* db = Database::instance();
    UserInfo::Ptr myUser = std::make_shared<UserInfo>(username, password);
    UserInfo::Collection::iterator res = std::find_if(db->users_.begin(),db->users_.end(), [myUser](UserInfo::Ptr usr) { return *usr == *myUser;});
    if (res != db->users_.end())
    {
        return {LoginResult::Success, *res};
    }
    return {LoginResult::Failure, UserInfo::Ptr()};
}

UserInfo::Ptr Service::findUserInfo(const int64_t loginCheck)
{
    Database* db = Database::instance();
    UserInfo::Collection::iterator res = std::find_if(db->users_.begin(),db->users_.end(),
    [loginCheck](UserInfo::Ptr usr) { return usr->token_->getasint64() == loginCheck;});
    if (res != db->users_.end())
    {
        return *res;
    }
    return UserInfo::Ptr();
}

std::string Service::getUserInfo(const int64_t loginCheck)
{
    UserInfo::Ptr userInfo = findUserInfo(loginCheck);
    if (userInfo != nullptr)
    {
        std::stringstream out;
        out << "your username is: " << userInfo->username_ << "" << std::endl;
        out << "your password is: " << userInfo->password_ << "" << std::endl;
        return out.str();
    }
    return "user not found";
}
std::string Service::getTrips(const int64_t loginCheck)
{
    UserInfo::Ptr userInfo = findUserInfo(loginCheck);
    if (userInfo != nullptr)
    {
        std::stringstream out;
        for (Trip& trip : userInfo->trips_)
        {
            out << trip.getName() << " from " << trip.getStartLocation() << " to " << trip.getEndLocation() << std::endl;
        }
        return out.str();
    }
    return "user not found";
}

std::string Service::deleteTrip(const int64_t loginCheck, std::string tripName)
{
    UserInfo::Ptr userInfo = findUserInfo(loginCheck);
    if (userInfo != nullptr)
    {
        Trip::Collection::iterator iter = std::find_if(userInfo->trips_.begin(),userInfo->trips_.end(),
        [tripName](Trip trip) { return trip.getName() == tripName;});
        if (iter != userInfo->trips_.end())
        {
            userInfo->trips_.erase(iter);
            return "trip deleted";
        }
    }
    return "trip not found";
}

void Service::searchTrips(std::string startLocation, std::vector<Flight::Ptr>& temp)
{
    Database *db = Database::instance();
    int vectorCtr = 0;
    Flight::Collection::iterator curr = db->allFlights_.begin();
    while (curr != db->allFlights_.end())
    {
        Flight::Collection::iterator iter = std::find_if(curr, db->allFlights_.end(),
                                                         [startLocation](Flight::Ptr flight)
                                                         { return flight->getDepartureCity() == startLocation; });
        if (iter != db->allFlights_.end())
        {
            std::cout << vectorCtr << " " << *(*iter) << std::endl;
            vectorCtr++;
            temp.push_back(*iter);
            curr = ++iter;
        }
        else
        {
            curr = iter;
        }
    }
}

    std::string Service::addFlights(const int64_t loginCheck, std::string startLocation, std::string endLocation, int startDate, int endDate)
    {
        UserInfo::Ptr userInfo = findUserInfo(loginCheck);
        Database *db = Database::instance();
        Flight::Collection::iterator curr = db->allFlights_.begin();
        std::vector<Flight::Ptr> temp;
        searchTrips(startLocation, temp);
        std::cout << "which number flight do you wish to add?" << std::endl;
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        int i = -1;
        iss >> i;
        if (i >= 0 && i < temp.size())
        {
            Flight::Ptr flight = temp[i];
            userInfo->trips_.push_back(Trip(flight->getDepartureCity(), flight->getArrivalCity(), startDate, endDate));
            userInfo->trips_.back().addTicket(Ticket("economy", "20A", 600), flight);
            return "flight added";
        }
        else
        {
            return "flight not found";
        }
    }
