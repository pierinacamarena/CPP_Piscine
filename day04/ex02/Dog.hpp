/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:27 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 21:27:05 by pcamaren         ###   ########.fr       */
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
	~Dog( void );
	
	Dog &	operator=(Dog const & rhs);

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;

protected:

	std::string	_type;

private:

	Brain * _dogBrain;

};

#endif