/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:29 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 21:06:01 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"){
	std::cout << "Dog default constructor called" << std::endl;
	this->_dogBrain = new Brain();
}

Dog::Dog( Dog const & dog ) : Animal( dog ){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_dogBrain;
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

Brain*	Dog::getBrain( void ) const {
	return (this->_dogBrain);
}

