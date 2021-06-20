#include <Bureaucrat.hpp>

int main()
{
	Bureaucrat gino("gino");
	for (int i = 0; i < 160; i++)
	{
		std::cout << gino;
		gino.incrementGrade();
	}
}