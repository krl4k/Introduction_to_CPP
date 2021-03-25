// CLion
// Created by Foster Grisella on 3/24/21 18:28.
//



#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
void shrub_test();

void robo_test();

void presidential_test();

int main()
{
//	shrub_test();
	robo_test();
//	presidential_test();
}

void presidential_test() {
	PresidentialPardonForm *presidentialPardonForm;
	Bureaucrat *bureaucrat;
	try {
		presidentialPardonForm = new PresidentialPardonForm("LOL");
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << *presidentialPardonForm << std::endl;
	try {
		bureaucrat = new Bureaucrat("Buro", 1);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		bureaucrat->signForm(*presidentialPardonForm);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		bureaucrat->executeForm(*presidentialPardonForm);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << *presidentialPardonForm << std::endl;
}

void robo_test() {
	try {
		RobotomyRequestForm robotomyRequestForm("HIQWE");
		try {
			std::cout << robotomyRequestForm << std::endl;
			Bureaucrat bureaucrat("Buro", 10);
			try {
				bureaucrat.signForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.signForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.executeForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.executeForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}
	catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
}

void shrub_test() {
	try {
		ShrubberyCreationForm shrubberyCreationForm("George");
		std::cout << shrubberyCreationForm << std::endl;
		try {
			Bureaucrat bureaucrat("Buro", 130);

			try {
				bureaucrat.signForm(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
//	-----------exception
			try {
				bureaucrat.signForm(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
//	------------------------------
			try {
				bureaucrat.executeForm(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		} catch (std::exception &exception) {
			std::cerr << exception.what() << std::endl;
		}
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}

}
