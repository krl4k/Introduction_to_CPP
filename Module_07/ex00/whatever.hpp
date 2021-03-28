// CLion
// Created by Foster Grisella on 3/26/21 19:21.
//


#ifndef TEST_WHATEVER_HPP
#define TEST_WHATEVER_HPP

#include <string>
#include <iostream>

namespace my_std{
	template <class T>
	void swap(T &a, T &b) {
		T temp = a;
		a = b;
		b = temp;
	}
	template <typename T>
	const T& max(const T& a, const T& b)
	{
		return (a > b) ? a : b;
	}
	template <typename T>
	const T& min(const T& a, const T& b)
	{
		return (a < b) ? a : b;
	}
}

#endif //TEST_WHATEVER_HPP
