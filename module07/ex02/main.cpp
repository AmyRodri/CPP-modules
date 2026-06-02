/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:30:12 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/02 14:30:12 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << "\n=== TESTE 1: ARRAY VAZIO ===\n";

	Array<int> empty;

	std::cout << "size: " << empty.size() << std::endl;

	std::cout << "\n=== TESTE 2: ARRAY COM TAMANHO ===\n";

	Array<int> numbers(5);

	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i * 10;

	for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << "numbers[" << i << "] = "
				  << numbers[i] << std::endl;

	std::cout << "\n=== TESTE 3: COPY CONSTRUCTOR ===\n";

	Array<int> copy(numbers);

	copy[0] = 999;

	std::cout << "Original[0]: " << numbers[0] << std::endl;
	std::cout << "Copy[0]:     " << copy[0] << std::endl;

	std::cout << "\n=== TESTE 4: OPERADOR DE ATRIBUICAO ===\n";

	Array<int> assigned;

	assigned = numbers;

	assigned[1] = 555;

	std::cout << "Original[1]: " << numbers[1] << std::endl;
	std::cout << "Assigned[1]: " << assigned[1] << std::endl;

	std::cout << "\n=== TESTE 5: SELF ASSIGNMENT ===\n";

	numbers = numbers;

	for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;

	std::cout << "\n=== TESTE 6: OUT OF BOUNDS ===\n";

	try
	{
		std::cout << numbers[42] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: "
				  << e.what() << std::endl;
	}

	std::cout << "\n=== TESTE 7: ARRAY DE STRINGS ===\n";

	Array<std::string> names(3);

	names[0] = "Amy";
	names[1] = "Maria";
	names[2] = "Joao";

	for (unsigned int i = 0; i < names.size(); i++)
		std::cout << names[i] << std::endl;

	std::cout << "\n=== TODOS OS TESTES FINALIZADOS ===\n";

	return 0;
}

