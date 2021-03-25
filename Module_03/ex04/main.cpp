// CLion
// Created by Foster Grisella on 3/20/21 10:53.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap superTrap("lol");

	SuperTrap trap(superTrap);

	std::cout << trap << std::endl;


//	std::cout << superTrap << std::endl;
}