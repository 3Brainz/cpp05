#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <Intern.hpp>

int main()
{
	srand(time(NULL));
	Bureaucrat peppo("peppo", 5);
	Intern					intern;
	Form					*form1 = 0;

	try
	{
		form1 = intern.makeForm("a", "a");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// if (form1)
	// 	peppo.executeForm(*form1);
	try
	{
		form1 = intern.makeForm("robotomy request", "banana");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form1)
	{
		peppo.executeForm(*form1);
		peppo.signForm(*form1);
		peppo.executeForm(*form1);
	}
	delete(form1);
}