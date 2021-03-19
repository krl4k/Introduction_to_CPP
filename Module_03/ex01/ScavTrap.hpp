// CLion
// Created by Foster Grisella on 3/19/21 15:22.
//


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>

class ScavTrap {
public:

	ScavTrap();

	ScavTrap(const std::string &name);

	~ScavTrap();

	ScavTrap(const ScavTrap &other);

	ScavTrap &operator=(const ScavTrap &other);

	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer() const;

	unsigned int getMeleeAttackDamage() const;

	unsigned int getRangedAttackDamage() const;

	const std::string &getName() const;

private:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_maxHitPoint;
	unsigned int	_energyPoint;
	unsigned int	_maxEnergyPoint;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
};


#endif //TEST_SCAVTRAP_HPP
