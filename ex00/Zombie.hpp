#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif