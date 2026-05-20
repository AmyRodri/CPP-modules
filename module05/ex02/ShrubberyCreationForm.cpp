/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:28:53 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/19 23:11:28 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137),  target(target) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->target = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkExecute(executor);

	std::ofstream file((target + "_shrubbery").c_str());
	if (!file)
		return;

	file <<
"	The Worm's Turn\n"
"	\n"
"	             _{\\ _{\\{\\/}/}/}__\n"
"	            {/{/\\}{/{/\\}(\\}{/\\} _\n"
"	           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
"	        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
"	       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
"	      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
"	     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
"	     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
"	    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
"	     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
"	      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
"	     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
"	      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
"	        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
"	         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
"	           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
"	            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
"	             {){/ {\\/}{\\/} \\}\\}\n"
"	             (_)  \\.-'.-/\n"
"	         __...--- |'-.-'| --...__\n"
"	  _...--    .-'   |'-.-'|  ' -.  ""--..__\n"
"	-     ' .  . '    |.'-._| '  . .  '   jro\n"
"	.  '-  '    .--'  | '-.'|    .  '  . '\n"
"	         ' ..     |'-_.-|\n"
"	 .  '  .       _.-|-._ -|-._  .  '  .\n"
"	             .'   |'- .-|   '.\n"
"	 ..-'   ' .  '.   `-._.-´   .'  '  - .\n"
"	  .-' '        '-._______.-'     '  .\n"
"	       .      ~,\n"
"	   .       .   |\\   .    ' '-.\n"
"	   ___________/  \\____________\n"
"	  /  Why is it, when you want \\\n"
"	 |  something, it is so damn   |\n"
"	 |    much work to get it?     |\n"
"	  \\___________________________/\n"
"	\n";
}

