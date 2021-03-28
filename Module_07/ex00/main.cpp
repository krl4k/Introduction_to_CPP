// CLion
// Created by Foster Grisella on 3/26/21 19:21.
//

#include "whatever.hpp"


int main( void ) {
	{
		std::cout << "ints" << std::endl;
		int a = 2;
		int b = 1;
		my_std::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << my_std::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << my_std::max(a, b) << std::endl;
	}
	{
		std::cout << "strings-------------" << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		my_std::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << my_std::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << my_std::max(c, d) << std::endl;
	}
	{
		std::cout << "floats" << std::endl;
		float a = 2.123;
		float b = 3.754;
		my_std::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << my_std::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << my_std::max(a, b) << std::endl;
	}
	return 0;
}

