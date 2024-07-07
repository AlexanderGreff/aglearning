#pragma once

#include <vector>
#include <format>
#include "Ticket.hpp"
class Trip
{
    public: //type definitions
        using Ptr = std::shared_ptr<Trip>;
        using Collection = std::vector<Trip>;
    

    private: //attributes
        Ticket::Collection tickets_;
        std::string startLocation_;
        std::string endLocation_;
        int startTime_;
        int endTime_;

    public: //constructors

        Trip(std::string startLocation, std::string endLocation, int startTime, int endTime)
        : startLocation_(startLocation), endLocation_(endLocation), startTime_(startTime), endTime_(endTime) {}

    public: //accessors
        const Ticket::Collection& getTickets() const { return tickets_; }
        const std::string& getStartLocation() const { return startLocation_; }
        const std::string& getEndLocation() const { return endLocation_; }
        int getStartTime() const { return startTime_; }
        int getEndTime() const { return endTime_; }
        void addTicket(Ticket ticket, Flight::Ptr flight) 
        { 
            ticket.setFlight(flight);
             tickets_.push_back(ticket); 
        }
        static std::string getName(const std::string& startLocation, const std::string& endLocation) { return std::format("{}-{}", startLocation, endLocation); }
        std::string getName() const { return getName(startLocation_, endLocation_); }

};