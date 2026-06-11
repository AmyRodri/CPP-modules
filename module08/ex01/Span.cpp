/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:04:23 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/10 17:04:23 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <stdexcept>
#include <vector>

Span::Span() : _maxSize(0), _numbers(0)
{
}

Span::Span(unsigned int n) : _maxSize(n)
{
	_numbers.reserve(n);
}

Span::Span(const Span &other) : _maxSize(other._maxSize), _numbers(other._numbers)
{
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	_maxSize = other._maxSize;
	_numbers = other._numbers;
	return (*this);
}

Span::~Span()
{

}

void Span::addNumber(int n)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_numbers.push_back(n);
}

unsigned int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enought numbers");

	std::vector<int> copy(_numbers);

	std::sort(copy.begin(), copy.end());

	std::vector<int>::iterator it = copy.begin();

	int minDist = *(it + 1) - *it;

	for (; it != copy.end() - 1; ++it)
	{
		int dist = *(it + 1) - *it;

		if (dist < minDist)
			minDist = dist;
	}
	return (minDist);
}

unsigned int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enought numbers");

	return (*std::max_element(_numbers.begin(), _numbers.end())
			-
			*std::min_element(_numbers.begin(), _numbers.end()));
}

