//// CLion
//// Created by Foster Grisella on 3/23/21 09:29.
////
//
//#include <iostream>
//#include "Character.hpp"
//#include "RadScorpion.hpp"
//#include "SuperMutant.hpp"
//#include "PlasmaRifle.hpp"
//#include "PowerFist.hpp"
//#define NUM 5
//
////int main()
////{
////	Character* me = new Character("me");
////	std::cout << *me;
////	Enemy* b = new RadScorpion();
////	AWeapon* pr = new PlasmaRifle();
////	AWeapon* pf = new PowerFist();
////	me->equip(pr);
////	me->attack(b);
////	std::cout << *me;
////
////	me->attack(b);
////	std::cout << *me;
////
////	me->attack(b);
////	std::cout << *me;
////
////	me->attack(b);
////	std::cout << *me;
////
////	me->attack(b);
////	me->attack(b);
////
////	std::cout << *me;
////	std::cout << me->getWeapon()->getAPCost() << std::endl;
//////	me->attack(b);
//////	std::cout << *me;
////	return 0;
////}
////
//int main(){
//	Character* me = new Character("me");
//	AWeapon *plasmaRifle = new PlasmaRifle();
//	Enemy *enemy = new RadScorpion;
//
//
//	//add test
//	std::cout << "main " << &enemy << std::endl;
//
//	me->equip(plasmaRifle);
//
//	std::cout << "attack 1" << std::endl;
//	me->attack(enemy);
//	std::cout << "" << std::endl;
//
//	std::cout << "attack 2" << std::endl;
//	me->attack(enemy);
//	std::cout << "" << std::endl;
//
//	std::cout << "attack 3" << std::endl;
//	me->attack(enemy);
////	std::cout << "" << std::endl;
////
//	std::cout << "attack 4" << std::endl;
//	me->attack(enemy);
//	std::cout << "" << std::endl;
//
////
//	std::cout << "attack 5" << std::endl;
//	me->attack(enemy);
//	std::cout << "" << std::endl;
//
//	delete me;
//	delete plasmaRifle;
//	delete enemy;
//
//}