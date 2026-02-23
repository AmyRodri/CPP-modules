/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:40:55 by kamys             #+#    #+#             */
/*   Updated: 2026/02/22 23:26:51 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedPoint;
	static const int rawBits = 8;
public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	float	toFloat() const;
	int		toInt() const;
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
