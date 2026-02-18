/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:16:57 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 15:44:34 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		count;

	public:
		PhoneBook();
		
		int		Size();
		int		PromptIndex();
		void	AddContact();
		void	ListContact();
		void	SearchContacts();
		void	DetailContact(int index);
		bool	IsValidIndex(int index);
};

#endif
