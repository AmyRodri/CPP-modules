/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:23:48 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 17:36:05 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "Memory address -> str:		" << &str << std::endl;
	std::cout << "Memory address -> stringPTR:	" << stringPTR << std::endl;
	std::cout << "Memory address -> stringREF:	" << &stringREF << std::endl;

	std::cout << "\n";

	std::cout << "value -> str:		" << str << std::endl;
	std::cout << "value -> stringPTR:	" << *stringPTR << std::endl;
	std::cout << "value -> stringREF:	" << stringREF << std::endl;

	return (0);
}
