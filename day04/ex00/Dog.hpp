/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:27 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 20:21:56 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & dog );
	~Dog( void );
	
	Dog &	operator=(Dog const & rhs);

	void	makeSound( void ) const;

};

#endif