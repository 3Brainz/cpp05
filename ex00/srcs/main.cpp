#include <Bureaucrat.hpp>

int main()
{
	try
	{
		Bureaucrat michele("michele", 200);
	}
	catch(const GradeExceptions& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	
	Bureaucrat gino("gino");
	for (int i = 0; i < 160; i++)
	{
		std::cout << gino;
		try
		{
			gino.incrementGrade();
		}
		catch(const GradeExceptions& exc)
		{
			std::cerr << exc.what() << std::endl;
		}
	}
	for (int i = 0; i < 160; i++)
	{
		std::cout << gino;
		try
		{
			gino.decrementGrade();
		}
		catch(const GradeExceptions& exc)
		{
			std::cerr << exc.what() << std::endl;
		}
	}
}