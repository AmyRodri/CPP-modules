/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 21:04:57 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/20 21:05:48 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class AForm;

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();

	AForm *makeForm(const std::string &nameForm, const std::string &target);
private:

	struct FormList
	{
		std::string name;
		AForm *(*func)(const std::string &target);
	};

	static AForm *createRobotomy(const std::string &target);
	static AForm *createShrubbery(const std::string &target);
	static AForm *createPresidential(const std::string &target);
	
};

#endif // !INTERN_HPP

