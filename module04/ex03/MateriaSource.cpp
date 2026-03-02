/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 00:50:54 by kamys             #+#    #+#             */
/*   Updated: 2026/03/02 00:59:45 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_STORAGE; i++)
		this->storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < MAX_STORAGE; i++)
	{
		if (other.storage[i])
			this->storage[i] = other.storage[i]->clone();
		else
			this->storage[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < MAX_STORAGE; i++)
		{
			delete (storage[i]);
			
			if (other.storage[i])
				this->storage[i] = other.storage[i]->clone();
			else
				this->storage[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_STORAGE; i++)
		delete (this->storage[i]);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < MAX_STORAGE; i++)
	{
		if (!this->storage[i])
		{
			this->storage[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MAX_STORAGE; i++)
	{
		if (this->storage[i] && this->storage[i]->getType() == type)
			return (this->storage[i]->clone());
	}
	return (NULL);
}
