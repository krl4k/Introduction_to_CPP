#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

class ZombieEvent {
private:
//	Zombie::Types type;
	std::string _type;

public:
	Zombie *newZombie(std::string name);
	void setZombieType(Zombie::Types );
	Zombie *randomChump();
};


#endif
