#include <datastructs/Database.hpp>

Database::Database()
: 
allTrips_(
	{
		Trip("Paris", "London", 10, 20),
		Trip("London", "Paris", 11, 21),
		Trip("Prague", "Chicago", 12, 22),
		Trip("Chicago", "Prague", 13, 23),
		Trip("Atlanta", "Phoenix", 14, 24),
		Trip("Phoenix", "Atlanta", 15, 25),
		Trip("San Francisco", "Seattle", 16, 26),
		Trip("Seattle", "San Francisco", 17, 27),
		Trip("New York", "Boston", 18, 28),
		Trip("Boston", "New York", 19, 29)
	}
		),
allTickets_(
	{
		Ticket( "Paris", "London",  1),
		Ticket( "Prague", "Atlanta", 2),
		Ticket( "Atlanta", "Chicago", 2)
	}
		),
users_(
	{
		std::make_shared<UserInfo>("John","pass1"),
		std::make_shared<UserInfo>("Jane","pass2"),
		std::make_shared<UserInfo>("Mary","pass3"),
		std::make_shared<UserInfo>("Mark","pass4"),
		std::make_shared<UserInfo>("Wade","pass5") 
	}
	),
allFlights_
	(
	{
		std::make_shared<Flight>("Paris", "London", "A", 1, 10),
		std::make_shared<Flight>("London", "Paris", "B", 2, 11),
		std::make_shared<Flight>("Prague", "Chicago", "C", 3, 12),
		std::make_shared<Flight>("Chicago", "Prague", "D", 4, 13),
		std::make_shared<Flight>("Atlanta", "Phoenix", "E", 5, 14),
		std::make_shared<Flight>("Phoenix", "Atlanta", "F", 6, 15),
		std::make_shared<Flight>("San Francisco", "Seattle", "G", 7, 16),
		std::make_shared<Flight>("Seattle", "San Francisco", "H", 8, 17),
		std::make_shared<Flight>("New York", "Boston", "I", 9, 18),
		std::make_shared<Flight>("Boston", "New York", "J", 10, 19),
		std::make_shared<Flight>("Boston", "Milan", "K", 11, 20),
		std::make_shared<Flight>("Boston", "Berlin", "L", 12, 21),
		std::make_shared<Flight>("Boston", "Madrid", "M", 13, 22),
		std::make_shared<Flight>("Boston", "Paris", "N", 14, 23),
		std::make_shared<Flight>("Boston", "London", "O", 15, 24),
		std::make_shared<Flight>("Boston", "Chicago", "P", 16, 25)
	}
	)
{
	users_[0]->trips_.push_back(allTrips_[0]);
	users_[0]->trips_.push_back(allTrips_[1]);
	users_[0]->trips_[0].addTicket(allTickets_[1], nullptr);
	users_[0]->trips_[1].addTicket(allTickets_[2], nullptr);
}
