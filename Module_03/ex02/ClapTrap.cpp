// CLion
// Created by Foster Grisella on 3/19/21 16:06.
//


#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "CLP-TP Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name) , _hitPoint(100),_maxHitPoint(100), _level(1)
{
	std::cout << "CLP-TP Constructor called!" << std::endl;
	srand(time(0));
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLP-TP Destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
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


ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > _hitPoint + _armorDamageReduction)
	{
		_damage = _hitPoint;
		_hitPoint = 0;
	}
	else
	{
		_damage = amount - _armorDamageReduction;
		_hitPoint -= amount - _armorDamageReduction;
	}
	std::cout << "Trap " << "\"" << _name << "\"" << " take " << _damage << " damage!"  << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount) {
	if (amount > _maxHitPoint - _hitPoint)
	{
		_repairedHit = _maxHitPoint - _hitPoint;
		_hitPoint = 100;
	}
	else
	{
		_hitPoint += amount;
		_repairedHit = amount;
	}
	std::cout << "SDV-TP " << "\"" << _name << "\"" << " repair " << _repairedHit << " hit"  << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << "TRAP: " << "\"" << _name << "\"" << ": "
			  << "Meet professor punch! "
			  << "Attacks " << "\"" << target << "\""
			  << " at melee, causing "
			  << _meleeAttackDamage
			  << " points of damage!"
			  << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout 	<< "TRAP: " << _name << ": "
				 << "Coffee? Black... like my soul."
				 << "Attacks " << "\"" << target << "\""
				 << " at range, causing "
				 << _rangedAttackDamage
				 << " points of damage!"
				 << std::endl;
}


