/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 21:11:41 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/20 21:11:41 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{

}

AForm *Intern::createRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createPresidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &nameForm, const std::string &target)
{
	FormList forms[3] = {
		{"robotomy request", createRobotomy},
		{"shrubbery creation", createShrubbery},
		{"presidential pardon", createPresidential}
	};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].name == nameForm)
		{
			std::cout << "Intern creates "
				<< nameForm << std::endl;

			return forms[i].func(target);
		}
	}

	std::cout << "Error: form not found"
		<< std::endl;

	return NULL;
}

