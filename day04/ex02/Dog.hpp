/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:27 by pierina           #+#    #+#             */
/*   Updated: 2022/09/27 11:56:00 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:

	Dog( void );
	Dog( Dog const & dog );
	virtual ~Dog( void );
	
	Dog &	operator=(Dog const & rhs);

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;

private:

	Brain * _dogBrain;

};

#endif