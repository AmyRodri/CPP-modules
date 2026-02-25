/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:34:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/24 22:32:56 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n====== CONSTRUCTORS ======\n" << std::endl;
    FragTrap frag("Amy");
    ScavTrap scav("Kamys");

    std::cout << "\n====== BASIC ATTACKS ======\n" << std::endl;
    frag.attack("Target Dummy");
    scav.attack("Target Dummy");

    std::cout << "\n====== TAKING DAMAGE ======\n" << std::endl;
    frag.takeDamage(30);
    scav.takeDamage(30);

    std::cout << "\n====== REPAIRING ======\n" << std::endl;
    frag.beRepaired(20);
    scav.beRepaired(20);

    std::cout << "\n====== SPECIAL ABILITIES ======\n" << std::endl;
    std::cout << "FragTrap special:" << std::endl;
    frag.highFivesGuys();   // habilidade única do FragTrap

    std::cout << "\nScavTrap special:" << std::endl;
    scav.guardGate();       // habilidade única do ScavTrap

    std::cout << "\n====== ENERGY TEST ======\n" << std::endl;
    for (int i = 0; i < 110; i++)
    {
        frag.attack("Dummy");
    }

    std::cout << "\n--- Now ScavTrap ---\n" << std::endl;
    for (int i = 0; i < 60; i++)
    {
        scav.attack("Dummy");
    }

    std::cout << "\n====== DESTRUCTORS ======\n" << std::endl;
    return 0;
}
