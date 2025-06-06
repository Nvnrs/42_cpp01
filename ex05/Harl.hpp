#ifndef HARL_H
#define HARL_H

#include <iostream>

#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!"
#define WARNING_MSG "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month."
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."


class Harl
{
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public :
		void complain( std::string level );

};

#endif