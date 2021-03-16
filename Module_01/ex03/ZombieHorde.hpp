#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde {
private:
	Zombie **_zombie;
	int		_count;
public:
	void announce() const;

	ZombieHorde(int count);
	~ZombieHorde();
};


#endif //TEST_ZOMBIEHORDE_HPP
