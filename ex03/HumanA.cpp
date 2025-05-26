#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: name(name), weapon(weapon)
{
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

const std::string &HumanA::getName(void)
{
	return this->name;
}

const Weapon &HumanA::getWeapon(void)
{
	return this->weapon;
}
void HumanA::attack()
{
	Weapon weapon = this->getWeapon();
	std::cout << this->getName()
		<< " attacks with their "
		<< weapon.getType()
		<< std::endl;
}