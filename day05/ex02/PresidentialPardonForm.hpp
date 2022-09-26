/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:47 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/23 18:47:09 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <string>
#include <iostream>

class PresidentialPardonForm: public Form {

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
	
	std::string					getTarget() const;
	void						execute(Bureaucrat const & executor) const;

private:

	std::string		_target;
};

#endif