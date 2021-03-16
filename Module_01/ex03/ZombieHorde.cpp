#include "ZombieHorde.hpp"
#include <cstdlib>

void ZombieHorde::announce() const {
	for (int i = 0; i < _count; ++i) {
		_zombie[i]->announce();
	}
}

ZombieHorde::ZombieHorde(int count) : _count(count) {
	_zombie = new Zombie *[_count];
	srand(time(nullptr));
	std::string names[3] = {"Malloc", "Free", "printf"};
	std::string types[3] = {"forbidden", "undeclored", "explicit"};

	for (int i = 0; i < _count; ++i) {
		int rand_int = std::rand() % 3;
		_zombie[i] = new Zombie(names[rand_int], types[rand_int]);
	}
}

ZombieHorde::~ZombieHorde() {
	for (int i = 0; i < _count; ++i) {
		delete _zombie[i];
	}
	delete [] _zombie;
}
