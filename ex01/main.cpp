/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:24:21 by kamys             #+#    #+#             */
/*   Updated: 2026/02/17 14:46:37 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook book;
	std::string	input;
	
	while (true)
	{
		std::cout << "Enter Command (ADD, SEARCH, EXIT)!" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "SEARCH")
			book.SearchContacts();
		else if (input == "ADD")
			book.AddContact();
		else if (input == "EXIT")
			return (0);
		else
		{
			if (!input.empty())
				std::cout << "Invalid Command!" << std::endl;
		}
	}
	return (0);
}
