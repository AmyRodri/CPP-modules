/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:30:01 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/25 18:30:01 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data;

	data.id = 42;
	data.name = "Amy";

	Data* original = &data;

	uintptr_t raw = Serializer::serialize(original);

	Data* restored = Serializer::deserialize(raw);

	std::cout << "Original: " << original << std::endl;
	std::cout << "Restored: " << restored << std::endl;

	if (original == restored)
		std::cout << "Pointers are equal!" << std::endl;

	std::cout << restored->id << std::endl;
	std::cout << restored->name << std::endl;

	return 0;
}

