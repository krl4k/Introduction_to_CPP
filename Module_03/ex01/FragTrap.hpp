// CLion
// Created by Foster Grisella on 3/19/21 13:38.
//


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>

class FragTrap {
public:

	FragTrap();

	FragTrap(const std::string &name);

	~FragTrap();

	FragTrap(const FragTrap &other);

	FragTrap &operator=(const FragTrap &other);

	void vaulthunter_dot_exe(std::string const & target);
	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string &getName() const;

	void setName(const std::string &name);

	unsigned int getMeleeAttackDamage() const;

	unsigned int getRangedAttackDamage() const;

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


#endif
