/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 00:16:37 by kamys             #+#    #+#             */
/*   Updated: 2026/03/02 00:56:14 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
	for (int i = 0; i < MAX_INVENTORY; i++)
		this->inventory[i] = NULL;
}

Character::Character(const std::string &name) : name(name)
{
	for (int i = 0; i < MAX_INVENTORY; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &other) : name(other.name)
{
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < MAX_INVENTORY; i++)
		{
			if (this->inventory[i])
				delete (this->inventory[i]);
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < MAX_INVENTORY; i++)
		delete (this->inventory[i]);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}

