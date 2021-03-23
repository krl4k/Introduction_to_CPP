// CLion
// Created by Foster Grisella on 3/23/21 10:16.
//


#include "Squad.hpp"


Squad::Squad() : _currentCount(0), _count(20){
	_units = new ISpaceMarine* [_count];
}


Squad::~Squad() {
	for (int i = 0; i < _currentCount; ++i) {
		delete _units[i];
	}
	std::cout << "Squad destructor!" << std::endl;
}



int Squad::getCount() const {
	return _currentCount;
}

ISpaceMarine *Squad::getUnit(int i) const {
	if (i >= 0 && i < _currentCount)
		return (_units[i]);
	return (nullptr);
}

int Squad::push(ISpaceMarine *marine) {
	if (_currentCount < _count)
	{
		_units[_currentCount] = marine;
		_currentCount++;
	} else
		std::cout << "Squad is Full!" << std::endl;
	return _currentCount;
}

Squad &Squad::operator=(const Squad &other) {
	if (this == &other)
		return *this;
	if (_units)
	{
		for (int i = 0; i < _currentCount; ++i) {
			if (_units[i])
				delete _units[i];
		}
	}
	_currentCount = other._currentCount;
	_count = other._count;
	if (other._units)
	{
		_units = new ISpaceMarine *[_count];
		for (int i = 0; i < _currentCount; ++i) {
			_units[i] = other._units[i]->clone();
		}
	}
	else
		_units = nullptr;
	return *this;
}

Squad::Squad(const Squad &other) {
	*this = other;
}

Squad::Squad(int count) : _count(count) {}
