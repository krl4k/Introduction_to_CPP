// CLion
// Created by Foster Grisella on 3/19/21 16:14.
//


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:

	FragTrap();

	FragTrap(const std::string &name);

	~FragTrap() ;

	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);

	void vaulthunter_dot_exe(const std::string &target);

	void rangedAttack(const std::string &target);
};


#endif //TEST_FRAGTRAP_HPP
