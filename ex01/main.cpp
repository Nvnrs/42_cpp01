#include "Zombie.hpp"

int	main()
{
	Zombie *array;

	array = zombieHorde(10, "test");
	for (size_t i = 0; i < 10; i++)
		array[i].announce();
	delete[] array;
}