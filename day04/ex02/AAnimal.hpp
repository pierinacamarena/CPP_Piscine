/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:54:21 by pierina           #+#    #+#             */
/*   Updated: 2022/09/16 10:51:05 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {

public:

	AAnimal ( void );
	AAnimal (std::string const type);
	AAnimal (AAnimal const & copy);
	virtual ~AAnimal ( void );

	AAnimal &	operator=(AAnimal const & rhs);	
	
	std::string		getType( void ) const;
	void			setType(std::string const type);

	virtual void	makeSound( void ) const = 0;

protected:

	std::string	_type;
};

#endif