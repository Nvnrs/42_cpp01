#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	setName(name);
	this->weapon = NULL;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

const std::string &HumanB::getName(void)
{
	return this->name;
}

const Weapon &HumanB::getWeapon(void)
{
	return *this->weapon;
}

void HumanB::attack()
{
	Weapon weapon = this->getWeapon();
	std::cout << this->getName()
		<< " attacks with their "
		<< weapon.getType()
		<< std::endl;
}