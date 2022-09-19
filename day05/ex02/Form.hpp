/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:16:50 by pierina           #+#    #+#             */
/*   Updated: 2022/09/19 21:42:08 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>


class Bureaucrat;

class AForm {

public:
	AForm( void );
	AForm( std::string const name, int const gSign, int const gExec);
	AForm(AForm const & copy);
	virtual	~AForm( void );
	
	AForm & 		operator=(AForm const & rhs);
	
	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeSign() const;
	int 			getGradeExec() const;
	
	void			beSigned(Bureaucrat & buro);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class		GradeTooHighException : public std::exception {	
		public:
			virtual const char *what() const throw() {
				return ("Grade is too high");
			}
	};

	class		GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return ("Grade is too low");
			}
	};

	class GradeOutofRangeException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade is out of range");
			}
	};
private:

	std::string	const	_name;
	bool				_isSigned;
	int const			_gradeSign;
	int	const			_gradeExec;
};

std::ostream &		operator<<( std::ostream & o, AForm const & f);

#include "Bureaucrat.hpp"

#endif
