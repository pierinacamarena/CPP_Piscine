/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:29 by pierina           #+#    #+#             */
/*   Updated: 2022/09/26 21:28:45 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog( void ) :  AAnimal("Dog") {
	this->_dogBrain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const & dog ) : AAnimal(dog) {
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

Brain*	Dog::getBrain( void ) const {
	return (this->_dogBrain);
}
