#pragma once


#include <string>
class Flight
{
    private:
        std::string departureAirport_;
        std::string arrivalAirport_;
        std::string gate_;     
        int flightNumber_;
        int flightTime_;



    public:
        Flight(std::string departureAirport, std::string arrivalAirport, 
              std::string gate, int flightNumber, int flightTime) 
        : departureAirport_(departureAirport), arrivalAirport_(arrivalAirport),
         gate_(gate), flightNumber_(flightNumber), flightTime_(flightTime) {}

};
