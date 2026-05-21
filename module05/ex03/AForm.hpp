/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:38:55 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/19 19:29:34 by AmyRodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {
public:
	AForm();
	AForm(const std::string &name, int gradeSing, int gradeExec);
	AForm(const AForm &);
	AForm &operator=(const AForm &);
	~AForm();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{ return "grade too high"; }
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{ return "grade too low"; }
	};

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{ return "Form not signed"; }
	};

	const std::string	&getName() const;
	bool				getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void	beSigned(const Bureaucrat &);

	virtual void execute(Bureaucrat const & executor) const = 0;

protected:
	void checkExecute(Bureaucrat const & executor) const;

private:
	const std::string	name;
	bool				isSigned;
	const int			gradeSign;
	const int			gradeExec;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
