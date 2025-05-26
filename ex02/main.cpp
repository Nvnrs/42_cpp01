#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "MEMORY ADRESS of string :"
		<< &str << std::endl;
	std::cout << "MEMORY ADRESS of stringPTR :"
		<< stringPTR << std::endl;
	std::cout << "MEMORY ADRESS of stringREF :"
		<< &stringREF << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "VALUE of string :"
		<< str << std::endl;
	std::cout << "VALUE of stringPTR :"
		<< *stringPTR << std::endl;
	std::cout << "VALUE of stringREF :"
		<< stringREF << std::endl;
}