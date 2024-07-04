#include <datastructs/Database.hpp>

Database::Database()
: 
trips_(
	{
			std::make_shared<Trip>("Trip1","Paris", "London", 10, 20),
			std::make_shared<Trip>("Trip2","Prague", "Chicago", 11, 21)
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
		std::make_shared<UserInfo>("Jane","pass2"),
		std::make_shared<UserInfo>("Mary","pass3"),
		std::make_shared<UserInfo>("Mark","pass4"),
		std::make_shared<UserInfo>("Wade","pass5"), 
		std::make_shared<UserInfo>("John","pass1")
	}
)

{
}
