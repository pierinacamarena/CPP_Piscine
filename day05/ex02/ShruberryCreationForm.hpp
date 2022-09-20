/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreation.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:24:54 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/19 21:53:08 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_HPP
#define SHRUBERRY_CREATION_HPP

class ShruberryCreation: public Form {

public:

	ShruberryCreation();
	ShruberryCreation(std::string target);
	ShruberryCreation(ShruberryCreation const & copy);
	~ShruberryCreation();

	ShruberryCreation &			operator=(ShruberryCreation const & rhs);
	
	std::string					getTarget();
	void						execute(Bureaucrat const & executor) const;

private:

	std::string		_target;
};

#endif