#include <BureaucratExceptions.hpp>

BureaucratExceptions::BureaucratExceptions(const std::string & errLine) : _errline(errLine)
{
}

const char *BureaucratExceptions::what() const throw()
{
	return (_errline.c_str());
}