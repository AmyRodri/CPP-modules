/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:30:20 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/02 14:30:20 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template<typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);

	Array(const Array &other);
	Array &operator=(const Array &other);

	~Array();

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	unsigned int size() const;

private:
	T* _data;
	unsigned int _size;
};

#include "Array.tpp"

#endif // !ARRAY_HPP
