/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AmyRodri <amyrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 23:32:40 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/19 23:32:40 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class Bureaucrat;

class PresidentialPardonForm : public AForm {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
private:
	std::string target;
};

#endif // PRESIDENTIALPARDONFORM_HPP

