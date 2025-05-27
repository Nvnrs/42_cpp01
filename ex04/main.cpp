#include <iostream>
#include <fstream>

#define ARGS_ERROR "Only 3 args required :\n\
- 1 -> filename\n\
- 2 -> string_to_find\n\
- 3 -> string_to_replace"

#define READ_ERROR "Unable to read from input file"
#define WRITE_ERROR "Unable to write to output file"
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

std::string replaceStr(std::string input,
	const std::string sFind, const std::string sReplace)
{
	size_t i_start;
	std::string startPart;
	std::string output;

	while (input.length())
	{
		i_start = input.find(sFind);
		if (i_start != std::string::npos && sFind.length())
		{
			startPart = input.substr(0, i_start);
			output+= startPart;
			output+= sReplace;
			input = input.substr(i_start + sFind.length(), input.length());
		}
		else
		{
			output+= input;
			input = "";
		}
	}
	return output;
}

std::string getFile(std::string filename)
{
	std::string file;
	std::string line;
	std::ifstream inputFile;

	inputFile.open(filename.c_str(), std::ios::in);
	if (!inputFile.is_open())
		throw READ_ERROR;
	while (getline(inputFile, line))
	{
		file+= line;
		file+= "\n";
	}
	return file;
}

bool	writeInFile(std::string filename, const std::string content)
{
	std::ofstream file;

	file.open(filename.c_str(), std::ios::out);
	if (!file.is_open())
		throw WRITE_ERROR;
	file << content;
	return true;
}

void	printError(std::string str)
{
	std::cout << "Error :"
		<< str
		<< std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return printError(ARGS_ERROR), -1;
	std::string filename = argv[1];
	std::string sFind = argv[2];
	std::string sReplace = argv[3];
	std::string filenameOUT = filename + ".replace";
	std::string file;

	try {
		file = getFile(filename);
	} catch (const char *err ) {
		return (printError(err), EXIT_FAILURE);
	}
	file = replaceStr(file, sFind, sReplace);
	try {
		writeInFile(filenameOUT, file);
	} catch (const char * err) {
		return (printError(err), EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
