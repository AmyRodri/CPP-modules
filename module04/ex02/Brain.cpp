/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 22:03:18 by kamys             #+#    #+#             */
/*   Updated: 2026/02/28 22:36:12 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor!!" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor!!" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain operator!!" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];	
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor!!" << std::endl;
}

void	Brain::setIdea(int i, const std::string &idea)
{
	if (i >= 0 && i < 100)
	{
		this->ideas[i] = idea;
	}
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
	{
		return (this->ideas[i]);
	}
	return ("indice invalido");
}
