#include "Zombie.hpp"

Zombie::Zombie(void)
{
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie(void)
{
	std::cout << this->name
		<< " are destroyed"
		<< std::endl;
}
void Zombie::announce(void)
{
	std::cout <<  this->name
		<< " BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
