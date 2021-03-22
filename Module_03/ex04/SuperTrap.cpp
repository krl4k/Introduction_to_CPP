// CLion
// Created by Foster Grisella on 3/20/21 11:32.
//


#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : FragTrap(name), NinjaTrap(name) {
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoint = NinjaTrap::_energyPoint;
	_maxEnergyPoint = NinjaTrap::_maxEnergyPoint;
	_level = 1;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;

}

SuperTrap::~SuperTrap() {

}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap) {
	_maxHitPoint = superTrap._maxHitPoint;
	_maxEnergyPoint = superTrap._maxEnergyPoint;
	_name = superTrap._name;
	_energyPoint = superTrap._energyPoint;
	_level = superTrap._level;
	_meleeAttackDamage = superTrap._meleeAttackDamage;
	_rangedAttackDamage = superTrap._rangedAttackDamage;
	_armorDamageReduction = superTrap._armorDamageReduction;
	_damage = superTrap._damage;
	return *this;
}

SuperTrap::SuperTrap(const SuperTrap &other)  : ClapTrap(other), FragTrap(other), NinjaTrap(other) {
	*this = other;
}

