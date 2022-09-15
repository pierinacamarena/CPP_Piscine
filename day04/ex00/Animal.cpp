/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:23:17 by pierina           #+#    #+#             */
/*   Updated: 2022/09/15 13:30:29 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal string constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & copy) {
	*this = copy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal( void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string		Animal::getType( void ) const {
	return (this->_type);
}

void			Animal::setType(std::string const type) {
	this->_type = type;
}

void			Animal::makeSound( void ) const {
	std::cout << "Animal making a sound wu!" << std::endl;
}
