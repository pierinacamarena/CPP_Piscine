/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:54:21 by pierina           #+#    #+#             */
/*   Updated: 2022/09/27 16:51:18 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
class Animal {

public:

	Animal ( void );
	Animal (std::string const type);
	Animal (Animal const & copy);
	virtual ~Animal ( void );

	Animal &	operator=(Animal const & rhs);	
	
	std::string		getType( void ) const;
	void			setType(std::string const type);

	virtual void	makeSound( void ) const;

protected:

	std::string	_type;
};

#endif