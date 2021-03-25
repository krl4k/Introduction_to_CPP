// CLion
// Created by Foster Grisella on 3/24/21 17:12.
//


#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
Form("ShrubberyCreation", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):Form(other) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	Form::operator=(other);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::ofstream file(_target + "_shrubbery");
	if (!file.is_open())
		throw std::runtime_error("file not opened!");
	file << "The Worm's Turn\n"
				 "\n"
				 "             _{\\ _{\\{\\/}/}/}__\n"
				 "            {/{/\\}{/{/\\}(\\}{/\\} _\n"
				 "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
				 "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
				 "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
				 "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
				 "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
				 "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
				 "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
				 "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
				 "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
				 "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
				 "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
				 "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
				 "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
				 "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
				 "            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
				 "             {){/ {\\/}{\\/} \\}\\}\n"
				 "             (_)  \\.-'.-/\n"
				 "         __...--- |'-.-'| --...__\n"
				 "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
				 "-\"    ' .  . '    |.'-._| '  . .  '   . \n"
				 ".  '-  '    .--'  | '-.'|    .  '  . '\n"
				 "         ' ..     |'-_.-|\n"
				 " .  '  .       _.-|-._ -|-._  .  '  .\n"
				 "             .'   |'- .-|   '.\n"
				 " ..-'   ' .  '.   `-._.-´   .'  '  - .\n"
				 "  .-' '        '-._______.-'     '  .\n"
				 "       .      ~,\n"
				 "   .       .   |\\   .    ' '-.\n"
				 "   ___________/  \\____________\n"
				 "  /  Why is it, when you want \\\n"
				 " |  something, it is so damn   |\n"
				 " |    much work to get it?     |\n"
				 "  \\___________________________/\n"
				 "\n"
				 "------------------------------------------------\n" << std::endl;
	file.close();
}
