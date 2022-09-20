/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:49 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/20 12:11:37 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Target"){
	std::cout << "Robotomy Request Form default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "Robotomy Request Form String constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) {
	*this = copy;
	std::cout << "Robotomy Request Form copy constructor called" << std::endl;
	
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Request Form destructor called" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	this->_target = rhs._target;
	return *this;
}
	
std::string					RobotomyRequestForm::getTarget() {
	return (this->_target);
}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	
}