/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 23:08:35 by kamys             #+#    #+#             */
/*   Updated: 2026/03/01 23:30:53 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default") {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(const AMateria &other) : type(other.type) {}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return(this->type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
