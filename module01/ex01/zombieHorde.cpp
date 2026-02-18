/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:56:29 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 17:12:12 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << i + 1;
		horde[i].setName(name + ss.str());
	}
	return (horde);
}
