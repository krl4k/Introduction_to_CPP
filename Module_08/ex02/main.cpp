// CLion
// Created by Foster Grisella on 3/27/21 20:32.
//
#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>
#include <queue>
void test()
{
	std::deque<int> deque;
	deque.push_back(1);
	deque.push_back(2);
	deque.push_back(3);

	std::deque<int>::iterator it = --deque.end();
	std::cout << "stack????????" << std::endl;
	while (it != --deque.begin())
	{
		std::cout << *it << std::endl;
		--it;
	}
//	std::cout << "begin = " << *deque.begin() << std::endl;

//	std::cout << it++ << std::endl;
}

int main()
{
//	test();
//	return (0);



	MutantStack<int> mstack;
	for (int i = 0; i < 5; ++i) {
		mstack.push(i);
	}
	std::cout << "stack top  = "<< mstack.top() << std::endl;
	std::cout << "stack size = " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "" << std::endl;
	std::cout << "stack top  = "<< mstack.top() << std::endl;
	std::cout << "stack size = " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "begin = "<< *it << std::endl;
	std::cout << "end = "<< *--mstack.end() << std::endl;
	++it;
	--it;
	std::cout << "stack iteration" << std::endl;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout << "\nstack reverse iteration" << std::endl;
	it = --mstack.begin();
	--ite;
	while (ite != it){
		std::cout << *ite << " ";
		--ite;
	}
	std::cout << "" << std::endl;
	std::stack<int> s(mstack);

	return 0;
}