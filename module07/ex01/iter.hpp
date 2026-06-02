/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:36:10 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/02 13:36:10 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T, typename F>
void	iter(T *arr, const unsigned int size, F func)
{
	for (unsigned int i = 0; i < size; i++)
		func(arr[i]);
}

