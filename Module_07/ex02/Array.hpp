// CLion
// Created by Foster Grisella on 3/26/21 20:14.
//


#ifndef TEST_ARRAY_HPP
#define TEST_ARRAY_HPP

#include <string>
#include <iostream>

template <class T>
class Array {
public:

	Array() : _size(0), _data(nullptr){};
	Array(unsigned int size) : _size(size) {
		_data = new T[_size];
	}

	virtual ~Array(){
		delete [] _data;
	};

	Array(const Array &other){
		*this = other;
	};

	Array &operator=(const Array &other){
		if (this == &other)
			return *this;
		if (_data)
			delete [] _data;
		_size = other._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_data[i] = other._data[i];
		}
		return *this;
	};

	T& operator[](unsigned int index)
	{
		if (index >= 0 && index < _size)
			return _data[index];
		throw std::out_of_range("out of range!!!");
	}

	unsigned int size() const{
		return _size;
	}


	unsigned int getSize() const {
		return _size;
	}

	T *getData() const {
		return _data;
	}

private:
	unsigned int _size;
	T *_data;
};



#endif //TEST_ARRAY_HPP
