#pragma once
#include <iostream>
class Form;
#include <GradeExceptions.hpp>
#include <Bureaucrat.hpp>

class Form
{
public:
	Form();
	Form(std::string name);
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(Form const &toCopy);
	~Form();
	Form &	operator = (const Form & toCopy);
	/*getters*/
	std::string	getName(void) const;
	int			getExecGrade(void) const;
	int			getSignGrade(void) const;

	/*Exceptions*/
	GradeExceptions	GradeTooLowException(const Bureaucrat & bCrat);
	GradeExceptions	AlreadySignedException(const Bureaucrat & bCrat);
	/*funcs*/
	void		beSigned(const Bureaucrat & bCrat);

protected:

private:
	std::string	const	_name;
	int			const	_gradeToSign;
	int			const	_gradeToExec;
	bool				_signed;
};

std::ostream & operator << (std::ostream & stream, const Form &Form);
