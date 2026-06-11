/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:56:31 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/10 14:56:31 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span {
public:
	Span();
	Span(unsigned int n);

	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void	addNumber(int n);
	template<typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				++begin;
			}
		}

	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
};

#endif // !SPAN_HPP
