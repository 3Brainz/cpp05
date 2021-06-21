#pragma once
#include <iostream>
#include <Form.hpp>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &toCopy);
	~PresidentialPardonForm();
	PresidentialPardonForm &	operator = (const PresidentialPardonForm & toCopy);
	void						toExecute(void)const;
protected:

private:
	std::string			_target;
};
