/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:54 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/23 18:47:19 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM_HPP
#define SHRUBERRY_CREATION_FORM_HPP

#include <string>
#include <iostream>
#include <fstream>
# include <sstream>

class ShruberryCreationForm: public Form {

public:

	ShruberryCreationForm();
	ShruberryCreationForm(std::string target);
	ShruberryCreationForm(ShruberryCreationForm const & copy);
	virtual ~ShruberryCreationForm();

	ShruberryCreationForm &			operator=(ShruberryCreationForm const & rhs);
	
	std::string					getTarget() const;
	void						execute(Bureaucrat const & executor) const;

private:

	std::string		_target;
};

#endif