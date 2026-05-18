/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:46:56 by kamys             #+#    #+#             */
/*   Updated: 2026/05/18 13:34:20 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

static void	testCreate(const std::string& name, int grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "[OK] Created -> " << b << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[ERROR] " << name
				  << " (" << grade << ") -> "
				  << e.what() << std::endl;
	}
}

static void	testIncrement(Bureaucrat& b)
{
	try
	{
		std::cout << "\nIncrementing " << b.getName() << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[ERROR] increment -> "
				  << e.what() << std::endl;
	}
}

static void	testDecrement(Bureaucrat& b)
{
	try
	{
		std::cout << "\nDecrementing " << b.getName() << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[ERROR] decrement -> "
				  << e.what() << std::endl;
	}
}

int	main(void)
{
	std::cout << "===== VALID CREATION =====\n" << std::endl;
	testCreate("Amy", 1);
	testCreate("Put", 75);
	testCreate("Bob", 150);

	std::cout << "\n===== INVALID CREATION =====\n" << std::endl;
	testCreate("TooHigh", 0);
	testCreate("Negative", -42);
	testCreate("TooLow", 151);
	testCreate("Huge", 999);

	std::cout << "\n===== INCREMENT TEST =====\n" << std::endl;
	try
	{
		Bureaucrat top("Top", 1);
		std::cout << top << std::endl;

		// should throw
		testIncrement(top);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== DECREMENT TEST =====\n" << std::endl;
	try
	{
		Bureaucrat low("Low", 150);
		std::cout << low << std::endl;

		// should throw
		testDecrement(low);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===== NORMAL OPERATIONS =====\n" << std::endl;
	try
	{
		Bureaucrat worker("Worker", 42);

		std::cout << worker << std::endl;

		worker.incrementGrade();
		std::cout << "After increment: " << worker << std::endl;

		worker.decrementGrade();
		std::cout << "After decrement: " << worker << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "[ERROR] " << e.what() << std::endl;
	}

	return (0);
}
