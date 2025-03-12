#pragma once

#include "Flight.hpp"
#include <string>
#include <vector>
#include <memory>
class Ticket
{
    public: //type definitions
        using Collection = std::vector<Ticket>; 
        using Ptr = std::shared_ptr<Ticket>;

    private: //attributes
        std::string seatClass_;
        std::string seatLetter_;
        int price_;
        Flight::Ptr flight_;
    

    public: //constructors
        Ticket(std::string seatClass, std::string seatLetter,int price) 
        : seatClass_(seatClass), seatLetter_(seatLetter), price_(price) {}

    public: //accessors
        const std::string& getSeatClass() const { return seatClass_; }
        std::string getSeatLetter() const { return seatLetter_; }
        int getPrice() const { return price_; }

        void setSeatClass(std::string seatClass) { seatClass_ = seatClass; }
        void setSeatLetter(char seatLetter) { seatLetter_ = seatLetter; }
        void setPrice(int price) { price_ = price; }

        Flight::Ptr& getFlight() { return flight_; }
        void setFlight(Flight::Ptr flight) { flight_ = flight; }
};
