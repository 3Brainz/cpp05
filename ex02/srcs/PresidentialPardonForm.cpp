#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() :
					Form("presidentialForm", 25, 5),
					_target("genericTarget")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
					Form("presidentialForm", 25, 5),
					_target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &toCopy) : _target(toCopy._target)
{}

PresidentialPardonForm &	PresidentialPardonForm::operator = (const PresidentialPardonForm & toCopy)
{
	if (this != &toCopy)
	{
		_target = toCopy._target;
	}
	return (*this);
}

/*funcs*/

void	PresidentialPardonForm::toExecute(void)const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}