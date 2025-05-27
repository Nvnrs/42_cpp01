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
	
	void (Harl::*funcs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	for (size_t i = 0; i < 4; i++)
	{
		if (keys[i] == level)
		{
			(this->*funcs[i])();
			return;
		}
	}
	
}
