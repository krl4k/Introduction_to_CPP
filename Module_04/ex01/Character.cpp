// CLion
// Created by Foster Grisella on 3/22/21 20:20.
//


#include "Character.hpp"

Character::Character() {

}

Character::Character(const std::string &name) : _name(name), _ap(40), _weapon(nullptr){
}

Character &Character::operator=(const Character &other) {
	if (this == &other)
		return *this;
	_ap = other._ap;
	_name = other._name;
	_weapon = other._weapon;
	return *this;
}

Character::Character(const Character &other) {
	*this = other;
}

Character::~Character() {

}


void Character::recoverAP() {
	if (_ap + 10 <= 40)
		_ap += 10;
	else
		_ap = 40;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (_weapon && enemy){
		if (_ap >= _weapon->getAPCost())
		{
			std::cout << _name << " attacks " << enemy->getType() << " with " << _weapon->getName() << std::endl;
			_weapon->attack();
			_ap -= _weapon->getAPCost();
		}
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHp() == 0)
		{
			delete enemy;
		}
	}

}

const std::string &Character::getName() const {
	return _name;
}


int Character::getAp() const {
	return _ap;
}

AWeapon *Character::getWeapon() const {
	return _weapon;
}

std::ostream &operator<<(std::ostream &os, const Character &character) {
	os << character.getName() << " has " << character.getAp() << " AP and ";
	if (character.getWeapon() == nullptr)
		os << "is unarmed" << std::endl;
	else
		os << "wields a " << character.getWeapon()->getName() << std::endl;
	return os;
}

