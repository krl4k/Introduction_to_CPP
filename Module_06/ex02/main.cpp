// CLion
// Created by Foster Grisella on 3/26/21 14:33.
//
#include <iostream>
#include <string>


class Base{
public:
	virtual ~Base() {};
};
class A : public Base{
//public:
//	std::string name;
//	const std::string &getName() const {
//		return name;
//	}
};

class B : public Base{
};

class C : public Base{
};

Base * generate(void) {
	switch (rand() % 3) {
		case 0:
			std::cout << "Class A generate" << std::endl;
			return new A;
		case 1:
			std::cout << "Class B generate" << std::endl;
			return new B;
		case 2:
			std::cout << "Class C generate" << std::endl;
			return new C;
	}
	return nullptr;
}

void identify_from_pointer (Base * p){
	if (dynamic_cast<A *>(p)){
		std::cout << "Its class A" << std::endl;
	}
	if (dynamic_cast<B *>(p)){
		std::cout << "Its class B" << std::endl;
	}
	if (dynamic_cast<C *>(p)){
		std::cout << "Its class C" << std::endl;
	}
}

void identify_from_reference( Base & p){

	if (dynamic_cast<A *>(dynamic_cast<Base *>(&p))){
		std::cout << "Its class A" << std::endl;
	}
	if (dynamic_cast<B *>(&p)){
		std::cout << "Its class B" << std::endl;
	}
	if (dynamic_cast<C *>(&p)){
		std::cout << "Its class C" << std::endl;
	}
}

//void printName(Base &p)
//{
//	A *a;
//	if (a = dynamic_cast<A *>(dynamic_cast<Base *>(&p))){
//		std::cout << "AAAAA  =  " << a->getName() << std::endl;
//	}
//	if (dynamic_cast<B *>(&p)){
//		std::cout << "b" << std::endl;
//	}
//	if (dynamic_cast<C *>(&p)){
//		std::cout << "c" << std::endl;
//	}
//}

int main()
{
	srand(time(0));
	for (int i = 0; i < 5; ++i) {
		Base *base = generate();
		/*
		A *a;
		if (a = dynamic_cast<A *>(dynamic_cast<Base *>(base))){
			a->name = "qwertyu";
		}
		printName(*base);
		*/
		identify_from_pointer(base);
		identify_from_reference(*base);
		std::cout << "----------------------------" << std::endl;
	}
	
	return (0);
}