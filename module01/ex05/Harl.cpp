/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:07:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 20:20:11 by kamys            ###   ########.fr       */
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
void	Harl::warnig()
{
	std::cout << "Look, I'm gonna need you to call the manager, because this is disrespectful to the customer."
			<< " I pay a lot of money here, I know my rights, and if this isn't fixed I will be filing a formal complaint." << std::endl;
}
void	Harl::error()
{	
	std::cout << "THIS IS ABSOLUTELY RIDICULOUS!!! I ASKED FOR A SIMPLE LATTE, NOT A SURVIVAL CHALLENGE!"
			<< " I WANT THE MANAGER, THE OWNER, AND WHOEVER IS IN CHARGE OF THIS PLACE! JESSICA, START RECORDING—THIS IS GOING ONLINE!!!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNIG", "ERROR"};
	void	(Harl::*functions[4]) () = {
		&Harl::debug,
		&Harl::info,
		&Harl::warnig,
		&Harl::error,
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}	
	}		
}
