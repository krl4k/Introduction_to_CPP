// CLion
// Created by Foster Grisella on 3/23/21 13:22.
//


#include "Character.hpp"

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (_materia[i] == nullptr) {
			_materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		if (_materia[idx])
			_materia[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4)
		if (_materia[idx])
			_materia[idx]->use(target);
}

const std::string &Character::getName() const {
	return _name;
}

Character::Character() {

}

Character::Character(const std::string &name) : _name(name) {
	for (int i = 0; i < 4; ++i) {
		_materia[i] = nullptr;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (_materia[i])
			delete _materia[i];
	}
}

Character &Character::operator=(const Character &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		if (_materia[i])
			delete _materia[i];
	}
	_name = other._name;
	for (int i = 0; i < 4; ++i) {
		_materia[i] = other._materia[i];
	}
	return *this;
}

Character::Character(const Character &other) {
	*this = other;
}

