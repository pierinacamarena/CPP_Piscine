/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:05:59 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/19 13:13:44 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Unnamed Bureaucrat"), _grade(150) {
	std::cout << this->getName() << " Bureaucrat default constructor called" << std::endl;
	
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name), _grade(grade) {
	if (this->getGrade() < 1 || this->getGrade() > 150)
		throw Bureaucrat::GradeOutofRangeException();
	std::cout << this->getName() << " Bureaucrat string/int constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy) {
	*this = copy;
	std::cout << this->getName() << "Bureaucrat copy constructor called" << std::endl;	
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << this->getName() << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs) {
	this->_name = rhs.getName();
	this->_grade = rhs._grade;
	if (this->getGrade() < 1 || this->getGrade() > 150)
		throw Bureaucrat::GradeOutofRangeException();
	return (*this);
}
	
std::string	const	Bureaucrat::getName() const {
	return (this->_name);
}

int					Bureaucrat::getGrade() const {
	return (this->_grade);
}

void				Bureaucrat::incrementGrade() {
	if (this->_grade > 1) {
		this->_grade -= 1;
	}
	else {
		throw GradeTooHighException();
	}
}

void				Bureaucrat::decrementGrade() {
	if (this->_grade < 150) {
		this->_grade += 1;
	}
	else {
		throw GradeTooLowException();
	}
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & b) {
	o << b.getName() << ", bureaucrat grade: " << b.getGrade();
	return (o);
}