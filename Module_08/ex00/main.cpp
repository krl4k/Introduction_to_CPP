// CLion
// Created by Foster Grisella on 3/27/21 11:33.
//
#include "easyfind.hpp"
#include <list>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <array>
#include <iostream>


void vector_test()
{
	std::vector<int> vector;

	for (int i = 0; i < 10; ++i) {
		vector.push_back(i);
	}
	std::vector<int>::iterator it;

	try {
		it = easyfind(vector, 1);
		std::cout << "FIND!!! = " << *it << std::endl;
	}catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
}


void set_test() {
	std::set<int> set;
	for (int i = 10; i < 20; ++i) {
		set.insert(i);
	}
	std::set<int>::iterator it = set.begin();
	try {
		it = easyfind(set, 18);
		std::cout << "FIND!!! = " << *it << std::endl;
	}catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
//	std::cout << *it << std::endl;
	set.insert(it, 2);
	for (std::set<int>::iterator iterator = set.begin(); iterator != set.end(); ++iterator) {
		std::cout << *iterator << std::endl;
	}
}

int main()
{
//	vector_test();
	set_test();

}


