#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() :
			_name("generic_boy"),
			_grade(150)
{}

Bureaucrat::Bureaucrat(std::string const & name):
			_name(name),
			_grade(150)
{}

Bureaucrat::Bureaucrat(std::string const & name, int grade):
			_name(name)
{
	if (grade > 150)
		throw(GradetooLowException());
	if (grade < 1)
		throw(GradeTooHighException());
	else
		_grade = grade;
}

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
		_grade = toCopy._grade;
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
	if (_grade == 150)
		throw (GradetooLowException());
	else
		_grade += 1;
}

void				Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw (GradeTooHighException());
	else
		_grade -= 1;
}

void				Bureaucrat::signForm(Form & form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " successfully signed " << form.getName() << std::endl;
	}
	catch(const GradeExceptions & exc)
	{
		std::cerr << exc.what() << std::endl;
	}
}

/*exceptions*/

GradeExceptions Bureaucrat::GradeTooHighException()
{
	std::string ret = _name + " GradeTooHighBro";
	return(GradeExceptions(ret.c_str()));
}

GradeExceptions Bureaucrat::GradetooLowException()
{
	std::string ret = _name + " GradeTooLowMan";
	return (GradeExceptions(ret.c_str()));
}

std::ostream & operator << (std::ostream & stream, const Bureaucrat &bureaucrat)
{
	stream << bureaucrat.getName() << " has " << bureaucrat.getGrade() << " grade" << std::endl;
	return (stream);
}