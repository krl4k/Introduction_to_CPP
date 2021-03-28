// CLion
// Created by Foster Grisella on 3/27/21 12:34.
//


#ifndef TEST_EASYFIND_HPP
#define TEST_EASYFIND_HPP
#include <iostream>

template<typename T>
typename T::iterator &easyfind( T & array, int find){
	typename T::iterator it;
	if ((it = std::find(array.begin(), array.end(), find)) == array.end())
		throw std::runtime_error("not found!");
	return (it);
}

#endif //TEST_EASYFIND_HPP
