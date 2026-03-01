/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:09:21 by kamys             #+#    #+#             */
/*   Updated: 2026/02/28 23:11:40 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal* a1 = new Dog();
	AAnimal* a2 = new Cat();
	std::cout << std::endl;

	a1->makeSound();
	a2->makeSound();

	std::cout << std::endl;
	delete a1;
	delete a2;
	std::cout << std::endl;

	Cat c1;
	std::cout << std::endl;
	Cat c2 = c1; // copy constructor
	std::cout << std::endl;

	Cat c3;
	std::cout << std::endl;
	c3 = c1;     // operator=
	std::cout << std::endl;
    return (0);
}
