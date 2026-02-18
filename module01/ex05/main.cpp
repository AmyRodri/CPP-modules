/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:20:19 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 20:24:52 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl = Harl();
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNIG");
	harl.complain("ERROR");
	return (0);
}
