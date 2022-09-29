/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:57 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/22 19:27:48 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm() : Form("ShruberryCreationForm", 145, 137), _target("Target"){
	// std::cout << "Shruberry Creation Form default constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : Form("ShruberryCreationForm", 145, 137), _target(target){
	// std::cout << "Shruberry Creation Form string constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const & copy) {
	*this = copy;
	// std::cout << "Shruberry Creation Form copy constructor called" << std::endl;
}

ShruberryCreationForm::~ShruberryCreationForm() {
	// std::cout << "Shruberry Creation Form destructor called" << std::endl;	
}

ShruberryCreationForm &			ShruberryCreationForm::operator=(ShruberryCreationForm const & rhs) {
	this->_target = rhs._target;
	return *this;
}
	
std::string					ShruberryCreationForm::getTarget() const {
	return (this->_target);
}

void						ShruberryCreationForm::execute(Bureaucrat const & executor) const{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->getGradeExec()) {
			std::cout << "The grade of " << executor.getName() << " is too low" << std::endl;
			throw Form::GradeTooLowException();
		}
		else {
			std::stringstream	str;
			str <<  _target << "_shrubbery";
			std::ofstream outfile (str.str().c_str());
			// for (int i = 0; i <= 255; i++)
			// 	outfile << char(i);
			std::string	content = 
				"     ccee88oo          \n"
				"  C8O8O8Q8PoOb o8oo    \n"
				"         |||/\\        \n"
				"         |||\\/        \n"
				"         |||||         \n"
				"  .....\\//||||\\....  \n";
			outfile << content;
			outfile.close();
		}
	}
	else {
		throw FormNotSignedException();
	}
}