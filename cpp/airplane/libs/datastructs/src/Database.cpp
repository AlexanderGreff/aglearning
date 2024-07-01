#include <datastructs/Database.hpp>

Database::Database()
: 
passengers_(
	{
		std::make_shared<Passenger>("John", 23),
        std::make_shared<Passenger>("Jane", 24),
        std::make_shared<Passenger>("Mary", 22),
        std::make_shared<Passenger>("Mark", 32),
        std::make_shared<Passenger>("Wade", 33)
	}
		), 

trips_(
	{
			std::make_shared<Trip>("Paris", "London", 10, 20),
			std::make_shared<Trip>("Prague", "Chicago", 11, 21)
	}
		),
		
tickets_(
	{
		std::make_shared<Ticket>( "Paris", "London",  1),
		std::make_shared<Ticket>( "Prague", "Atlanta", 2),
		std::make_shared<Ticket>( "Atlanta", "Chicago", 2)
	}
		),
usernameList_(
	{
		"John",
		"Jane",
		"Mary",
		"Mark",
		"Wade"
	}
		),
passwordList_(
	{
		"password1",
		"password2",
		"password3",
		"password4",
		"password5"
	}
		)

{}
