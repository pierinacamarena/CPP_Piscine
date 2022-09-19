/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:16:50 by pierina           #+#    #+#             */
/*   Updated: 2022/09/19 13:54:52 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form {

public:
	Form( void );
	Form( std::string const name, bool isSigned, int const gradeSign, int const gradeExec );
	Form(Form const & copy);
	~Form( void );
	
	Form & operator=(Form const & rhs);
	
	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeSign() const;
	int 		getGradeExec() const;
	
	
	
private:

	std::string	const	_name;
	bool				_isSigned;
	int const			_gradeSign;
	int	const			_gradeExec;
};

std::ostream &		operator<<( std::ostream & o, Form const & f);

#endif

Add also a beSigned() member function to the Form that takes a Bureaucrat as
parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
(higher or egal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException.
Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
it will print something like:
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.
Implement and turn in some tests to ensure everything works as expected.