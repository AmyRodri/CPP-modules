/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:46:56 by kamys             #+#    #+#             */
/*   Updated: 2026/05/19 23:18:47 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

int	main(void)
{
	srand(time(0));

	Intern someRandomIntern;

	Bureaucrat boss("Boss", 1);
	Bureaucrat low("Low", 150);

	std::cout << "\n========== VALID FORMS ==========\n"
		<< std::endl;

	try
	{
		AForm *robot;

		robot = someRandomIntern.makeForm(
			"robotomy request",
			"Bender"
		);

		std::cout << *robot << std::endl;

		low.signForm(*robot);
		low.executeForm(*robot);

		boss.signForm(*robot);
		boss.executeForm(*robot);

	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== SHRUBBERY ==========\n"
		<< std::endl;

	try
	{
		AForm *shrub;

		shrub = someRandomIntern.makeForm(
			"shrubbery creation",
			"home"
		);

		std::cout << *shrub << std::endl;

		boss.signForm(*shrub);
		boss.executeForm(*shrub);

	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== PRESIDENTIAL ==========\n"
		<< std::endl;

	try
	{
		AForm *president;

		president = someRandomIntern.makeForm(
			"presidential pardon",
			"Arthur Dent"
		);

		std::cout << *president << std::endl;

		boss.signForm(*president);
		boss.executeForm(*president);

	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== INVALID FORM ==========\n"
		<< std::endl;

	try
	{
		AForm *invalid;

		invalid = someRandomIntern.makeForm(
			"banana form",
			"target"
		);

		if (invalid)
		{
			std::cout << *invalid << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

