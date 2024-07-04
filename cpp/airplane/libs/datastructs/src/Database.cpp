#include <datastructs/Database.hpp>

Database::Database()
: 
trips_(
	{
		Trip("Paris", "London", 10, 20),
		Trip("Prague", "Chicago", 11, 21)
	}
		),
		
tickets_(
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
)
{
	users_[0]->trips_.push_back(trips_[0]);
	users_[0]->trips_.push_back(trips_[1]);
	
}
