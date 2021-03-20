// CLion
// Created by Foster Grisella on 3/19/21 18:04.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	FragTrap fragTrap("Kirill");
	fragTrap.meleeAttack("lol");
	fragTrap.vaulthunter_dot_exe("dsadas");

	fragTrap.takeDamage(10);
	fragTrap.beRepaired(10000);

	FragTrap fragTrap1 = fragTrap;

	ScavTrap scavTrap("tahir");

	ClapTrap clapTrap = scavTrap;
	ClapTrap clapTrap1 = fragTrap;
	ScavTrap scavTrap1 = scavTrap;


//	ClapTrap *clapTrap = new FragTrap("123"); // не будет работать без virtual!
//
//	ScavTrap scavTrap("kirill");
//	scavTrap.meleeAttack("lol");




}
