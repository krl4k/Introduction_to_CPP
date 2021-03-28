// CLion
// Created by Foster Grisella on 3/27/21 15:32.
//


#include "span.hpp"
#include <array>

span::span(int size) : _size(size){
}

span::span() : _size(0){
}

span::~span() {
}

span::span(const span &other) {
	*this = other;
}

span &span::operator=(const span &other) {
	if (this == &other)
		return *this;
	_size = other._size;
	_array = other._array;
	return *this;
}

int span::shortestSpan() {
	if (!_array.empty()){
		if (_array.size() > 1){
			_sortedArray = _array;
			std::sort(_sortedArray.begin(), _sortedArray.end());
			return (*++_sortedArray.begin() - *_sortedArray.begin());
		} else{
			return (*_array.begin());
		}
	}
	throw std::runtime_error("array is empty!");
}

int span::longestSpan() {
	if (!_array.empty()){
		if (_array.size() > 1){
			_sortedArray = _array;
			std::sort(_sortedArray.begin(), _sortedArray.end());
			return (*--_sortedArray.end() - *_sortedArray.begin());
		} else{
			return (*_array.begin());
		}
	}
	throw std::runtime_error("array is empty!");
}

void span::addNumber(const int &number) {
	if (_array.size() < _size)
	{
		_array.push_back(number);
	}
	else
		throw std::runtime_error("out of range!");
}

int &span::operator[](const int index) {
	return _array[index];
}

void span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (end - begin <= _size - _array.size())
		_array.insert(_array.end(), begin, end);
	else
	{
		_array.insert(_array.end(), begin, begin + (_size - _array.size()));
		throw std::runtime_error("out of range!");
	}
}

int span::getSize() const {
	return _array.size();
}

