/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:23:17 by pierina           #+#    #+#             */
/*   Updated: 2022/09/16 10:34:34 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("AAnimal") {
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal string constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & copy) {
	*this = copy;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal( void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs) {
	this->_type = rhs._type;
	return *this;
}

std::string		AAnimal::getType( void ) const {
	return (this->_type);
}

void			AAnimal::setType(std::string const type) {
	this->_type = type;
}
