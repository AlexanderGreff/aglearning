#pragma once

#include "Flight.hpp"
#include <string>
#include <vector>
class Ticket
{
    public:
        using collection = std::vector<Ticket>; //type definition

    private:
        std::string seatClass_;
        std::string seatLetter_;
        int price_;
        Flight* myFlight_;
    
    public:
        using Ptr = std::shared_ptr<Ticket>;
        using Collection = std::vector<Ticket>;

        Ticket(std::string seatClass, std::string seatLetter,int price) 
        : seatClass_(seatClass), seatLetter_(seatLetter), price_(price) {}

        const std::string& getSeatClass() const { return seatClass_; }
        std::string getSeatLetter() const { return seatLetter_; }
        int getPrice() const { return price_; }

        void setSeatClass(std::string seatClass) { seatClass_ = seatClass; }
        void setSeatLetter(char seatLetter) { seatLetter_ = seatLetter; }
        void setPrice(int price) { price_ = price; }
};
