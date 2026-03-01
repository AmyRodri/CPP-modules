/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:35:48 by kamys             #+#    #+#             */
/*   Updated: 2026/02/26 18:37:07 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat type: " << this->type << " constructor default!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{	
	std::cout << "WrongCat type: " << this->type << " constructor copy!!" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat type: " << this->type << " operator!!" << std::endl;
	if (this != &other)	
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat type: " << this->type << " destructor!!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miauuuu!!" << std::endl;
}
