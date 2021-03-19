// CLion
// Created by Foster Grisella on 3/19/21 16:14.
//


#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
	_energyPoint = 100;
	_maxEnergyPoint = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "FR4G-TP: " <<  "\"" << _name << "\""  << ": Hahahahaha! I'm alive!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP: " <<  "\"" << _name << "\""  << ": I'll die the way I lived: annoying!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	std::string attacks[15] = {"This time it'll be awesome, I promise!",
							   "Hey everybody, check out my package!",
							   "Place your bets!",
							   "Defragmenting!",
							   "Recompiling my combat code!",
							   "Running the sequencer!",
							   "It's happening... it's happening!",
							   "It's about to get magical!",
							   "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
							   "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
							   "Some days, you just can't get rid of an obscure pop-culture reference.",
							   "Kill, reload! Kill, reload! KILL! RELOAD!",
							   "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
							   "All burn before the mighty Siren-trap!",
							   "It's time to phase you suckers out!"
	};
	int rand_attack = rand() % 15;
	if (_energyPoint >= 25)
	{
		std::cout 	<< "FR4G-TP: " <<  "\"" << _name << "\""  << ": " << "are you ready " "\"" << target << "\" ??? ";
		std::cout << attacks[rand_attack] << std::endl;
		_energyPoint -= 25;
	}
	else
	{
		std::cout 	<< "FR4G-TP: " <<  "\"" << _name << "\""  << ": " << "Oh, oh... Sorry " "\"" << target << "\". ";
		std::cout << "I`m no more shots left!" << std::endl;
	}
}

