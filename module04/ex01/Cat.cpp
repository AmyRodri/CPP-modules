/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:52:46 by kamys             #+#    #+#             */
/*   Updated: 2026/02/28 22:31:35 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat type: " << this->type << " constructor default!!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{	
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Cat type: " << this->type << " constructor copy!!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat type: " << this->type << " operator!!" << std::endl;
	if (this != &other)	
	{
		Animal::operator=(other);
		delete (this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "Cat type: " << this->type << " destructor!!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miauuuu!!" << std::endl;
}

void	Cat::setIdea(int i, const std::string &idea)
{
	this->brain->setIdea(i, idea);
}

std::string	Cat::getIdea(int i) const
{
	return (this->brain->getIdea(i));
}
