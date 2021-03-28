// CLion
// Created by Foster Grisella on 3/25/21 12:23.
//

#include <string>
#include <iostream>
#include <iomanip>


void cast(const std::string &string)
{
	int i_num;
	float f_num;
	double d_num;
	try {
		i_num = std::stoi(string);
		i_num = static_cast<int>(i_num);
		if (std::isprint(i_num))
			std::cout << "char: " << static_cast<char>(i_num) << std::endl;
		else
			std::cout << "char:  Non displayable" << std::endl;
	} catch (std::exception &exception) {
		std::cerr << "char: "<< exception.what() << std::endl;
	}
	try {
		i_num = std::stoi(string);
		i_num = static_cast<int>(i_num);
		std::cout << "int: " << i_num << std::endl;
	} catch (std::exception &exception) {
		std::cerr << "int: "<< exception.what() << std::endl;
	}
	try {
		f_num = std::stof(string);
		f_num = static_cast<float >(f_num);
		std::cout <<  std::fixed << std::setprecision(1) << std::showpoint;
//		std::cout << std::setw();
		std::cout << "float: " << f_num << "f" << std::endl;
	} catch (std::exception &exception) {
		std::cerr << "float: "<< exception.what() << std::endl;
	}
	try {
		d_num = std::stod(string);
		std::cout << "double: " << f_num << std::endl;
	} catch (std::exception &exception) {
		std::cerr << "double: "<< exception.what() << std::endl;
	}
}
#include "Cast.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Cast cast(argv[1]);
		cast.toChar();
		cast.toInt();
		cast.toFloat();
		cast.toDouble();
	}else {
		std::cout << "Wrong count arguments!" << std::endl;
	}
	return (0);
}