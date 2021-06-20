#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() :
			_name("generic_boy"),
			_grade(150)
{}

Bureaucrat::Bureaucrat(std::string const & name):
			_name(name),
			_grade(150)
{}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy) :
			_name(toCopy._name),
			_grade(toCopy._grade)
{
}

Bureaucrat &	Bureaucrat::operator = (const Bureaucrat & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

/*getters*/

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

/*funcs*/

void				Bureaucrat::decrementGrade(void)
{
	try
	{
		if (_grade == 150)
			throw (GradetooLowException());
		else
			_grade += 1;
	}
	catch(BureaucratExceptions & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

void				Bureaucrat::incrementGrade(void)
{
	try
		{
			if (_grade == 1)
				throw (GradeTooHighException());
			else
				_grade -= 1;
		}
		catch(BureaucratExceptions & exc)
		{
			std::cerr << exc.what() << std::endl;
		}
}

/*exceptions*/

BureaucratExceptions Bureaucrat::GradeTooHighException()
{
	return(BureaucratExceptions("GradeTooHighBro"));
}

BureaucratExceptions Bureaucrat::GradetooLowException()
{
	return (BureaucratExceptions("GradeTooLowMan"));
}

std::ostream & operator << (std::ostream & stream, const Bureaucrat &bureaucrat)
{
	stream << bureaucrat.getName() << " has " << bureaucrat.getGrade() << " grade" << std::endl;
	return (stream);
}