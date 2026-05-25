/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:44:02 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/25 11:44:02 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

// int main (int argc, char *argv[])
// {
// 	if (argc != 2)
// 		return (1);
//
// 	ScalarConverter::convert(argv[1]);
//
// 	return (0);
// }

int	main(void)
{
	std::cout << "===== CHAR =====" << std::endl;
	ScalarConverter::convert("a");
	std::cout << std::endl;

	std::cout << "===== INT =====" << std::endl;
	ScalarConverter::convert("42");
	std::cout << std::endl;

	std::cout << "===== NEGATIVE INT =====" << std::endl;
	ScalarConverter::convert("-42");
	std::cout << std::endl;

	std::cout << "===== DOUBLE =====" << std::endl;
	ScalarConverter::convert("4.2");
	std::cout << std::endl;

	std::cout << "===== FLOAT =====" << std::endl;
	ScalarConverter::convert("4.2f");
	std::cout << std::endl;

	std::cout << "===== NAN =====" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;

	std::cout << "===== NANF =====" << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;

	std::cout << "===== +INF =====" << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;

	std::cout << "===== -INF =====" << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;

	std::cout << "===== +INFF =====" << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;

	std::cout << "===== -INFF =====" << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;

	std::cout << "===== INVALID =====" << std::endl;
	ScalarConverter::convert("hello");
	std::cout << std::endl;

	std::cout << "===== NON DISPLAYABLE =====" << std::endl;
	ScalarConverter::convert("7");
	std::cout << std::endl;

	std::cout << "===== ASCII SPACE =====" << std::endl;
	ScalarConverter::convert("32");
	std::cout << std::endl;

	std::cout << "===== ASCII MAX PRINTABLE =====" << std::endl;
	ScalarConverter::convert("126");
	std::cout << std::endl;

	std::cout << "===== ASCII DEL =====" << std::endl;
	ScalarConverter::convert("127");
	std::cout << std::endl;

	std::cout << "===== HUGE NUMBER =====" << std::endl;
	ScalarConverter::convert("999999999999999999999999999999999999999");
	std::cout << std::endl;

	std::cout << "===== ZERO =====" << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;

	std::cout << "===== FLOAT ZERO =====" << std::endl;
	ScalarConverter::convert("0.0f");
	std::cout << std::endl;

	std::cout << "===== DOUBLE ZERO =====" << std::endl;
	ScalarConverter::convert("0.0");
	std::cout << std::endl;

	return (0);
}

