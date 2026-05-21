/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamys <kamys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:08:46 by kamys             #+#    #+#             */
/*   Updated: 2026/05/18 19:21:43 by kamys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	/* data */
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

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
	int					getGrade() const;
	void				setGrade(int n);
	void				incrementGrade();
	void				decrementGrade();

	void	signForm(AForm &);
	void	executeForm(AForm const & form) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);
