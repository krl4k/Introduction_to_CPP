// CLion
// Created by Foster Grisella on 3/18/21 11:43.
//


#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called " << std::endl;
	_fixedPointValue = other._fixedPointValue;
}


Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_fixedPointValue = other._fixedPointValue;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}


int Fixed::getFixedPointValue() const {
	return _fixedPointValue;
}
