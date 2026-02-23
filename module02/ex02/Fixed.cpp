/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:55:32 by kamys             #+#    #+#             */
/*   Updated: 2026/02/23 00:40:07 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Defaul constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = n << rawBits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(n * (1 << rawBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignmet operator called" << std::endl;
	if (this != &other)
	{
		this->fixedPoint = other.getRawBits();
	}
	return (*this);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->fixedPoint > other.fixedPoint);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->fixedPoint < other.fixedPoint);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->fixedPoint >= other.fixedPoint);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->fixedPoint <= other.fixedPoint);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->fixedPoint == other.fixedPoint);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->fixedPoint != other.fixedPoint);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	if (other.getRawBits() == 0)
		throw (std::runtime_error("Division by zero"));
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedPoint++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixedPoint--;
	return (tmp);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

float	Fixed::toFloat() const
{
	return ((float)this->fixedPoint / (1 << rawBits));
}

int	Fixed::toInt() const
{
	return (this->fixedPoint >> rawBits);
}

int	Fixed::getRawBits() const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
