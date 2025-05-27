// Harl.cpp
#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout <<"[DEBUG]\n" << DEBUG_MSG << std::endl;
}

void Harl::info( void )
{
	std::cout <<"[INFO]\n"  << INFO_MSG << std::endl;
}

void Harl::warning( void )
{
	std::cout <<"[WARNING]\n" << WARNING_MSG << std::endl;
}

void Harl::error( void )
{
	std::cout <<"[ERROR]\n" << ERROR_MSG << std::endl;
}


void Harl::complain( std::string level )
{
	const std::string keys[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	
	int i = 0;
	while (i < 4)
	{
		if (level == keys[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0 : 
			this->debug(); // fall through
		case 1 : 
			this->info(); // fall through
		case 2 : 
			this->warning(); // fall through
		case 3 : 
			this->error(); // fall through
			break;
		default:
			std::cout << "[ Probably complaining absout insignificant problems ]\n";
			break;
	}
}
