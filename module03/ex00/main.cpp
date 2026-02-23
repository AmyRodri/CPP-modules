/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:34:05 by kamys             #+#    #+#             */
/*   Updated: 2026/02/23 15:14:25 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    // Creating ClapTraps
    ClapTrap hero("Amy");
    ClapTrap sidekick;

    std::cout << "\n--- Testing Attacks ---\n";
    hero.attack("Mario");        // Amy attacks
    sidekick.attack("Bowser");   // Default attacks

    std::cout << "\n--- Testing Damage ---\n";
    hero.takeDamage(5);          // Amy loses 5 HP
    sidekick.takeDamage(12);     // Default loses 12 HP (dead)

    std::cout << "\n--- Testing Repairs ---\n";
    hero.beRepaired(3);          // Amy repairs 3 HP
    sidekick.beRepaired(5);      // Default tries to repair but is dead

    std::cout << "\n--- Testing Assignment Operator ---\n";
    sidekick = hero;             // Copy Amy into Default
    sidekick.attack("Koopa");    // Now Default can attack
    sidekick.beRepaired(2);      // And repair itself

    std::cout << "\n--- Testing Energy Consumption ---\n";
    for (int i = 0; i < 11; i++) // Attempt to use all energy
        hero.attack("Goomba");

    std::cout << "\n--- End of Program ---\n";
    return 0;
}
