/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:27 by pierina           #+#    #+#             */
/*   Updated: 2022/09/27 16:51:57 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & dog );
	~Dog( void );
	
	Dog &	operator=(Dog const & rhs);

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;

private:

	Brain * _dogBrain;

};

#endif
