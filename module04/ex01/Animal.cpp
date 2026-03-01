/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:44:21 by kamys             #+#    #+#             */
/*   Updated: 2026/02/26 18:17:13 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal type: " << this->type << " contructor default!!" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal type: " << this->type << " contructor copy!!" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal type: " << this->type << " operator!!" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal type: " << this->type << " destructor!!" << std::endl;
}

std::string Animal::getType()
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal making noise" << std::endl;
}
