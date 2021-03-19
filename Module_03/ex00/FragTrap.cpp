// CLion
// Created by Foster Grisella on 3/19/21 13:38.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {}


FragTrap::FragTrap(const std::string &name)
		: _name(name), _hitPoint(100), _maxHitPoint(100), _energyPoint(100), _maxEnergyPoint(100),
		_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5) {
	srand(time(0));
	std::cout << _name << ": Hahahahaha! I'm alive!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << _name << ": I'll die the way I lived: annoying!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
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

FragTrap::FragTrap(const FragTrap &other) {
	*this = other;
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout 	<< _name << ": "
				<< "Chk-chk, BOOM! "
				<< "Attacks " << "\"" << target << "\""
				<< " at range, causing "
				<< _rangedAttackDamage - _armorDamageReduction
				<< " points of damage!"
	<< std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout 	<< _name << ": "
				<< "Ready for the PUNCHline?! "
				<< "Attacks " << "\"" << target << "\""
				<< " at melee, causing "
				<< _meleeAttackDamage - _armorDamageReduction
				<< " points of damage!"
				<< std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	std::string attacks[15] = {"This time it'll be awesome, I promise!",
							  "Hey everybody, check out my package!",
							  "Place your bets!",
							  "Defragmenting!",
							  "Recompiling my combat code!",
							  "Running the sequencer!",
							  "It's happening... it's happening!",
							  "It's about to get magical!",
							  "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
							  "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
							  "Some days, you just can't get rid of an obscure pop-culture reference.",
							  "Kill, reload! Kill, reload! KILL! RELOAD!",
							  "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
							  "All burn before the mighty Siren-trap!",
							  "It's time to phase you suckers out!"
							  };
	int rand_attack = rand() % 15;
	if (_energyPoint >= 25)
	{
		std::cout 	<< "FR4G-TP: " <<  "\"" << _name << "\""  << ": " << "are you ready" "\" " << target << "\" ??? ";
		std::cout << attacks[rand_attack] << std::endl;
		_energyPoint -= 25;
	}
	else
	{
		std::cout 	<< "FR4G-TP: " <<  "\"" << _name << "\""  << ": " << "Oh, oh... Sorry " "\"" << target << "\". ";
		std::cout << "I`m no more shots left!" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount) {
	if (amount > _hitPoint + _armorDamageReduction)
	{
		std::cout << "FR4G-TP " << "\"" << _name << "\"" << " take " << _hitPoint << " damage!"  << std::endl;
		_hitPoint = 0;
	}
	else
	{
		std::cout << "FR4G-TP " << "\"" << _name << "\"" << " take " << amount - _armorDamageReduction << " damage!"  << std::endl;
		_hitPoint -= amount - _armorDamageReduction;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (amount > _maxHitPoint - _hitPoint)
	{
		std::cout << "FR4G-TP " << "\"" << _name << "\"" << " repair " << _maxHitPoint - _hitPoint << " hit"  << std::endl;
		_hitPoint = 100;
	}
	else
	{
		_hitPoint += amount;
		std::cout << "FR4G-TP " << "\"" << _name << "\"" << " repair " << amount << " hit!"  << std::endl;
	}
}

const std::string &FragTrap::getName() const {
	return _name;
}

void FragTrap::setName(const std::string &name) {
	_name = name;
}

unsigned int FragTrap::getMeleeAttackDamage() const {
	return _meleeAttackDamage;
}

unsigned int FragTrap::getRangedAttackDamage() const {
	return _rangedAttackDamage;
}
