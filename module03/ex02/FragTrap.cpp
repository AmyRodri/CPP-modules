/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:06:12 by kamys             #+#    #+#             */
/*   Updated: 2026/02/24 23:19:44 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << this->name << " default!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << this->name << " copy!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << this->name << " construtor!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap " << this->name << " operator!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->name << " cannot attack!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout	<< "FragTrap " << this->name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl; 
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " Give me a positive high-five!!" << std::endl;
}
