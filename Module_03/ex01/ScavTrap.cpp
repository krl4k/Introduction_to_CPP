// CLion
// Created by Foster Grisella on 3/19/21 15:22.
//


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : _name(name), _hitPoint(100),_maxHitPoint(100),
											_energyPoint(50), _maxEnergyPoint(50),_level(1),
											_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3) {
	srand(time(0));
	std::cout << "SCV-TP: " <<  "\"" << _name << "\""  << ": Hahahahaha! I'm alive!" << std::endl;
}

ScavTrap::ScavTrap() {}

ScavTrap::~ScavTrap() {
	std::cout << "SCV-TP: " <<  "\"" << _name << "\""  << ": I'll die the way I lived: annoying!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
	{
		return *this;
	}
	_name = other._name;
	_hitPoint = other._hitPoint;
	_maxHitPoint = other._maxHitPoint;
	_energyPoint = other._energyPoint;
	_maxEnergyPoint = other._maxEnergyPoint;
	_level = other._level;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	return *this;
}


ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;
}

void ScavTrap::rangedAttack(const std::string &target) {
	std::cout 	<< "SCV-TP: " << _name << ": "
				<< "Coffee? Black... like my soul."
				<< "Attacks " << "\"" << target << "\""
				<< " at range, causing "
				<< _rangedAttackDamage
				<< " points of damage!"
				<< std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
	std::cout 	<< "SCV-TP: " <<  "\"" << _name << "\""  << ": "
				 << "Meet professor punch! "
				 << "Attacks " << "\"" << target << "\""
				 << " at melee, causing "
				 << _meleeAttackDamage
				 << " points of damage!"
				 << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "SDV-TP " << "\"" << _name << "\"" << " take ";
	if (amount > _hitPoint + _armorDamageReduction)
	{
		std::cout  << _hitPoint;
		_hitPoint = 0;
	}
	else
	{
		std::cout << amount - _armorDamageReduction;
		_hitPoint -= amount - _armorDamageReduction;
	}
	std::cout << " damage!"  << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SCV-TP " << "\"" << _name << "\"" << " repair ";
	if (amount > _maxHitPoint - _hitPoint)
	{
		std::cout << _maxHitPoint - _hitPoint;
		_hitPoint = 100;
	}
	else
	{
		_hitPoint += amount;
		std::cout << amount;
	}
	std::cout << " hit!"  << std::endl;
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

unsigned int ScavTrap::getMeleeAttackDamage() const {
	return _meleeAttackDamage;
}

unsigned int ScavTrap::getRangedAttackDamage() const {
	return _rangedAttackDamage;
}

const std::string &ScavTrap::getName() const {
	return _name;
}
