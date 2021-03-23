// CLion
// Created by Foster Grisella on 3/22/21 19:40.
//


#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apCost, int damage) : _name(name), _APCost(apCost), _Damage(damage) {
	std::cout << "weapon constructor" << std::endl;
}

AWeapon::AWeapon(const AWeapon &other) {
	*this = other;
}

AWeapon &AWeapon::operator=(const AWeapon &other) {
	if (this == &other)
		return *this;
	_name = other._name;
	_APCost = other._APCost;
	_Damage = other._Damage;
	return *this;
}

AWeapon::~AWeapon() {
	std::cout << "AWeapon destructor!" << std::endl;
}

const std::string &AWeapon::getName() const {
	return _name;
}

int AWeapon::getAPCost() const {
	return _APCost;
}

int AWeapon::getDamage() const {
	return _Damage;
}

std::ostream &operator<<(std::ostream &os, const AWeapon &weapon) {
	os << "_name: " << weapon.getName() << " _APCost: " << weapon.getAPCost() << " _Damage: " << weapon.getDamage() << std::endl;
	return os;
}

