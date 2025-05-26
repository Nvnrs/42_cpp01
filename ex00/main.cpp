#include "Zombie.hpp"

int	main()
{

	std::cout << "____STATIC ALLOCATION___" << std::endl;
	Zombie zombie1("Patrick");
	Zombie zombie2("Pierre");
	Zombie zombie3("Bob");
	zombie1.announce();
	zombie2.announce();
	zombie3.announce();
	std::cout << std::endl;

	std::cout << "____random CHUMP___" << std::endl;
	randomChump("tempo 1");
	randomChump("tempo 2");
	randomChump("tempo 3");
	std::cout << std::endl;

	std::cout << "____HEAP ALLOCATION___" << std::endl;
	Zombie *zombieHeap1 = newZombie("heap 1");
	Zombie *zombieHeap2 = newZombie("heap 2");
	Zombie *zombieHeap3 = newZombie("heap 3");

	zombieHeap1->announce();
	zombieHeap2->announce();
	zombieHeap3->announce();
	delete zombieHeap1;
	delete zombieHeap2;
	delete zombieHeap3;
	std::cout << std::endl;
}