#include <Bureaucrat.hpp>
#include <Form.hpp>

int main()
{
	// try
	// {
	// 	Bureaucrat michele("michele", 200);
	// }
	// catch(const GradeExceptions& exc)
	// {
	// 	std::cerr << exc.what() << std::endl;
	// }
	
	// Bureaucrat gino("gino");
	// for (int i = 0; i < 160; i++)
	// {
	// 	std::cout << gino;
	// 	try
	// 	{
	// 		gino.incrementGrade();
	// 	}
	// 	catch(const GradeExceptions& exc)
	// 	{
	// 		std::cerr << exc.what() << std::endl;
	// 	}
	// }
	// for (int i = 0; i < 160; i++)
	// {
	// 	std::cout << gino;
	// 	try
	// 	{
	// 		gino.decrementGrade();
	// 	}
	// 	catch(const GradeExceptions& exc)
	// 	{
	// 		std::cerr << exc.what() << std::endl;
	// 	}
	// }
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