// CLion
// Created by Foster Grisella on 3/19/21 19:28.
//


#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
	_hitPoint = 60;
	_maxHitPoint = 60;
	_energyPoint = 120;
	_maxEnergyPoint = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "NNJ-TP: " <<  "\"" << _name << "\""  << ": Hahahahaha! I'm alive!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
}

void NinjaTrap::ninjaShoebox(const ClapTrap &clapTrap) {
	if (this != &clapTrap)
		std::cout << "NNJ-TP: "	<< _name << "Now I will dominate, " << clapTrap.getName() << "!" << std::endl;
}


void NinjaTrap::ninjaShoebox(const FragTrap &fragTrap) {
	std::cout << "NNJ-TP: "	<< _name << "What else can I do, " << fragTrap.getName() << "?" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scavTrap) {
	std::cout << "NNJ-TP: "	<< _name << "Bye bye, " << scavTrap.getName() << "?" << "BADUMM..TSSSSS..." << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &ninjaTrap) {
	if (this != &ninjaTrap)
		std::cout << "NNJ-TP: "	<< _name << "Hello " << ninjaTrap.getName() << " sorry you will die today!" <<  std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other) {
	*this = other;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &other) {
	ClapTrap::operator=(other);
	return *this;
}

