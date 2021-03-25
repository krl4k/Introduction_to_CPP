// CLion
// Created by Foster Grisella on 3/24/21 18:28.
//



#include"Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *form;
	Bureaucrat *bureaucrat;
	std::string types[3] = {"PresidentialPardon", "ShrubberyCreation", "RobotomyRequest"};
	std::string targets[3] = {"lol", "printf", "forbidden"};

	try {
		bureaucrat = new Bureaucrat("Buro", 1);
		for (int i = 0; i < 3; ++i) {
			try {
				form = intern.makeForm(types[i], targets[i]);
				std::cout << *form;
				std::cout << *bureaucrat;
				std::cout << "" << std::endl;
				try {
					bureaucrat->signForm(*form);
				}catch (std::exception &exception){
					std::cerr << exception.what() << std::endl;
				}
				try {
					bureaucrat->executeForm(*form);
				}catch (std::exception &exception){
					std::cerr << exception.what() << std::endl;
				}
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		}
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}

}
