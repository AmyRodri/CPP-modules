/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:04:21 by kamys             #+#    #+#             */
/*   Updated: 2026/02/18 19:46:03 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

static	int	ErrorWrite(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

static std::string	replaceAll(std::string line, std::string target, std::string replace)
{
	std::string	result;

	size_t	i = 0;
	while (i < line.size())
	{
		if (line.substr(i, target.size()) == target)
		{
			result += replace;
			i += target.size();
		}
		else
		{
			result += line[i];
			i++;
		}
	}
	return (result);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (ErrorWrite("Error: Numbers of arguments"));
	
	std::string	fileName = av[1];
	std::string	target = av[2];
	std::string	replace = av[3];
	
	std::ifstream	inFile(fileName.c_str());
	if (!inFile)
		return (ErrorWrite("Error: can't open file"));
	std::ofstream	outFile((fileName + ".replace").c_str());
	if (!outFile)
		return (ErrorWrite("Error: can't open file"));
	
	std::string line;
	while (std::getline(inFile, line))
	{
		line = replaceAll(line, target, replace);
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}
