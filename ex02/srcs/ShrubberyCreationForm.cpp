#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() :
					Form("shrubberyForm", 145, 137),
					_target("genericTarget")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
					Form("shrubberyForm", 147, 137),
					_target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &toCopy) : _target(toCopy._target)
{}

ShrubberyCreationForm &	ShrubberyCreationForm::operator = (const ShrubberyCreationForm & toCopy)
{
	if (this != &toCopy)
	{
		_target = toCopy._target;
	}
	return (*this);
}

/*fucs*/

void					ShrubberyCreationForm::toExecute() const
{
	std::fstream	fileStream;
	std::string		fileName = _target + "_shrubbery";

	fileStream.open(fileName, std::ios::out | std::ios::trunc);
	if (!fileStream.is_open())
	{
		std::cout << "something went wrong while opening the file" << std::endl;
		return ;
	}
	fileStream << "🌲🌳🌴🎄🎋";
	fileStream.close();
	std::cout << fileName << " successfuly created" << std::endl;
}