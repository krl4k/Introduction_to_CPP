//
// Created by Foster Grisella on 3/16/21.
//

#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, _type));
}

Zombie *ZombieEvent::randomChump() {
	std::string _names[3] = {"Malloc", "Free", "printf"};
	int rand_int = std::rand() % 3;
	Zombie *zombie = newZombie(_names[rand_int]);
	zombie->announce();
	return (zombie);
}

void ZombieEvent::setZombieType(Zombie::Types type) {
	if (type == Zombie::Big_Fire)
		_type = std::string("Big_fire");
	if (type == Zombie::Giant)
		_type = std::string("Giant");
	if (type == Zombie::Screamers)
		_type = std::string("Screamers");
}
