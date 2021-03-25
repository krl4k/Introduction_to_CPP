// CLion
// Created by Foster Grisella on 3/24/21 14:27.
//


#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form;
#include "Bureaucrat.hpp"

class Form {
public:

	Form();

	Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute);

	virtual ~Form();

	Form(const Form &other);

	Form &operator=(const Form &other);

	const std::string &getName() const;

	bool isSigned() const;


	int getGradeRequiredToSign() const;

	int getGradeRequiredToExecute() const;

	void beSigned(const Bureaucrat &bureaucrat);

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
		const char *what() const throw() ;
	private:
		std::string _msg;
	};

private:
	const std::string _name;
	bool			_signed;
	const int		_gradeRequiredToSign;
	const int	 	_gradeRequiredToExecute;
};


std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //TEST_FORM_HPP
