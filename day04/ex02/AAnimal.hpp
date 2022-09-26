/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:54:21 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 21:34:15 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {

public:

	virtual ~AAnimal ( void );

	AAnimal &	operator=(AAnimal const & rhs);	
	
	std::string		getType( void ) const;
	void			setType(std::string const type);

	virtual void	makeSound( void ) const = 0;
	virtual Brain*	getBrain( void ) const = 0;
	

protected:

	AAnimal ( void );
	AAnimal (std::string const type);
	AAnimal (AAnimal const & copy);
	std::string	_type;
};

#endif