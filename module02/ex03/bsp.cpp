/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 01:34:36 by kamys             #+#    #+#             */
/*   Updated: 2026/02/23 01:42:06 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static Fixed sing(Point const p1, Point const p2, Point const p3)
{
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
		    (p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1 = sing(point, a, b);
	Fixed	d2 = sing(point, b, c);
	Fixed	d3 = sing(point, c, a);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);

	bool	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return (!(has_neg && has_pos));
}
