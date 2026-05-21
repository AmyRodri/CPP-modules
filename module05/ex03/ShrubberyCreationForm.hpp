/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:17:35 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/19 20:17:35 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
private:
	std::string target;
};

