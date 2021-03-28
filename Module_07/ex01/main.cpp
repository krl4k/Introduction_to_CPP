// CLion
// Created by Foster Grisella on 3/26/21 19:50.
//

#include "iter.hpp"


int main()
{
	srand(time(0));
	{
		std::cout << "ints--------" << std::endl;
		int array[40];
		my_iter::iter(array, 40, my_iter::random_number);
		my_iter::iter(array, 40, my_iter::print);
		std::cout << "" << std::endl;
	}
	{
		std::cout << "double--------" << std::endl;
		double array[40];
		my_iter::iter(array, 40, my_iter::random_number);
		my_iter::iter(array, 40, my_iter::print);
		std::cout << "" << std::endl;
	}
	{
		std::cout << "float--------" << std::endl;
		float array[40];
		my_iter::iter(array, 40, my_iter::random_number);
		my_iter::iter(array, 40, my_iter::print);
		std::cout << "" << std::endl;
	}
	{
		std::cout << "float--------" << std::endl;
		std::string array[5] = {"123", "lol", "qwe", "jajaja", "vxcz"};
		my_iter::iter(array, 5, my_iter::print);
		std::cout << "" << std::endl;
	}

}

