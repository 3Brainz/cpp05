#include <Intern.hpp>

Intern::Intern()
{
	_formNames[0] = "presidential request";
	_formNames[1] = "shrub request";
	_formNames[2] = "robotomy request";
}

Intern::~Intern()
{}

Intern::Intern(Intern const &toCopy)
{
	(void)toCopy;
}

Intern &	Intern::operator = (const Intern & toCopy)
{
	(void)toCopy;
	if (this != &toCopy)
	{}
	return (*this);
}

/*funcs*/

Form		*Intern::makeForm(std::string const & formtype, std::string const & formTarget)
{
	Form *(Intern::*functions[])(std::string const &) = {
		&Intern::makePresidentialForm,
		&Intern::makeShrubForm,
		&Intern::makeRoboForm
	};
	for (int i = 0; i < 3; i++)
	{
		if (formtype == _formNames[i])
		{
			return(this->*functions[i])(formTarget);
		}
	}
	throw (InternException());
}

const char *	Intern::InternException::what() const throw()
{
	return ("intern Could not create Form");
}

Form	*Intern::makePresidentialForm(std::string const & target)
{
	PresidentialPardonForm *ret = new PresidentialPardonForm(target);
	return(ret);
}

Form	*Intern::makeShrubForm(std::string const & target)
{
	ShrubberyCreationForm *ret = new ShrubberyCreationForm(target);
	return(ret);
}

Form	*Intern::makeRoboForm(std::string const & target)
{
	RobotomyRequestForm *ret = new RobotomyRequestForm(target);
	return(ret);
}


