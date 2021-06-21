#include <GradeExceptions.hpp>

GradeExceptions::GradeExceptions(const std::string & errLine) : _errline(errLine)
{
}

const char *GradeExceptions::what() const throw()
{
	return (_errline.c_str());
}