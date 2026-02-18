/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:37:53 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 16:08:00 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		
		void	annunce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
