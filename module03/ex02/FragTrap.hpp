/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 22:01:49 by kamys             #+#    #+#             */
/*   Updated: 2026/02/24 23:18:22 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap(const std::string &name);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	void	attack(const std::string &target);
	void	highFivesGuys();
};

#endif
