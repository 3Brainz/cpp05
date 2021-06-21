#include <Bureaucrat.hpp>
#include <Form.hpp>

int main()
{
	Bureaucrat	franco("franco", 100);
	Form		form1("formoso", 90, 90);

	std::cout << franco;
	franco.signForm(form1);
	for (int i = 0; i < 10; i += 1)
	{
		franco.incrementGrade();
		std::cout << franco;
	}
	franco.signForm(form1);
	franco.signForm(form1);
}