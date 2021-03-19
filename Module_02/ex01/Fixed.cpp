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

Fixed::Fixed(int number) {
	std::cout << "Int constructor called " << std::endl;
	_fixedPointValue = number * (1 << _numberOfFractionalBits);
}

Fixed::Fixed(float number) {
	std::cout << "Float constructor called " << std::endl;
	_fixedPointValue = static_cast<int>(roundf((number) * (1 << _numberOfFractionalBits)));
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
	return _fixedPointValue;
}

float Fixed::toFloat(void) const {
	return ((float)(_fixedPointValue) / (256));
}

int Fixed::toInt(void) const {
	return (_fixedPointValue / (1 << _numberOfFractionalBits));
}

std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}