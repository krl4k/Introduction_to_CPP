// CLion
// Created by Foster Grisella on 3/25/21 18:18.
//


#include "Cast.hpp"

Cast::Cast(const std::string &string) : _string(string){
}

Cast::Cast() {
}

Cast::~Cast() {
}

Cast::Cast(const Cast &other) {
	*this = other;
}

Cast &Cast::operator=(const Cast &other) {
	if (this == &other)
		return *this;
	return *this;
}

void Cast::toChar() const {
	std::cout << "char: ";
	int c;
	if (_string == "nan" || _string == "inf" || _string == "-inf")
		std::cout << "impossible" << std::endl;
	else {
		try {
			c = std::stoi(_string);
			if (std::isprint(static_cast<char>(c)))
				std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		} catch (std::exception &exception) {
			std::cout << "impossible" << std::endl;
		}
	}
}

void Cast::toInt() const {
	std::cout << "int: ";
	int c;
	if (_string == "nan" || _string == "inf" || _string == "-inf"){
		std::cout << "impossible" << std::endl;
	}
	else{
		try {
			c = std::stoi(_string);
			std::cout << c << std::endl;
		} catch (std::exception &exception) {
			std::cout << "impossible" << std::endl;
		}
	}

}

void Cast::toFloat() const {
	float c;
	std::cout << "float: ";
	if (_string == "nan" || _string == "inf" || _string == "-inf"){
		std::cout << std::stof(_string) << "f" << std::endl;
	}
	else{
		try {
			c = std::stof(_string);
			std::cout <<  std::fixed << std::setprecision(1) << c << "f" << std::endl;
		} catch (std::exception &exception) {
			std::cout << "impossible" << std::endl;
		}
	}

}

void Cast::toDouble() const {
	double c;
	std::cout << "double: ";
	if (_string == "nan" || _string == "inf" || _string == "-inf"){
		std::cout << std::stod(_string) << std::endl;
	}
	else{
		try {
			c = std::stod(_string);
			std::cout <<  std::fixed << std::setprecision(1) << c << std::showpoint << std::endl;
		} catch (std::exception &exception) {
			std::cout << "impossible" << std::endl;
		}
	}
}
