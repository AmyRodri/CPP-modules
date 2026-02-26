/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:52:46 by kamys             #+#    #+#             */
/*   Updated: 2026/02/26 18:13:05 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat type: " << this->type << " constructor default!!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{	
	std::cout << "Cat type: " << this->type << " constructor copy!!" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat type: " << this->type << " operator!!" << std::endl;
	if (this != &other)	
	{
		Animal::operator=(other);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat type: " << this->type << " destructor!!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miauuuu!!" << std::endl;
}
