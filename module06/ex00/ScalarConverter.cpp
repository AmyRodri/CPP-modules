/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:21:33 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/25 11:27:09 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void)other;};

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return (*this);};

ScalarConverter::~ScalarConverter() {};

static int isPseudoLiteral(const std::string& literal)
{
	if (literal == "nan" || literal == "nanf"
			|| literal == "+inf" || literal == "+inff"
			|| literal == "-inf" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}

	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (1);
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return (1);
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return (1);
	}
	else if (literal == "inf")
	{
		std::cout << "Invalid: " << literal << std::endl;
		return (1);
	}
	return (0);
}

static void printChar(double d)
{
	if (std::isnan(d) || d < 0 || d > 127)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}

	char c = static_cast<char>(d);

	if (!std::isprint(c))
	{
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	std::cout << "char: " << c << std::endl;
}

static void printInt(double d)
{
	if (std::isnan(d)
			|| d > std::numeric_limits<int>::max()
			|| d < std::numeric_limits<int>::min())
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: " << static_cast<int>(d) << std::endl;
}

static void printFloat(double d)
{
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
}

static void printDouble(double d)
{
	std::cout << std::fixed << std::setprecision(1);

	std::cout << "double: " << static_cast<float>(d) << std::endl;
}

static int isValidLiteral(char *end)
{

	if (*end == '\0')            /* int or double */
		return (1);
	else if (*end == 'f' && *(end + 1) == '\0') /* float */
		return (1);
	else                         /* invalid */
		return (0);
}

void ScalarConverter::convert(const std::string &literal)
{
	char *end;
	double d;

	if (isPseudoLiteral(literal))
		return;
	if (literal.length() == 1 && !isdigit(literal[0])) /* char */
	{
		d = static_cast<double>(literal[0]);
	}
	else
	{
		d = std::strtod(literal.c_str(), &end);
		if (!isValidLiteral(end))
		{
			std::cout << "Invalid: " << literal << std::endl;
			return;
		}
	}
	printChar(d);
	printInt(d);
	printFloat(d);
	printDouble(d);
}

