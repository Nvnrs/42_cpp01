#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl test;
	std::string arg;

	if (argc != 2)
	{
		std::cout << "Error the program need 1 ARG\n";
		return -1;
	}
	arg = argv[1];
	test.complain(arg);
	return 0;
}