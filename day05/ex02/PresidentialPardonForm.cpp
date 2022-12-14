/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:43 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/30 09:14:11 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("Target"){
	// std::cout << "Presidential form default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target){
	// std::cout << "Presidential form string constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : Form("PresidentialPardonForm", 25, 5){
	*this = copy;
	// std::cout << "Presidential form copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "Presidential form destructor called" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	this->_target = rhs._target;
	return *this;
}
	
std::string					PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void						PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->getGradeExec()) {
			std::cout << "The grade of " << executor.getName() << " is too low to execute " << _target << std::endl;
			throw GradeTooLowException();
		}
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else {
		throw FormNotSignedException();
	}
}
