/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamaren <pcamaren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:26:20 by pcamaren          #+#    #+#             */
/*   Updated: 2022/09/15 19:53:36 by pcamaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal string constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy) {
	*this = copy;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string		WrongAnimal::getType( void ) const {
	return (this->_type);
}

void			WrongAnimal::setType(std::string const type) {
	this->_type = type;
}

void			WrongAnimal::makeSound( void ) const {
	std::cout << "Wrong Animal making a sound wu!" << std::endl;
}
