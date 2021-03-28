// CLion
// Created by Foster Grisella on 3/26/21 20:15.
//

#include <string>
#include <iostream>
#include "Array.hpp"

void ints()
{
	std::cout << "INts" << std::endl;
	Array<int> array(5);
	for (uint i = 0; i < array.size(); ++i) {
		array[i] = i;
	}
	for (uint i = 0; i < array.size(); ++i) {
		try {
			std::cout << array[i] << " ";
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}
	std::cout << "" << std::endl;
	try {
		std::cout << array[array.size()] << " ";
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}

	Array<int>array1;
	array1 = array;
	for (uint i = 0; i < array1.size(); ++i) {
		std::cout << array1[i] << " ";
	}
	std::cout << "" << std::endl;
}

void doubles()
{
	std::cout << "doubles" << std::endl;
	Array<double> array(10);
	for (uint i = 0; i < array.size(); ++i) {
		array[i] =  static_cast <double > (rand()) / (static_cast <double> (RAND_MAX/ 10));;
	}
	for (uint i = 0; i < array.size(); ++i) {
		try {
			std::cout << array[i] << " ";
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}
	std::cout << "" << std::endl;
	try {
		std::cout << array[array.size()] << " ";
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "" << std::endl;
}

void strings()
{
	std::cout << "strings" << std::endl;
	Array<std::string> array(5);
	array[0] = "123";
	array[1] = "rtie";
	array[2] = "vsf";

	for (uint i = 0; i < array.size(); ++i) {
		try {
			std::cout << array[i] << " ";
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}
	std::cout << "" << std::endl;
	try {
		std::cout << array[array.size() - 1] << " ";
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "" << std::endl;
}

int main()
{
	ints();
//	doubles();
//	strings();
	return (0);

}

