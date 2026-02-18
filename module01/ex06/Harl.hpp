/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:03:46 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 20:54:00 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		void	complain(std::string level);
};

#endif
