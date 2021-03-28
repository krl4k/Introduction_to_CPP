// CLion
// Created by Foster Grisella on 3/27/21 21:28.
//


#ifndef TEST_MUTANTSTACK_HPP
#define TEST_MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public:
	class iterator;
	typedef typename MutantStack<T>::iterator iterator;
	MutantStack(): std::stack<T>(){};
	virtual ~MutantStack(){};
	MutantStack(const MutantStack &other){
		*this = other;
	};
	MutantStack &operator=(const MutantStack &other){
		if (this == &other)
			return *this;
		this->c = other.c;
		return *this;
	};


	class iterator :std::iterator<std::bidirectional_iterator_tag, T>{
	public:
		iterator(T *c){
			curIter = c;
		}
		iterator &operator++(int) {
			return *curIter++;
		}
		iterator &operator++() {
			iterator temp(curIter);
//			++curIter;
			this->operator++();
			return temp;
		}
		iterator &operator--(int) {
			return *--curIter;
		}
		iterator &operator--() {
			iterator temp(curIter);
//			--curIter;
			this->operator--();
			return temp;
		}
		bool operator!=(const iterator &it) {
			return (curIter != it.curIter);
		}

		bool operator!=(const MutantStack::iterator &rhs) const {
			return !(rhs == *this);
		}
		bool operator==(const iterator &it) {
			return (curIter == it.curIter);
		}
		T &operator*(){
			return *curIter;
		}
		private:
			T *curIter;
	};

	MutantStack<T>::iterator begin() {
		return &this->top();
	}
	MutantStack<T>::iterator end() {
		iterator temp = this->begin();
		for (int i = 0; i < this->size(); ++i) {
			++temp;
		}
		return temp;
	}
private:

};


#endif //TEST_MUTANTSTACK_HPP
