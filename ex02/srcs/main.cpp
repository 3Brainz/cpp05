#include <Bureaucrat.hpp>
#include <Form.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

int main()
{
	srand(time(NULL));
	Bureaucrat peppo("peppo", 5);
	PresidentialPardonForm presForm("Tenente");
	RobotomyRequestForm		roboForm("RandomGuy");
	ShrubberyCreationForm	shrbForm("alberelli");

	peppo.executeForm(presForm);
	peppo.signForm(presForm);
	peppo.executeForm(presForm);
	peppo.executeForm(roboForm);
	peppo.signForm(roboForm);
	peppo.executeForm(roboForm);
	peppo.executeForm(shrbForm);
	peppo.signForm(shrbForm);
	peppo.executeForm(shrbForm);
	// try
	// {
	// 	peppo.signForm(presForm);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	presForm.execute(peppo);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	peppo.signForm(roboForm);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	roboForm.execute(peppo);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}