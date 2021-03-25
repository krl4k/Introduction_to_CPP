// CLion
// Created by Foster Grisella on 3/25/21 09:54.
//


#ifndef TEST_INTERN_HPP
#define TEST_INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
public:

	Intern();

	virtual ~Intern();

	Form *makeForm(const std::string &name, const std::string &target);

	struct FormDoesNotExist: std::exception{
		const char *what() const throw();
	};

private:
	struct s_forms {
		std::string _type;
		Form *(*createForm)(const std::string &name);
	} _sForms[3];

	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
};


#endif //TEST_INTERN_HPP
