#include "ZombieEvent.hpp"
#include "Zombie.hpp"

#define NUM_ZOMBIES 10

int main()
{
	std::srand(std::time(nullptr));

	ZombieEvent event;
	Zombie *zombieFirstType[NUM_ZOMBIES];
	Zombie *zombieSecondType[NUM_ZOMBIES];
	Zombie **zombieThirdType = new Zombie* [NUM_ZOMBIES];

	event.setZombieType(Zombie::Giant);
	zombieFirstType[0] = event.randomChump();
//	zombie->announce();
//	zombie = nullptr;
	std::cout << "------------------------------" << std::endl;

	for (int i = 1; i < NUM_ZOMBIES; ++i) {
		zombieFirstType[i] = event.newZombie("zombieFirstType");
	}
	event.setZombieType(Zombie::Big_Fire);
	for (int i = 0; i < NUM_ZOMBIES; ++i) {
		zombieSecondType[i] = event.newZombie("zombieFirstType");
	}
	for (int i = 0; i < NUM_ZOMBIES; ++i) {
		zombieFirstType[i]->announce();
	}
	for (int i = 0; i < NUM_ZOMBIES; ++i) {
		zombieSecondType[i]->announce();
	}
	event.setZombieType(Zombie::Screamers);
	for (int i = 0; i < NUM_ZOMBIES; ++i) {
		zombieThirdType[i] = event.randomChump();
	}
	for (int i = 0; i < NUM_ZOMBIES; ++i) {
		zombieThirdType[i]->announce();
	}

	for (int i = 0; i < NUM_ZOMBIES; ++i) {
		delete zombieFirstType[i];
		delete zombieSecondType[i];
		delete zombieThirdType[i];
	}
	delete []zombieThirdType;

	return (0);
}
