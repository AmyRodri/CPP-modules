/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:46:56 by kamys             #+#    #+#             */
/*   Updated: 2026/05/19 12:39:47 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "===== FORM CREATION =====\n" << std::endl;

	try
	{
		Form a("Contract", 50, 25);
		std::cout << a << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== INVALID FORM CREATION =====\n" << std::endl;

	try
	{
		Form high("TooHigh", 0, 10);
		std::cout << high << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		Form low("TooLow", 151, 10);
		std::cout << low << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n===== SUCCESSFUL SIGN =====\n" << std::endl;

	try
	{
		Bureaucrat amy("Amy", 10);
		Form contract("Contract", 20, 5);

		std::cout << contract << std::endl;

		amy.signForm(contract);

		std::cout << contract << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== FAILED SIGN =====\n" << std::endl;

	try
	{
		Bureaucrat bob("Bob", 100);
		Form taxes("Taxes", 30, 10);

		std::cout << taxes << std::endl;

		bob.signForm(taxes);

		std::cout << taxes << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== COPY CONSTRUCTOR =====\n" << std::endl;

	try
	{
		Form original("Original", 42, 21);
		Form copy(original);

		std::cout << original << std::endl;
		std::cout << copy << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== ASSIGNMENT OPERATOR =====\n" << std::endl;

	try
	{
		Form a("A", 50, 25);
		Form b("B", 1, 1);

		std::cout << "Before assignment:" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		b = a;

		std::cout << "\nAfter assignment:" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

