#pragma once
#include <iostream>
class Bureaucrat;
#include <GradeExceptions.hpp>
#include <Form.hpp>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string const & name);
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const &toCopy);
	~Bureaucrat();
	Bureaucrat &	operator = (const Bureaucrat & toCopy);
	/*getters*/
	std::string	getName(void) const;
	int			getGrade(void) const;
	/*Funcs*/
	void		incrementGrade(void);
	void		decrementGrade(void);
	void		signForm(Form & form) const;
	/*Exceptions*/
	GradeExceptions	GradeTooHighException();
	GradeExceptions	GradetooLowException();
protected:

private:
	std::string const	_name;
	int					_grade;
};


std::ostream & operator << (std::ostream & stream, const Bureaucrat &Bureaucrat);
