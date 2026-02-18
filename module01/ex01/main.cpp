/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:38:03 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 17:09:12 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int	main(void)
{
	int	n = 5;

	Zombie *horde = zombieHorde(n, "Flyboy");
	
	for(int i = 0; i < n; i++)
		horde[i].annunce();
	
	delete[] (horde);
	return (0);	
}
