// CLion
// Created by Foster Grisella on 3/22/21 17:06.
//

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;

	std::cout << "" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << "" << std::endl;

	return 0;
}

