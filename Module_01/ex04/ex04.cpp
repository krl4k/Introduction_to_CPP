#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pStrinf = &string;
	std::string &rString = string;
	string.append("lol");

	std::cout << *pStrinf << std::endl;
	std::cout << rString << std::endl;


	rString = "lol";
//	std::string temp  = "temp";
//	pStrinf = &temp;
	std::cout << *pStrinf << std::endl;
	std::cout << rString << std::endl;
}