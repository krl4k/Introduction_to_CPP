// CLion
// Created by Foster Grisella on 3/23/21 14:44.
//


#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
//создание фабрики
	IMateriaSource* src = new MateriaSource();
	//создание объектов
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	//персонаж
	ICharacter* me = new Character("me");

	//указатель родительсского класса
	AMateria* tmp;

	me->equip(src->createMateria("ice"));
	//добавляем в первую ячейку массива и сохраняем указатель, тк будм удалять(unequip)
	AMateria *cure = src->createMateria("cure");
	me->equip(cure);

	std::cout << "" << std::endl;
	ICharacter* bob = new Character("bob");
	for (int i = 0; i < 4; ++i) {
		me->use(i, *bob);
	}
	std::cout << "" << std::endl;

	tmp = src->createMateria("ice");
	me->unequip(1);
	me->equip(tmp);

	for (int i = 0; i < 4; ++i) {
		me->use(i, *bob);
	}
	me->unequip(1);
	std::cout << "" << std::endl;
	for (int i = 0; i < 4; ++i) {
		me->use(i, *bob);
	}

	delete bob;
	delete me;
	delete src;
	delete cure;
	delete tmp;
	return 0;
}