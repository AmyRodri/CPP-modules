/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:38:55 by AmyRodri          #+#    #+#             */
/*   Updated: 2026/05/18 19:27:11 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
public:
	Form();
	Form(const std::string &name, int gradeSing, int gradeExec);
	Form(const Form &);
	Form &operator=(const Form &);
	~Form();

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

	const std::string	&getName() const;
	bool				getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void	beSigned(const Bureaucrat &);

private:
	const std::string	name;
	bool				isSigned;
	const int			gradeSign;
	const int			gradeExec;
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

