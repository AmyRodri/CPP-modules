/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:06:32 by kamys             #+#    #+#             */
/*   Updated: 2026/02/24 23:18:13 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap(const std::string &name);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
	
	void	attack(const std::string &target);
	void	guardGate();
};

#endif
