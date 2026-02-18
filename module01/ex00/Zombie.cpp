/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:37:56 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 16:20:59 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " was killed *-*" << std::endl;
}

void	Zombie::annunce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
