#pragma once
#include <iostream>
#include <fstream>
#include <Form.hpp>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &toCopy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &	operator = (const ShrubberyCreationForm & toCopy);
	void					toExecute(void) const;
protected:

private:
	std::string			_target;
};
