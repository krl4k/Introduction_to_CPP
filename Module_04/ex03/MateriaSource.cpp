// CLion
// Created by Foster Grisella on 3/23/21 14:23.
//


#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; ++i) {
		if (_source[i] == nullptr)
		{
			_source[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if (_source[i])
			if (_source[i]->getType() == type)
				return (_source[i]->clone());
	}
	return nullptr;
}

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		_source[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (_source[i])
			delete _source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		if (_source[i])
		{
			delete _source[i];
			_source[i] = nullptr;
		}
	}
	return *this;
}
