#pragma once

#include <vector>
#include <format>
#include "Ticket.hpp"
class Trip
{
    public:
        using collection = std::vector<Trip>; //type definition

    private:
        Ticket::Collection tickets_;
        std::string startLocation_;
        std::string endLocation_;
        int startDate_;
        int endDate_;

    public:
        using Ptr = std::shared_ptr<Trip>;
        using Collection = std::vector<Trip>;

        Trip(std::string startLocation, std::string endLocation, int startDate, int endDate)
        : startLocation_(startLocation), endLocation_(endLocation), startDate_(startDate), endDate_(endDate) {}
        Ticket::Collection& getTickets() { return tickets_; }
        const std::string& getStartLocation() const { return startLocation_; }
        const std::string& getEndLocation() const { return endLocation_; }
        int getStartDate() const { return startDate_; }
        int getEndDate() const { return endDate_; }
        // void addTicket(Ticket ticket) { tickets_.push_back(ticket); }
        // Ticket getTicket(int index) { return tickets_[index]; }
        // Ticket getTicket(int index) const { return tickets_[index]; }
        static std::string getName(const std::string& startLocation, const std::string& endLocation) { return std::format("{}-{}", startLocation, endLocation); }
        std::string getName() const { return getName(startLocation_, endLocation_); }

};