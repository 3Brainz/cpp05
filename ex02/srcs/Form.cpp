#include <Form.hpp>

Form::Form() :
		_name("generic"),
		_gradeToSign(150),
		_gradeToExec(150),
		_signed(false)
{}

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
		_name(name),
		_gradeToSign(gradeToSign),
		_gradeToExec(gradeToExec),
		_signed(false)
{}

Form::~Form()
{}

Form::Form(Form const &toCopy) :
		_name(toCopy._name),
		_gradeToSign(toCopy._gradeToSign),
		_gradeToExec(toCopy._gradeToExec),
		_signed(false)
{
}

Form &	Form::operator = (const Form & toCopy)
{
	if (this != &toCopy)
	{
		_signed = toCopy._signed;
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Form &form)
{
	stream << form.getName() << " needs " << form.getSignGrade() << " to be signed and " << form.getExecGrade()  << " grade tto be executed" << std::endl; 
	return (stream);
}

/*getters*/

std::string	Form::getName(void) const
{
	return (_name);
}

int			Form::getExecGrade(void) const
{
	return (_gradeToExec);
}

int			Form::getSignGrade(void) const
{
	return (_gradeToSign);
}

/**/

GradeExceptions	Form::GradeTooLowException(const Bureaucrat & bCrat)
{
	std::string ret = bCrat.getName() + " can't sign " + _name + " because his grade is too low";
	return (GradeExceptions(ret.c_str()));
}

GradeExceptions Form::AlreadySignedException(const Bureaucrat & bCrat)
{
	std::string ret = bCrat.getName() + " can't sign " + _name + " because it's already signed";
	return(GradeExceptions(ret.c_str()));
}

GradeExceptions Form::NumeratedExceptions(const Bureaucrat & bCrat, int nu) const
{
	std::string ret;
	switch (nu)
	{
	case 0:
		ret = _name + " can't be executed by " + bCrat.getName() + " because it's not signed";
		break;
	case 1:
		ret = _name + " can't be executed because " + bCrat.getName() + " grade is too low";
		break;
	default:
		ret = _name + " generic error";
		break;
	}
	return (GradeExceptions(ret.c_str()));
}

/*funcs*/

void		Form::beSigned(const Bureaucrat & bCrat)
{
	if (bCrat.getGrade() > _gradeToSign)
	{
		throw (GradeTooLowException(bCrat));
	}
	else if (_signed == true)
		throw (AlreadySignedException(bCrat));
	else
		_signed = true;
}

void		Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw (NumeratedExceptions(executor, 0));
	else if (executor.getGrade() > _gradeToExec)
		throw (NumeratedExceptions(executor, 1));
	else
		this->toExecute();
}

void		Form::toExecute(void) const
{}