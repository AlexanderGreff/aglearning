#pragma once

#include <vector>
#include "Ticket.hpp"
class Trip
{
    public:
        using collection = std::vector<Trip>; //type definition

    private:
        Ticket::collection tickets_;
        std::string startLocation_;
        std::string endLocation_;
        int startDate_;
        int endDate_;

    public:
        Trip(std::string startLocation, std::string endLocation, int startDate, int endDate)
        : startLocation_(startLocation), endLocation_(endLocation), startDate_(startDate), endDate_(endDate) {}
        Ticket::collection& getTickets() { return tickets_; }
        const std::string& getStartLocation() const { return startLocation_; }
        const std::string& getEndLocation() const { return endLocation_; }
        int getStartDate() const { return startDate_; }
        int getEndDate() const { return endDate_; }
        void addTicket(Ticket ticket) { tickets_.push_back(ticket); }
        Ticket getTicket(int index) { return tickets_[index]; }
        Ticket getTicket(int index) const { return tickets_[index]; }


};