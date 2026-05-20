/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:37:52 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/18 19:27:06 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
	out << "AForm "
		<< obj.getName()
		<< ", signed: "
		<< (obj.getSigned() ? "yes" : "no")
		<< ", grade to sign: "
		<< obj.getGradeSign()
		<< ", grade to execute: "
		<< obj.getGradeExec();

	return (out);
}

AForm::AForm() : name("Default"), isSigned(false), gradeSign(150), gradeExec(150)
{ }

AForm::AForm(const AForm &other)
	: name(other.name), isSigned(other.isSigned),
	gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{ }

AForm::AForm(const std::string &name, int gradeSign, int gradeExec)
	: name(name), isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->isSigned = other.getSigned();
	return (*this);
}

AForm::~AForm()
{ }

const std::string &AForm::getName() const
{
	return (name);
}

bool AForm::getSigned() const
{
	return (isSigned);
}

int AForm::getGradeSign() const
{
	return (gradeSign);
}

int AForm::getGradeExec() const
{
	return (gradeExec);
}

void AForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

void	AForm::checkExecute(Bureaucrat const & executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > gradeExec)
		throw GradeTooLowException();
}

