/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:52 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/23 18:47:14 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include <string>
#include <iostream>

class RobotomyRequestForm: public Form {

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);
	
	std::string					getTarget() const;
	void						execute(Bureaucrat const & executor) const;

private:

	std::string		_target;
};

#endif