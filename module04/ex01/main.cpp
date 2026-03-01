/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:09:21 by kamys             #+#    #+#             */
/*   Updated: 2026/02/28 22:38:21 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "\n===== TESTE 1: ARRAY DE ANIMAIS =====\n" << std::endl;

    const int size = 6;
    Animal* animals[size];

    // metade Dog
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();

    // metade Cat
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    std::cout << "\n--- Sons dos animais ---\n" << std::endl;

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    std::cout << "\n--- Deletando animais (via Animal*) ---\n" << std::endl;

    for (int i = 0; i < size; i++)
        delete animals[i]; // tem que chamar destrutor de Dog/Cat também!

    // ------------------------------------------------------------

    std::cout << "\n===== TESTE 2: DEEP COPY =====\n" << std::endl;

    Dog original;
    original.setIdea(0, "Quero comer");
    original.setIdea(1, "Quero passear");

    Dog copy = original; // chama copy constructor

    std::cout << "\nIdeias antes da mudança:\n";
    std::cout << "Original[0]: " << original.getIdea(0) << std::endl;
    std::cout << "Copy[0]: " << copy.getIdea(0) << std::endl;

    // muda só no original
    original.setIdea(0, "Quero morder o carteiro");

    std::cout << "\nIdeias depois da mudança:\n";
    std::cout << "Original[0]: " << original.getIdea(0) << std::endl;
    std::cout << "Copy[0]: " << copy.getIdea(0) << std::endl;

    std::cout << "\n(se estiver diferente -> deep copy funcionando ✔)\n";

    // ------------------------------------------------------------

    std::cout << "\n===== TESTE 3: ASSIGNMENT OPERATOR =====\n" << std::endl;

    Dog a;
    a.setIdea(0, "Ideia A");

    Dog b;
    b.setIdea(0, "Ideia B");

    std::cout << "\nAntes do operator=:\n";
    std::cout << "A: " << a.getIdea(0) << std::endl;
    std::cout << "B: " << b.getIdea(0) << std::endl;

    b = a; // operator=

    std::cout << "\nDepois do operator=:\n";
    std::cout << "A: " << a.getIdea(0) << std::endl;
    std::cout << "B: " << b.getIdea(0) << std::endl;

    // muda A de novo
    a.setIdea(0, "Nova ideia A");

    std::cout << "\nDepois de mudar A:\n";
    std::cout << "A: " << a.getIdea(0) << std::endl;
    std::cout << "B: " << b.getIdea(0) << std::endl;

    std::cout << "\n(se B não mudar -> deep copy no operator= ✔)\n";

    // ------------------------------------------------------------

    std::cout << "\n===== FIM DOS TESTES =====\n" << std::endl;

    return (0);
}
