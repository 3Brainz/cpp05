#pragma once
#include <iostream>
#include <Form.hpp>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &toCopy);
	~RobotomyRequestForm();
	RobotomyRequestForm &	operator = (const RobotomyRequestForm & toCopy);
	void						toExecute(void)const;
protected:

private:
	std::string			_target;
};
