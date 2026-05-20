/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:09:14 by kamys             #+#    #+#             */
/*   Updated: 2026/05/18 19:22:55 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <exception>

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
        out << obj.getName() << " bureaucrat with classification " << obj.getGrade();
        return (out);
}

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{ }

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{ }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{ }

const std::string &Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int n)
{
	if (n > 150)
		throw GradeTooLowException();
	if (n < 1)
		throw GradeTooHighException();
	this->grade = n;
}

void	Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName()
			<< " signed "
			<< form.getName()
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName()
			<< " couldn't sign "
			<< form.getName()
			<< " because "
			<< e.what()
			<< std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);

		std::cout << name
			<< " executed "
			<< form.getName()
			<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name
			<< " couldn't execute "
			<< form.getName()
			<< " because "
			<< e.what()
			<< std::endl;
	}
}

