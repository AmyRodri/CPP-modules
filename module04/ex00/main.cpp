/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:09:21 by kamys             #+#    #+#             */
/*   Updated: 2026/02/26 18:39:07 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal *a1 = new Animal();
	Animal *a2 = new Dog();
	Cat a3;
	std::cout << std::endl;

	std::cout << a1->getType() << std::endl;
	a1->makeSound();
	std::cout << std::endl;
	
	std::cout << a2->getType() << std::endl;
	a2->makeSound();
	std::cout << std::endl;
	
	std::cout << a3.getType() << std::endl;
	a3.makeSound();
	
	std::cout << std::endl;
	delete (a1);
	delete (a2);
	std::cout << std::endl;

    std::cout << "\n---- WRONG ----\n";

    WrongAnimal *w = new WrongCat();

    std::cout << w->getType() << std::endl;
    w->makeSound(); // ❌ WrongAnimal sound (erro proposital)
	std::cout << std::endl;

	return (0);
}
