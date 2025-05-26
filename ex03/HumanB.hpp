#ifndef HUMAN_B_h
#define HUMAN_B_h
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		std::string name;
		Weapon		*weapon;

	public :
		HumanB(std::string name);
		void setName(std::string name);
		void setWeapon(Weapon &weapon);
		const std::string &getName(void);
		const Weapon &getWeapon(void);
		void attack();
};

#endif