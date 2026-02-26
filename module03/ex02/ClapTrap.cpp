/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:57:15 by kamys             #+#    #+#             */
/*   Updated: 2026/02/25 22:58:12 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor (default)!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap " << name << " constructor (copy)!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		std::cout << "ClapTrap " << name << " Assignment operator!" << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructor!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " cannot attack!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout	<< "ClapTrap " << this->name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " cannot repair!" << std::endl;
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
}
