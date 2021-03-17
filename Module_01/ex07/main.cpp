#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "Replace.h"

int main(int argc, char **argv)
{
	std::string a = {"fdfdfdf"};
	if (argc == 4)
	{
		Replace replace(argv[1]);
		replace.doReplace(argv[2], argv[3]);

	}
	else
	{
		std::cerr << "Wrong count argument!" << std::endl;
	}
	return (0);
}

