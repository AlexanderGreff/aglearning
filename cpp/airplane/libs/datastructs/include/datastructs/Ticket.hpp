#pragma once

#include <string>
#include <vector>
class Ticket
{
    public:
        using collection = std::vector<Ticket>; //type definition

    private:
        std::string startLocation_;
        std::string endLocation_;
        std::string seatClass_;
        char seatLetter_;
        char gateLetter_;
        int gateNumber_;        
        int flightNumber_;
        int seatNumber_;
        int flightTime_;
    
    public:
        Ticket(std::string startLocation, std::string endLocation, std::string seatClass,
         char seatLetter, char gateLetter, int gateNumber,
         int flightNumber,int seatNumber, int flightTime) 
        : startLocation_(startLocation), endLocation_(endLocation),
         seatClass_(seatClass), seatLetter_(seatLetter), 
         gateLetter_(gateLetter), gateNumber_(gateNumber), 
         flightNumber_(flightNumber), seatNumber_(seatNumber), flightTime_(flightTime) {}

        const std::string& getStartLocation() const { return startLocation_; }
        const std::string& getEndLocation() const { return endLocation_; }
        const std::string& getSeatClass() const { return seatClass_; }
        char getSeatLetter() const { return seatLetter_; }
        char getGateLetter() const { return gateLetter_; }
        int getGateNumber() const { return gateNumber_; }
        int getFlightNumber() const { return flightNumber_; }
        int getSeatNumber() const { return seatNumber_; }
        int getFlightTime() const { return flightTime_; }

        void setStartLocation(std::string startLocation) { startLocation_ = startLocation; }
        void setEndLocation(std::string endLocation) { endLocation_ = endLocation; }
        void setSeatClass(std::string seatClass) { seatClass_ = seatClass; }
        void setSeatLetter(char seatLetter) { seatLetter_ = seatLetter; }
        void setGateLetter(char gateLetter) { gateLetter_ = gateLetter; }
        void setGateNumber(int gateNumber) { gateNumber_ = gateNumber; }
        void setFlightNumber(int flightNumber) { flightNumber_ = flightNumber; }
        void setSeatNumber(int seatNumber) { seatNumber_ = seatNumber; }
        void setFlightTime(int flightTime) { flightTime_ = flightTime; }
};