// CLion
// Created by Foster Grisella on 3/19/21 16:14.
//


#ifndef TEST_FRAGTRAP_HPP
#define TEST_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:

	FragTrap();

	FragTrap(const std::string &name);

	~FragTrap() ;

	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);

	void vaulthunter_dot_exe(const std::string &target);
};


#endif //TEST_FRAGTRAP_HPP
