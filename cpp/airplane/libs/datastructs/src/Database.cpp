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
users_(
	{
		std::make_shared<UserInfo>("John","pass1"),
		std::make_shared<UserInfo>("Jane","pass2"),
		std::make_shared<UserInfo>("Mary","pass3"),
		std::make_shared<UserInfo>("Mark","pass4"),
		std::make_shared<UserInfo>("Wade","pass5") 
	}
)

{
}
