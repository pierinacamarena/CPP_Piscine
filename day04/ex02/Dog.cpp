/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:29 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 21:27:06 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	this->setType("Dog");
	this->_dogBrain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( std::string const type) : _type(type) {
	std::cout << "Dog copy constructor called" << std::endl;
}


Dog::Dog( Dog const & dog ) {
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

std::string		Dog::getType( void ) const {
	return (this->_type);
}

void			Dog::setType(std::string const type) {
	this->_type = type;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof woof woof" << std::endl;
}
