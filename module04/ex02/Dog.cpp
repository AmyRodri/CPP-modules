/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:05:46 by kamys             #+#    #+#             */
/*   Updated: 2026/02/28 23:11:04 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog type: " << this->type << " constructor default!!" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog type: " << this->type << " constructor copy!!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog type: " << this->type << " operator!!" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete (this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete (this->brain);
	std::cout << "Dog type: " << this->type << " destructor!!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Au Au AU!" << std::endl;
}

void	Dog::setIdea(int i, const std::string &idea)
{
	this->brain->setIdea(i, idea);
}

std::string	Dog::getIdea(int i) const
{
	return (this->brain->getIdea(i));
}
