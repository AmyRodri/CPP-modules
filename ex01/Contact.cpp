/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:16:55 by kamys             #+#    #+#             */
/*   Updated: 2026/02/17 14:49:34 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {	
}

Contact::Contact(std::string fn, std::string ln, std::string nick, std::string s, std::string p)
{
	Firstname = fn;
	Lastname = ln;
	Nickname = nick;
	Secret = s;
	Phone = p;
}

void Contact::SetContact(std::string fn, std::string ln, std::string nick, std::string s, std::string p)
{
	Firstname = fn;
	Lastname = ln;
	Nickname = nick;
	Secret = s;
	Phone = p;
}

std::string	Contact::getFirtname()
{
	return (Firstname);
}

std::string	Contact::getLastname()
{
	return (Lastname);
}

std::string	Contact::getNickname()
{
	return (Nickname);
}

void	Contact::Display() const
{
	std::cout << "Firstname: " << Firstname << std::endl;
	std::cout << "Lastname: " << Lastname << std::endl;
	std::cout << "Nickname: " << Nickname << std::endl;
	std::cout << "Phone: " << Phone << std::endl;
	std::cout << "darkest secret: " << Secret << std::endl;
}
