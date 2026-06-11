/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:57:58 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/10 15:57:58 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::cout << "\n=== TESTE 1: SUBJECT ===\n";

    try
    {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 2: MENOS DE 2 NUMEROS ===\n";

    try
    {
        Span sp(5);

        sp.addNumber(42);

        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 3: SPAN CHEIO ===\n";

    try
    {
        Span sp(3);

        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);

        sp.addNumber(4);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 4: INTERVALO DE ITERADORES ===\n";

    try
    {
        Span sp(10000);

        std::vector<int> v;

        for (int i = 0; i < 10000; i++)
            v.push_back(i);

        sp.addNumber(v.begin(), v.end());

        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 5: NUMEROS NEGATIVOS ===\n";

    try
    {
        Span sp(5);

        sp.addNumber(-100);
        sp.addNumber(-50);
        sp.addNumber(0);
        sp.addNumber(25);
        sp.addNumber(100);

        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n=== TESTE 6: INTERVALO MAIOR QUE A CAPACIDADE ===\n";

    try
    {
        Span sp(5);

        std::vector<int> v;

        for (int i = 0; i < 10; i++)
            v.push_back(i);

        sp.addNumber(v.begin(), v.end());
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	std::cout << std::endl;

    return 0;
}

