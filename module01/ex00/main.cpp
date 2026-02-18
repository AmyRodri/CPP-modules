/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:38:03 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 16:12:08 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("Nemesis");

	Zombie *heapZombie = newZombie("Rat King");
	heapZombie->annunce();

	delete(heapZombie);
	return (0);	
}
