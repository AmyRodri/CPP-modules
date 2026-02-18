/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:16:20 by kamys             #+#    #+#             */
/*   Updated: 2026/02/17 15:00:13 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

static std::string GetNonEmptyInput(const std::string &prompt)
{
	std::string	input;

	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(0);
		if (!input.empty())
			return (input);
		std::cout << "This field cannot be empty. Please try again." << std::endl;
	}
}

static Contact CreatContact()
{
	Contact contact;
	
	std::string Firstname = GetNonEmptyInput("Add Firstname: ");
	std::string Lastname = GetNonEmptyInput("Add Lastname: ");
	std::string Nickname = GetNonEmptyInput("Add Nickname: ");
	std::string Phone = GetNonEmptyInput("Add Phone: ");
	std::string Secret = GetNonEmptyInput("Add darkest secret: ");
	contact.SetContact(Firstname, Lastname, Nickname, Secret, Phone);
	return (contact);
}

void	PhoneBook::AddContact()
{
	contacts[count % 8] = CreatContact();
	if (count < 8)
		count++;
	std::cout << "Contact Saved!" << std::endl;
}

static std::string Format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::ListContact()
{
	const int	width = 10;
	const std::string	seperator(38, '-');
	int	i;
	
	std::cout	<< std::setw(5) << "Index" << "|"
				<< std::setw(width) << "Firstname" << "|"
				<< std::setw(width) << "Lastname" << "|"
				<< std::setw(width) << "Nickname" << std::endl;
	std::cout << seperator << std::endl;
	i = 0;
	while (i < count)
	{
		std::cout	<< std::setw(5) << std::right << i + 1 << "|"
					<< std::setw(width) << std::right << Format(contacts[i].getFirtname()) << "|"
					<< std::setw(width) << std::right << Format(contacts[i].getLastname()) << "|"
					<< std::setw(width) << std::right << Format(contacts[i].getNickname()) << std::endl;
		std::cout << seperator << std::endl;
		i++;
	}
}

void	PhoneBook::DetailContact(int index)
{
	contacts[index].Display();	
}

int	PhoneBook::Size()
{
	return (count);
}

int	PhoneBook::PromptIndex()
{
	int	index;
	std::cout << "Enter the contact's index to view the details: ";
	if (!(std::cin >> index))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (-1);
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (index);
}

bool	PhoneBook::IsValidIndex(int index)
{
	if (index <= 0 || index > Size())
		return (false);
	return (true);
}

void PhoneBook::SearchContacts()
{
	int	index;

	if (Size() == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}
	ListContact();
	index = PromptIndex();
	if (!IsValidIndex(index))
	{
		std::cout << "Index invalid!" << std::endl;
		return ;
	}
	DetailContact(index - 1);
}
