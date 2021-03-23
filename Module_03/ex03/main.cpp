// CLion
// Created by Foster Grisella on 3/20/21 10:10.
//

#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
//	ClapTrap **clapArmy;
//	clapArmy = new ClapTrap *[9];
//	int i = 0;
//	for (; i < 3; ++i) {
//		clapArmy[i] = new NinjaTrap(("Ninja"));
//	}
//	for (; i < 6; ++i) {
//		clapArmy[i] = new FragTrap("Frag");
//	}
//	for (; i < 9; ++i) {
//		clapArmy[i] = new ScavTrap("Scav");
//	}
//	for (int j = 0; j < 9; ++j) {
//		std::cout << *clapArmy[j] << std::endl;
//	}
//
//	ClapTrap **clapArmy2 = new ClapTrap *[9];
//	for (int j = 0; j < 9; ++j) {
//		clapArmy2[j] = clapArmy[j];
//	}
//	for (int j = 0; j < 9; ++j) {
//		std::cout << *clapArmy2[j] << std::endl;
//	}
//	FragTrap c("lol");
//	FragTrap b = c;

//	ScavTrap c("lol");
//	ScavTrap b;
//	b = c;

	NinjaTrap c("lol");
	NinjaTrap b = c;

	std::cout << c << std::endl;
	std::cout << b << std::endl;


}