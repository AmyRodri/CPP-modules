/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:20:19 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 20:38:11 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Ivalid count of argmunts" << std::endl;
		return (1);
	}
	
	Harl harl = Harl();
	harl.complain(av[1]);
	return (0);
}
