/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:20:07 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/10 12:37:53 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::cout << "=== VECTOR ===\n";

    std::vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    try
    {
        std::vector<int>::const_iterator it = easyfind(vec, 30);
        std::cout << "Encontrado: " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        easyfind(vec, 99);
    }
    catch (const std::exception& e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    std::cout << "\n=== LIST ===\n";

    std::list<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);

    try
    {
        std::list<int>::const_iterator it = easyfind(lst, 4);
        std::cout << "Encontrado: " << *it << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        easyfind(lst, 42);
    }
    catch (const std::exception& e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    return 0;
}

