/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:34:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/23 17:35:21 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Teste 1: Construtor padrão ===\n";
    ScavTrap a;
    a.attack("Inimigo1");
    a.guardGate();

    std::cout << "\n=== Teste 2: Construtor com nome ===\n";
    ScavTrap b("Bob");
    b.attack("Inimigo2");
    b.guardGate();

    std::cout << "\n=== Teste 3: Construtor de cópia ===\n";
    ScavTrap c(b); // cópia de b
    c.attack("Inimigo3");
    c.guardGate();

    std::cout << "\n=== Teste 4: Operador de atribuição ===\n";
    a = c; // atribuindo c para a
    a.attack("Inimigo4");
    a.guardGate();

    std::cout << "\n=== Teste 5: Escopo extra para destruição ===\n";
    {
        ScavTrap d("Danny");
        d.attack("Inimigo5");
        d.guardGate();
    } // d vai sair de escopo aqui, destrutor será chamado

    std::cout << "\n=== Fim dos testes ===\n";
    return 0;
}
