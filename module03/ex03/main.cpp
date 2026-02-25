/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:34:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/24 23:11:40 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "===== CONSTRUCTORS =====" << std::endl;

    ClapTrap c1("CL4P");
    ScavTrap s1("SC4V");
    FragTrap f1("FR4G");
    DiamondTrap d1("DI4M");

    std::cout << "\n===== BASIC ACTIONS =====" << std::endl;

    d1.attack("enemy");      // deve usar ScavTrap::attack
    d1.takeDamage(20);       // deve usar ClapTrap::takeDamage
    d1.beRepaired(10);       // deve usar ClapTrap::beRepaired

    std::cout << "\n===== SPECIAL ABILITIES =====" << std::endl;

    s1.guardGate();          // habilidade do ScavTrap
    f1.highFivesGuys();      // habilidade do FragTrap
    d1.whoAmI();             // habilidade do DiamondTrap

    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    DiamondTrap d2(d1);
    d2.whoAmI();

    std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;

    DiamondTrap d3("TEMP");
    d3 = d1;
    d3.whoAmI();

    std::cout << "\n===== MULTIPLE ATTACK TEST =====" << std::endl;

    for (int i = 0; i < 5; i++)
        d1.attack("dummy");

    std::cout << "\n===== DAMAGE UNTIL DEATH =====" << std::endl;

    for (int i = 0; i < 10; i++)
        d1.takeDamage(15);

    std::cout << "\n===== REPAIR TEST =====" << std::endl;

    for (int i = 0; i < 5; i++)
        d1.beRepaired(5);

    std::cout << "\n===== END OF TEST =====" << std::endl;

    return 0;
}
