/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShuberryCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:57 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/20 17:51:07 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShuberryCreationForm.hpp"

ShuberryCreationForm::ShuberryCreationForm() : Form("ShuberryCreationForm", 145, 137), _target("Target"){
	std::cout << "Shruberry Creation Form default constructor called" << std::endl;
}

ShuberryCreationForm::ShuberryCreationForm(std::string target) : Form("ShuberryCreationForm", 145, 137), _target(target){
	std::cout << "Shruberry Creation Form string constructor called" << std::endl;
}

ShuberryCreationForm::ShuberryCreationForm(ShuberryCreationForm const & copy) {
	*this = copy;
	std::cout << "Shruberry Creation Form copy constructor called" << std::endl;
}

ShuberryCreationForm::~ShuberryCreationForm() {
	std::cout << "Shruberry Creation Form destructor called" << std::endl;	
}

ShuberryCreationForm &			ShuberryCreationForm::operator=(ShuberryCreationForm const & rhs) {
	*this = rhs;
}
	
std::string					ShuberryCreationForm::getTarget() {
	return (this->_target);
}

void						execute(Bureaucrat const & executor) const {
	
}