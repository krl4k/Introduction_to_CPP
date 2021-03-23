// CLion
// Created by Foster Grisella on 3/22/21 20:47.
//

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#define NUM 5


int main()
{
	Character **myArmy = new Character *[NUM];
	AWeapon *weapons[2];
	weapons[0] = new PlasmaRifle();
	weapons[1] = new PowerFist();
	Enemy **enemyHorde = new Enemy *[NUM];

	for (int i = 0; i < NUM; ++i) {
		myArmy[i] = new Character("soldier" + std::to_string(i + 1));

		if (i % 2)
			enemyHorde[i] = new RadScorpion();
		else
			enemyHorde[i] = new SuperMutant();
	}
	for (int i = 0; i < NUM; ++i) {
		if (i % 2)
			myArmy[i]->equip(weapons[0]);
		else
			myArmy[i]->equip(weapons[1]);
		std::cout << *myArmy[i];
	}

	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < NUM; ++i) {
		myArmy[i]->attack(enemyHorde[i]);
		myArmy[i]->attack(enemyHorde[i]);
	}
	std::cout << "-----------------------------" << std::endl;


	for (int i = 0; i < NUM; ++i) {
		std::cout << *myArmy[i];
	}

	int min = enemyHorde[0]->getHp();
	Enemy *minHP;
	for (int i = 1; i < NUM; ++i) {
		if (enemyHorde[i]->getHp() < min)
		{
			min = enemyHorde[i]->getHp();
			minHP = enemyHorde[i];
		}
	}

	std::cout << "finishing off!!!!" << std::endl;
	for (int i = 0; i < NUM; ++i) {
		if (minHP->getHp() - myArmy[i]->getWeapon()->getDamage() > 0)
			myArmy[i]->attack(minHP);
	}

	std::cout << "Zombie min HP = " << minHP->getHp() << std::endl;

	std::cout << "RELOAD!" << std::endl;
	for (int i = 0; i < NUM; ++i) {
		myArmy[i]->recoverAP();
	}

	for (int i = 0; i < NUM; ++i) {
		if (enemyHorde[i])
			std::cout << "Zombie HP = " << enemyHorde[i]->getHp() << std::endl;
	}

	for (int i = 0; i < NUM; ++i) {
		myArmy[i]->attack(enemyHorde[i]);
//		myArmy[i]->attack(enemyHorde[i]);
	}

	for (int i = 0; i < NUM; ++i) {
		if (enemyHorde[i])
			std::cout << "Zombie HP = " << enemyHorde[i]->getHp() << std::endl;
	}

	for (int i = 0; i < NUM; ++i) {
		delete myArmy[i];
		if (enemyHorde[i])
			delete enemyHorde[i];
	}
	delete [] myArmy;
	delete [] enemyHorde;
	delete weapons[0];
	delete weapons[1];
	return 0;
}
