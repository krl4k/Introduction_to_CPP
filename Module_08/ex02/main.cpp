// CLion
// Created by Foster Grisella on 3/27/21 20:32.
//
#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(3);
	std::cout << "stack top = "<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << "stack size = " << mstack.size() << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
//[...]
//	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << *ite << std::endl;
	++it;
	--it;
	std::cout << "stack iteration" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
//	std::list<int> list;
//	std::list<int>::iterator ite = list.begin();
//	ite--;

	return 0;
}