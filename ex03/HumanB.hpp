#ifndef HUMAN_B_H
#define HUMAN_B_H
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
		void attack();
};

#endif