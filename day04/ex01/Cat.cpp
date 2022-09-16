/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierina <pierina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:32:50 by pierina           #+#    #+#             */
/*   Updated: 2022/09/16 10:21:28 by pierina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat"){
	this->_catBrain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
	return ;
}

Cat::Cat( Cat const & cat) : Animal(cat) {
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void ) {
	delete this->_catBrain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {
	this->_type = rhs._type;
	this->_catBrain = new Brain();
	*(this->_catBrain) = *(rhs._catBrain);
	return *this;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meooow meooow meooow" << std::endl;
}
