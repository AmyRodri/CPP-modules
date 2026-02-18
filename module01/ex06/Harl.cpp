/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:07:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 20:55:03 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "Hi, excuse me… I ordered a latte with plant-based milk,"
		<< " but I think this one has regular milk. Could you please remake it for me?" << std::endl;
}

void	Harl::info()
{
	std::cout << "Okay, so like I said, I ordered plant-based milk. I can't have regular milk."
			<< " I'm trying to be patient, but this is already the second time this has happened today." << std::endl;
}
void	Harl::warning()
{
	std::cout << "Look, I'm gonna need you to call the manager, because this is disrespectful to the customer."
			<< " I pay a lot of money here, I know my rights, and if this isn't fixed I will be filing a formal complaint." << std::endl;
}
void	Harl::error()
{	
	std::cout << "THIS IS ABSOLUTELY RIDICULOUS!!! I ASKED FOR A SIMPLE LATTE, NOT A SURVIVAL CHALLENGE!"
			<< " I WANT THE MANAGER, THE OWNER, AND WHOEVER IS IN CHARGE OF THIS PLACE! JESSICA, START RECORDING—THIS IS GOING ONLINE!!!" << std::endl;
}

static int	getIndex(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNIG", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	switch (getIndex(level))
	{
	case 0:
		std::cout << "[DEBUG]" << std::endl;
		this->debug();
		std::cout << std::endl;
		/* fallthrough */
	case 1:
		std::cout << "[INFO]" << std::endl;
		this->info();
		std::cout << std::endl;
		/* fallthrough */
	case 2:
		std::cout << "[WARNIG]" << std::endl;
		this->warning();
		std::cout << std::endl;
		/* fallthrough */
	case 3:
		std::cout << "[ERROR]" << std::endl;
		this->error();
		std::cout << std::endl;
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	}	
}
