/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:49 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/30 09:14:25 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Target"){
	// std::cout << "Robotomy Request Form default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target){
	// std::cout << "Robotomy Request Form String constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : Form("RobotomyRequestForm", 72, 45) {
	*this = copy;
	// std::cout << "Robotomy Request Form copy constructor called" << std::endl;
	
}

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "Robotomy Request Form destructor called" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	this->_target = rhs._target;
	return *this;
}
	
std::string					RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->getGradeExec()) {
			std::cout << "The grade of " << executor.getName() << " is too low" << std::endl;
			throw GradeTooLowException();
		}
		else {
			std::cout << "Drrrriling noises , trrrrr" << std::endl;
			if ((rand() % 2) == 1)
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			else 
				std::cout << "Robotomy failed" << std::endl;
			}
	}
	else
	{
		throw FormNotSignedException();
	}
}