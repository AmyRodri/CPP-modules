/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:35:55 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/02 13:35:55 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void print(const T& n)
{
    std::cout << n << " ";
}

void multiplyByTwo(int& n)
{
    n *= 2;
}

void addTen(int& n)
{
    n += 10;
}

void capitalize(char& c)
{
	c = std::toupper(c);
}

void addExclamation(std::string& str)
{
    str += "!";
}

int main()
{
    std::cout << "\n=== TESTE 1: MULTIPLICAR POR 2 ===\n";

    int numbers[] = {1, 2, 3, 4, 5};

    iter(numbers, 5, multiplyByTwo);
    iter(numbers, 5, print<int>);

    std::cout << "\n\n=== TESTE 2: SOMAR 10 ===\n";

    iter(numbers, 5, addTen);
    iter(numbers, 5, print<int>);

    std::cout << "\n\n=== TESTE 3: MAIÚSCULAS ===\n";

    char letters[] = {'a', 'b', 'c', 'd'};

    iter(letters, 4, capitalize);
    iter(letters, 4, print<char>);

    std::cout << "\n\n=== TESTE 4: STRINGS ===\n";

    std::string names[] = {
        "Amy",
        "Joao",
        "Maria"
    };

    iter(names, 3, addExclamation);
    iter(names, 3, print<std::string>);

    std::cout << std::endl;

    return 0;
}

