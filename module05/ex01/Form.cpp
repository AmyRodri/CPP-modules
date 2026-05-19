/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:37:52 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/18 19:27:06 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
	out << "Form "
		<< obj.getName()
		<< ", signed: "
		<< (obj.getSigned() ? "yes" : "no")
		<< ", grade to sign: "
		<< obj.getGradeSign()
		<< ", grade to execute: "
		<< obj.getGradeExec();

	return (out);
}

Form::Form() : name("Default"), isSigned(false), gradeSign(150), gradeExec(150)
{ }

Form::Form(const Form &other)
	: name(other.name), isSigned(other.isSigned),
	gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{ }

Form::Form(const std::string &name, int gradeSign, int gradeExec)
	: name(name), isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->isSigned = other.getSigned();
	return (*this);
}

Form::~Form()
{ }

const std::string &Form::getName() const
{
	return (name);
}

bool Form::getSigned() const
{
	return (isSigned);
}

int Form::getGradeSign() const
{
	return (gradeSign);
}

int Form::getGradeExec() const
{
	return (gradeExec);
}

void Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

