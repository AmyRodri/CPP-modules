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

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

static void	printFile(const std::string &filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;

	if (!file)
	{
		std::cout << "could not open file: " << filename << std::endl;
		return ;
	}

	std::cout << "\n===== FILE CONTENT =====\n" << std::endl;

	while (std::getline(file, line))
		std::cout << line << std::endl;

	std::cout << "\n========================\n" << std::endl;
}

int	main(void)
{
	srand(time(0));

	std::cout << "\n========== CREATE BUREAUCRATS ==========\n" << std::endl;

	Bureaucrat boss("Boss", 1);
	Bureaucrat intern("Intern", 150);
	Bureaucrat mid("Mid", 70);

	std::cout << boss << std::endl;
	std::cout << intern << std::endl;
	std::cout << mid << std::endl;

	std::cout << "\n========== SHRUBBERY ==========\n" << std::endl;

	try
	{
		ShrubberyCreationForm shrub("home");

		std::cout << shrub << std::endl;

		intern.signForm(shrub);
		intern.executeForm(shrub);

		boss.signForm(shrub);
		boss.executeForm(shrub);

		printFile("home_shrubbery");
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== ROBOTOMY ==========\n" << std::endl;

	try
	{
		RobotomyRequestForm robot("Bender");

		std::cout << robot << std::endl;

		mid.signForm(robot);
		mid.executeForm(robot);

		boss.executeForm(robot);
		boss.executeForm(robot);
		boss.executeForm(robot);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== PRESIDENTIAL ==========\n" << std::endl;

	try
	{
		PresidentialPardonForm pardon("Arthur Dent");

		std::cout << pardon << std::endl;

		mid.signForm(pardon);
		mid.executeForm(pardon);

		boss.signForm(pardon);
		boss.executeForm(pardon);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n========== UNSIGNED FORM ==========\n" << std::endl;

	try
	{
		RobotomyRequestForm fail("Marvin");

		boss.executeForm(fail);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

