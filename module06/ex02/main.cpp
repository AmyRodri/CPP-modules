/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:07:48 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/25 19:07:48 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
	srand(time(NULL));

	Base *ptr = generate();

	std::cout << "Pointer identify: ";
	identify(ptr);

	std::cout << "Reference identify: ";
	identify(*ptr);

	delete ptr;

	return 0;
}
