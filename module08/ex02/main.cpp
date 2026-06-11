/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:59:39 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/06/11 15:59:39 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

// #include <list>
// int main()
// {
// 	std::cout << "=== MutantStack ===" << std::endl;
//
// 	{
// 		MutantStack<int> mstack;
//
// 		mstack.push(5);
// 		mstack.push(17);
//
// 		std::cout << mstack.top() << std::endl;
//
// 		mstack.pop();
//
// 		std::cout << mstack.size() << std::endl;
//
// 		mstack.push(3);
// 		mstack.push(5);
// 		mstack.push(737);
// 		//[...]
// 		mstack.push(0);
//
// 		MutantStack<int>::iterator it = mstack.begin();
// 		MutantStack<int>::iterator ite = mstack.end();
//
// 		++it;
// 		--it;
//
// 		while (it != ite)
// 		{
// 			std::cout << *it << std::endl;
// 			++it;
// 		}
//
// 		std::stack<int> s(mstack);
// 	}
//
// 	std::cout << "=== Stack ===" << std::endl;
//
// 	{
// 	    std::list<int> lst;
//
// 	    lst.push_back(5);
// 	    lst.push_back(17);
//
// 	    std::cout << lst.back() << std::endl;
//
// 	    lst.pop_back();
//
// 	    std::cout << lst.size() << std::endl;
//
// 	    lst.push_back(3);
// 	    lst.push_back(5);
// 	    lst.push_back(737);
// 	    // [...]
// 	    lst.push_back(0);
//
// 	    std::list<int>::iterator it = lst.begin();
// 	    std::list<int>::iterator ite = lst.end();
//
// 	    ++it;
// 	    --it;
//
// 	    while (it != ite)
// 	    {
// 	        std::cout << *it << std::endl;
// 	        ++it;
// 	    }
//
// 	    std::list<int> s(lst);
// 	}
//
// 	return 0;
// }

int main()
{
    std::cout << "===== BASIC TEST =====" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(42);
    mstack.push(0);

    std::cout << "\n===== FORWARD ITERATION =====" << std::endl;

    for (MutantStack<int>::iterator it = mstack.begin();
         it != mstack.end();
         ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== REVERSE ITERATION =====" << std::endl;

    for (MutantStack<int>::reverse_iterator it = mstack.rbegin();
         it != mstack.rend();
         ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    MutantStack<int> copy(mstack);

    for (MutantStack<int>::iterator it = copy.begin();
         it != copy.end();
         ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;

    MutantStack<int> assigned;
    assigned.push(999);
    assigned = mstack;

    for (MutantStack<int>::iterator it = assigned.begin();
         it != assigned.end();
         ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== CONST ITERATORS =====" << std::endl;

    const MutantStack<int> constStack(mstack);

    for (MutantStack<int>::const_iterator it = constStack.begin();
         it != constStack.end();
         ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n===== STACK OPERATIONS =====" << std::endl;

    while (!mstack.empty())
    {
        std::cout << "top = " << mstack.top() << std::endl;
        mstack.pop();
    }

    std::cout << "size after clear: " << mstack.size() << std::endl;

    return 0;
}

