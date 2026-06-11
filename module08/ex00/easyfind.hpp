/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:44:06 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/10 12:44:06 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::const_iterator easyfind(const T& c, int num)
{
	typename T::const_iterator it = std::find(c.begin(), c.end(), num);

	if (it == c.end())
		throw std::runtime_error("number not found");

	return (it);
}

#endif // !EASYFIND_HPP
