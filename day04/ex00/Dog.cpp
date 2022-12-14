/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:29 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 18:56:34 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const & dog ) {
	*this = dog;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs) {
	this->_type = rhs._type;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof woof woof" << std::endl;
}
