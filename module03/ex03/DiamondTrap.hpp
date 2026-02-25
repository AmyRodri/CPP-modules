/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:40:17 by kamys             #+#    #+#             */
/*   Updated: 2026/02/24 23:08:32 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;
public:
	using ScavTrap::attack;

	DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap(const std::string &name);
	DiamondTrap &operator=(const DiamondTrap &other);
	~DiamondTrap();

	void	whoAmI();
};

#endif
