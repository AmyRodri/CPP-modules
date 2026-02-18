/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 23:02:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 15:43:35 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string	Firstname;
		std::string	Lastname;
		std::string	Nickname;
		std::string	Phone;
		std::string	Secret;

	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nick, std::string s, std::string p);
		void	SetContact(std::string fn, std::string ln, std::string nick, std::string s, std::string p);
		void	Display() const;
		std::string	getFirtname();
		std::string	getLastname();
		std::string	getNickname();
};

#endif
