/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:29 by pierina           #+#    #+#             */
/*   Updated: 2022/09/16 10:21:13 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"){
	this->_dogBrain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const & dog ) : Animal( dog ){
	*this = dog;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void ) {
	delete this->_dogBrain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs) {
	this->_type = rhs._type;
	this->_dogBrain = new Brain();
	*(this->_dogBrain) = *(rhs._dogBrain);
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof woof woof" << std::endl;
}
