#pragma once


#include <string>
class Flight
{
    private: //attributes
        std::string departureCity_;
        std::string arrivalCity_;
        std::string gate_;     
        int takeOffTime_;
        int landingTime_;
    
    public: //type definition
        using Ptr = std::shared_ptr<Flight>;
        using Collection = std::vector<Flight::Ptr>;



    public: //accessors
        const std::string& getDepartureCity() const { return departureCity_; }
        const std::string& getArrivalCity() const { return arrivalCity_; }
        const std::string& getGate() const { return gate_; }
        int getTakeOffTime() const { return takeOffTime_; }
        int getLandingTime() const { return landingTime_; }

    public: //constructors
        Flight(std::string departureCity, std::string arrivalCity, 
              std::string gate, int takeOffTime, int landingTime) 
        : departureCity_(departureCity), arrivalCity_(arrivalCity),
         gate_(gate), takeOffTime_(takeOffTime), landingTime_(landingTime) {}

    public: //operators
        friend std::ostream &operator << (std::ostream &os, const Flight &flight) 
        {return os << flight.departureCity_ << " " << flight.arrivalCity_ << " " << flight.gate_ << " " << flight.takeOffTime_ << " " << flight.landingTime_; }
};
