#pragma once
#include <iostream>
# include <Form.hpp>
# include <PresidentialPardonForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <ShrubberyCreationForm.hpp>

class Intern
{
public:
	Intern();
	Intern(Intern const &toCopy);
	~Intern();
	Intern &	operator = (const Intern & toCopy);
	class InternException : public std::exception{const char * what() const throw();};
	/*funcs*/
	Form 	*makeForm(std::string const & formType, std::string const & formTarget);
protected:

private:
	Form	*makePresidentialForm(std::string const & target);
	Form	*makeShrubForm(std::string const & target);
	Form	*makeRoboForm(std::string const & target);
	std::string	 _formNames[3];
};