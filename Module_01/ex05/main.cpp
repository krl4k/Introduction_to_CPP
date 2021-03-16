#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>
int main()
{
	Human human;
	Brain brain;

	std::cout << human.identify() << std::endl;
	std::cout << human.getBrain()->identify() << std::endl;
}