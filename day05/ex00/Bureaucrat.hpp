/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:05:53 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/19 15:54:25 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {

public:

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade);
	Bureaucrat( Bureaucrat const & copy);
	~Bureaucrat( void );

	Bureaucrat &		operator=(Bureaucrat const & rhs);
	
	std::string	const	getName() const;
	int					getGrade() const;

	void				incrementGrade();
	void				decrementGrade();


	class GradeTooHighException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade reached its upper limit");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade reached its lower limit");
			}
	};

protected:

	std::string			_name;
	int					_grade;

};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & b);

#endif
