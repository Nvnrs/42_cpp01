#ifndef HUMAN_A_h
#define HUMAN_A_h
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon		&weapon;

	public :
		HumanA(std::string name, Weapon &weapon);
		void setName(std::string name);
		const std::string &getName(void);
		const Weapon &getWeapon(void);
		void attack();
};

#endif