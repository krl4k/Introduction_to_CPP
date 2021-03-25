// CLion
// Created by Foster Grisella on 3/24/21 09:07.
//


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

# include <iostream>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat {
public:

	Bureaucrat();

	Bureaucrat(const std::string &name, int grade);

	virtual ~Bureaucrat();

	Bureaucrat(const Bureaucrat &other);

	Bureaucrat &operator=(const Bureaucrat &other);

	const std::string &getName() const;

	int getGrade() const;

	void incGrade();
	void decGrade();


	class GradeTooHighException : public std::exception{
	public:

		GradeTooHighException(const std::string &msg);
		~GradeTooHighException() throw();
		const char *what() const throw();
	private:
		std::string _msg;
	};

	class GradeTooLowException : public std::exception{
	public:
		GradeTooLowException(const std::string &msg);

		~GradeTooLowException() throw();
		const char *what() const throw();
	private:
		std::string _msg;
	};

	void signForm(Form& form);
	void executeForm(Form const & form);


private:
	const std::string _name;
	int _grade;
};


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif //TEST_BUREAUCRAT_HPP
