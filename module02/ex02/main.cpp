/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 00:09:50 by kamys             #+#    #+#             */
/*   Updated: 2026/02/23 00:46:14 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	std::cout << "==== CONSTRUCTORS ====" << std::endl;
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);
	a = Fixed(5.5f);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "\n==== COMPARISONS ====" << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "b >= d: " << (b >= d) << std::endl;
	std::cout << "b <= d: " << (b <= d) << std::endl;
	std::cout << "b == d: " << (b == d) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl;

	std::cout << "\n==== ARITHMETIC ====" << std::endl;
	Fixed x(5.05f);
	Fixed y(2);

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	std::cout << "x + y = " << (x + y) << std::endl;
	std::cout << "x - y = " << (x - y) << std::endl;
	std::cout << "x * y = " << (x * y) << std::endl;
	std::cout << "x / y = " << (x / y) << std::endl;

	std::cout << "\n==== INCREMENT / DECREMENT ====" << std::endl;
	Fixed inc(1);

	std::cout << "inc: " << inc << std::endl;
	std::cout << "++inc: " << ++inc << std::endl;
	std::cout << "inc: " << inc << std::endl;
	std::cout << "inc++: " << inc++ << std::endl;
	std::cout << "inc: " << inc << std::endl;

	std::cout << "--inc: " << --inc << std::endl;
	std::cout << "inc--: " << inc-- << std::endl;
	std::cout << "inc: " << inc << std::endl;

	std::cout << "\n==== MIN / MAX ====" << std::endl;
	Fixed m1(3.3f);
	Fixed m2(7.7f);

	std::cout << "m1: " << m1 << std::endl;
	std::cout << "m2: " << m2 << std::endl;

	std::cout << "max(m1, m2): " << Fixed::max(m1, m2) << std::endl;
	std::cout << "min(m1, m2): " << Fixed::min(m1, m2) << std::endl;

	const Fixed cm1(100.5f);
	const Fixed cm2(99.9f);

	std::cout << "max(const): " << Fixed::max(cm1, cm2) << std::endl;
	std::cout << "min(const): " << Fixed::min(cm1, cm2) << std::endl;

	std::cout << "\n==== TOINT / TOFLOAT ====" << std::endl;
	Fixed conv(42.75f);
	std::cout << "conv float: " << conv.toFloat() << std::endl;
	std::cout << "conv int: " << conv.toInt() << std::endl;

	std::cout << "\n==== RAW BITS ====" << std::endl;
	std::cout << "conv raw: " << conv.getRawBits() << std::endl;
	conv.setRawBits(256);
	std::cout << "conv after setRawBits(256): " << conv << std::endl;

	std::cout << "\n==== CHAIN TEST ====" << std::endl;
	Fixed chain = Fixed(1.5f) + Fixed(2) * Fixed(3) - Fixed(1);
	std::cout << "1.5 + 2*3 - 1 = " << chain << std::endl;

	std::cout << "\n==== END ====" << std::endl;
	return (0);
}
