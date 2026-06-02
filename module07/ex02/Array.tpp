/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:46:51 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/02 14:46:51 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int size) : _data(new T[size]()), _size(size)
{
}

template<typename T>
Array<T>::Array(const Array<T> &other) : _data(new T[other._size]()), _size(other._size)
{
	for (unsigned int i = 0; i < other._size; i++)
		this->_data[i] = other._data[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this == &other)
		return (*this);

	delete[] _data;

	this->_size = other._size;
	this->_data = new T[this->_size]();

	for (unsigned int i = 0; i < other._size; i++)
		this->_data[i] = other._data[i];

	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw std::out_of_range("Index out of bounds");
	return (_data[n]);
}

template<typename T>
const T& Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw std::out_of_range("Index out of bounds");
	return (_data[n]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}
