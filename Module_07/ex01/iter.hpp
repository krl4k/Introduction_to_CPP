// CLion
// Created by Foster Grisella on 3/26/21 19:48.
//


#ifndef TEST_ITER_HPP
#define TEST_ITER_HPP

#include <iostream>
#include <cstdlib>

namespace my_iter{
	template<typename T>
	void print(T elem){
		std::cout << elem << " ";
	}
	template<typename T>
	void random_number(T &elem){
		elem =  static_cast <T> (rand()) / (static_cast <T> (RAND_MAX/ 10));
	}
	template<typename T>
	void iter(T *array, int len, void (func)(T &elem)){
		for (int i = 0; i < len; ++i) {
			func(array[i]);
		}
	}

}

#endif //TEST_ITER_HPP
