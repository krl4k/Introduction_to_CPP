#include "Pony.hpp"
#include <iostream>
void ponyOnTheHeap()
{
	Pony *pony = new Pony("Roman", 5, "Pink");
	pony->doGreeting();
	pony->doMagic();
	delete pony;
}

void ponyOnTheStack()
{
	Pony pony("Tahir", 3, "Blue");
	pony.doGreeting();
	pony.doMagic();
}

int main()
{
	std::cout << "Pony on stack!" << std::endl;
	std::cout << "--------------" << std::endl;
	ponyOnTheStack();
	std::cout << "--------------" << std::endl;
	std::cout << "Pony on Heap!" << std::endl;
	std::cout << "--------------" << std::endl;
	ponyOnTheHeap();
	std::cout << "--------------" << std::endl;
}