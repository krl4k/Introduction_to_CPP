// CLion
// Created by Foster Grisella on 3/22/21 20:47.
//

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
//	Character* me = new Character("me");
//	Enemy* b = new RadScorpion();
//	AWeapon* pr = new PlasmaRifle();
//	AWeapon* pf = new PowerFist();
//
//	std::cout << *me;
//	std::cout << *pr;
//	std::cout << *pf;
//
//	me->equip(pr);
//	std::cout << *me;
//	me->attack(b);
//	me->attack(b);
//	me->attack(b);
//	std::cout << *me;
//	std::cout << "enemyHP = " <<  b->getHp() << std::endl;




	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
//	return 0;


	std::cout << "\n\n\n" << std::endl;

	delete me;
//	delete b;
	delete pr;
	delete pf;

	return 0;
}

//me has 40 AP and is unarmed$
//* click click click *$
//me has 40 AP and wields a Plasma Rifle$
//me attacks RadScorpion with a Power Fist$
//* pschhh... SBAM! *$
//me has 32 AP and wields a Power Fist$
//me has 32 AP and wields a Plasma Rifle$
//me attacks RadScorpion with a Plasma Rifle$
//* piouuu piouuu piouuu *$
//me has 27 AP and wields a Plasma Rifle$
//me attacks RadScorpion with a Plasma Rifle$
//* piouuu piouuu piouuu *$
//* SPROTCH *$
//me has 22 AP and wields a Plasma Rifle$
