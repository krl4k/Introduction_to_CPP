#include "ZombieHorde.hpp"

void getHorde(ZombieHorde *&zombieHorde, int count)
{
	zombieHorde = new ZombieHorde(20);
}

int main()
{
	//----first variant---------
	ZombieHorde *zombieHorde;
	getHorde(zombieHorde, 10);
	zombieHorde->announce();
	delete zombieHorde;
	//--------------------------

	//----first variant---------
//	ZombieHorde *zombieHorde = new ZombieHorde(10);
//	zombieHorde->announce();
//	delete zombieHorde;
	//---------------------------

	//-------Thurd variant-------
//	ZombieHorde zombieHorde(10);
//	zombieHorde.announce();
	//---------------------------


}