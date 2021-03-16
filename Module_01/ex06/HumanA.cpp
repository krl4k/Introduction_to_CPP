//
// Created by Foster Grisella on 3/16/21.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon) {}

void HumanA::attack() {
	std::cout << _name << " attack with " << _weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon) {
	_weapon = weapon;
}

