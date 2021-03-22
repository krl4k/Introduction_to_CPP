// CLion
// Created by Foster Grisella on 3/19/21 18:37.
//


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	_energyPoint = 50;
	_maxEnergyPoint = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "SCV-TP: " <<  "\"" << _name << "\""  << ": Hahahahaha! I'm alive!" << std::endl;

}

ScavTrap::~ScavTrap() {
	std::cout << "SCV-TP: " <<  "\"" << _name << "\""  << ": I'll die the way I lived: annoying!" << std::endl;
}

void ScavTrap::challengeNewcomer() const {
	std::string	screams[5] = {"Uh, how do I cast magic missile?",
								 "Do not look behind my curtain!",
								 "I'm made of magic!",
								 "You can call me Gundalf!",
								 "Avada kedavra!"};
	int rand_scream = rand() % 5;
	std::cout 	<< "SCV-TP: " <<  "\"" << _name << "\""  << ": " << screams[rand_scream] << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	ClapTrap::operator=(other);
	return *this;
}

