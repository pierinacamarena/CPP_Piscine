/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:16:47 by pierina           #+#    #+#             */
/*   Updated: 2022/09/23 19:23:07 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeSign(150), _gradeExec(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const name, int const gSign, int const gExec) : _name(name), _isSigned(false), _gradeSign(gSign), _gradeExec(gExec){
	if (this->getGradeSign() < 1 || this->getGradeExec() < 1)
		throw Form::GradeTooHighException();
	if (this->getGradeSign() > 150 || this->getGradeExec() > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const & copy) : _gradeSign(copy.getGradeSign()), _gradeExec(copy.getGradeExec()) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form &	Form::operator=(Form const & rhs) {
	this->getName() = rhs.getName();
	this->_isSigned = rhs.getIsSigned();
	return *this;
}

std::string	Form::getName() const {
	return (this->_name);
}

bool		Form::getIsSigned() const {
	return (this->_isSigned);
}

int			Form::getGradeSign() const {
	return (this->_gradeSign);
}

int 		Form::getGradeExec() const {
	return (this->_gradeExec);
}

void		Form::beSigned(Bureaucrat & buro) {
	if (this->getIsSigned() == true) {
		std::cout << _name << " is already signed" << std::endl;
		return;
	}
	if ( buro.getGrade() <= this->getGradeSign() )
			this->_isSigned = true;
	else {
		std::cout << buro.getName() << " could not sign form: " << _name << std::endl;
		throw Form::GradeTooLowException();
	}
}

std::ostream &		operator<<( std::ostream & o, Form const & f) {
	o << "Form name: " << f.getName() << std::endl;
	o << "Sign status: " << f.getIsSigned() << std::endl;
	o << "Sign grade: " << f.getGradeSign() << std::endl;
	o << "Exec grade: " << f.getGradeExec();

	return (o);
}
