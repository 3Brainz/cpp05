#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() :
					Form("robotomyForm", 72, 45),
					_target("genericTarget")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
					Form("robotomyForm", 72, 45),
					_target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &toCopy) : _target(toCopy._target)
{}

RobotomyRequestForm &	RobotomyRequestForm::operator = (const RobotomyRequestForm & toCopy)
{
	if (this != &toCopy)
	{
		_target = toCopy._target;
	}
	return (*this);
}

void				RobotomyRequestForm::toExecute() const
{
	std::string str;

	if (rand() % 2)
		str = _target + " robotomization successfully happened";
	else
		str = _target + " robotomization failed";
	std::cout << str << std::endl;
}
